#include "pch.h"
#include "VrInterface.h"

#include <kha/math/Vector3.h>
#include <kha/math/Matrix4.h>
#include <kha/math/Quaternion.h>
#include <kha/vr/PoseState.h>
#include <kha/vr/Pose.h>
#include <kha/vr/TimeWarpImage.h>
#include <kha/Image.h>


#include <VrApi/VrApi.h>




namespace Kore {

namespace VrInterface {
	// Is Set during Initialize
	static ovrMobile* ovr;
	static JavaVM* cachedJVM;

void SetJVM(JavaVM* jvm) {
	cachedJVM = jvm;
}


void Initialize() {
	ovrModeParms parms;
	parms.AsynchronousTimeWarp = true;
	parms.AllowPowerSave = true;
	parms.DistortionFileName = 0;
	parms.EnableImageServer = false;


	// Grab the activity object
	JNIEnv* env;
	cachedJVM->AttachCurrentThread(&env, 0);


	jclass koreActivity = env->FindClass("com/ktxsoftware/kore/KoreActivity");
	jmethodID mid = env->GetStaticMethodID(koreActivity, "getInstance", "()Lcom/ktxsoftware/kore/KoreActivity;");


	jobject instance = env->CallStaticObjectMethod(koreActivity, mid);

	// Make sure that the garbage collector does not clean this up for us
	instance = env->NewGlobalRef(instance);

	parms.ActivityObject = instance;

	parms.GameThreadTid = 0;
	parms.CpuLevel = 2;
	parms.GpuLevel = 2;

	ovrHmdInfo returnedHmdInfo;



	ovr = ovr_EnterVrMode(parms, &returnedHmdInfo );
}

void WarpSwapBlack() {
	ovr_WarpSwapBlack(ovr);
}

void WarpSwapLoadingIcon() {
	ovr_WarpSwapLoadingIcon(ovr);
}



template<typename T> T* CreateEmpty() {

	return dynamic_cast<T*>(T::__CreateEmpty().mPtr);
}


kha::math::Quaternion_obj* GetQuaternion(const ovrQuatf& q) {
	kha::math::Quaternion_obj* quaternion = CreateEmpty<kha::math::Quaternion_obj>();
	quaternion->__construct(0.0f, 0.0f, 0.0f, 0.0f);

	quaternion->set_x(q.x);
	quaternion->set_y(q.y);
	quaternion->set_z(q.z);
	quaternion->set_w(q.w);

	return quaternion;
}

ovrQuatf GetQuaternion(kha::math::Quaternion_obj* quat) {
	ovrQuatf result;
	result.x = quat->get_x();
	result.y = quat->get_y();
	result.z = quat->get_z();
	result.w = quat->get_w();

	return result;
}

ovrMatrix4f GetMatrix(kha::math::Matrix4_obj* mat) {
	ovrMatrix4f result;
	for (int x = 0; x < 4; x++) {
		for (int y = 0; y < 4; y++) {
			float f = mat->get(x, y);
			result.M[x][y] = f;
		}
	}

	return result;
}

kha::math::Vector3_obj* GetVector3(const ovrVector3f& v) {
	kha::math::Vector3_obj* vector = CreateEmpty<kha::math::Vector3_obj>();
	vector->x = v.x;
	vector->y = v.y;
	vector->z = v.z;

	return vector;
}


ovrVector3f GetVector3(kha::math::Vector3_obj* v) {
	ovrVector3f result;
	result.x = v->x;
	result.y = v->y;
	result.z = v->z;

	return result;
}


kha::vr::Pose_obj* GetPose(const ovrPosef& nativePose) {
	kha::vr::Pose_obj* pose = CreateEmpty<kha::vr::Pose_obj>();
	pose->Position = GetVector3(nativePose.Position);
	pose->Orientation = GetQuaternion(nativePose.Orientation);

	return pose;
}



kha::vr::PoseState_obj* GetPoseState(const ovrPoseStatef& nativeState) {
	kha::vr::PoseState_obj* poseState = CreateEmpty<kha::vr::PoseState_obj>();

	poseState->TimeInSeconds = nativeState.TimeInSeconds;
	poseState->AngularAcceleration = GetVector3(nativeState.AngularAcceleration);
	poseState->AngularVelocity = GetVector3(nativeState.AngularVelocity);
	poseState->LinearAcceleration = GetVector3(nativeState.LinearAcceleration);
	poseState->LinearVelocity = GetVector3(nativeState.LinearVelocity);

	poseState->Pose = GetPose(nativeState.Pose);

	return poseState;
}

kha::vr::SensorState_obj* GetPredictedSensorState(const float time) {
	kha::vr::SensorState_obj* state = dynamic_cast<kha::vr::SensorState_obj*>(kha::vr::SensorState_obj::__CreateEmpty().mPtr);

	ovrSensorState nativeState = ovrHmd_GetSensorState(OvrHmd, time, true );

	state->Temperature = nativeState.Temperature;
	state->Status = nativeState.Status;
	state->Predicted = GetPoseState(nativeState.Predicted);
	state->Recorded = GetPoseState(nativeState.Recorded);

	return state;
}


	kha::vr::SensorState_obj* GetSensorState() {
		// 0.0 gets the last reading
		return GetPredictedSensorState(0.0f);
	}
	
	ovrPosef GetPose(kha::vr::Pose_obj* pose) {
		ovrPosef result;

		result.Orientation = GetQuaternion(pose->Orientation.mPtr);
		result.Position = GetVector3(pose->Position.mPtr);


		return result;
	}


	ovrPoseStatef GetPoseState(kha::vr::PoseState_obj* poseState) {
		ovrPoseStatef result;

		result.TimeInSeconds = poseState->TimeInSeconds;





		result.AngularAcceleration = GetVector3(poseState->AngularAcceleration.mPtr);
		result.AngularVelocity = GetVector3(poseState->AngularVelocity.mPtr);
		result.LinearAcceleration = GetVector3(poseState->LinearAcceleration.mPtr);
		result.LinearVelocity = GetVector3(poseState->LinearVelocity.mPtr);

		result.Pose = GetPose(poseState->Pose.mPtr);


		return result;
	}

	TimeWarpImage GetTimeWarpImage(kha::vr::TimeWarpImage_obj* image) {
		TimeWarpImage result;
		if (image->Image->renderTarget != 0) {
			result.TexId = image->Image->renderTarget->_texture;
		} else {
			result.TexId = image->Image->texture->texture;
		}
		result.Pose = GetPoseState(image->Pose.mPtr);
		result.TexCoordsFromTanAngles = GetMatrix(image->TexCoordsFromTanAngles.mPtr);

		return result;
	}

	void WarpSwap(kha::vr::TimeWarpParms_obj* parms) {
		TimeWarpParms* nativeParms = new TimeWarpParms();


		TimeWarpImage leftImage = GetTimeWarpImage(parms->LeftImage.mPtr);
		TimeWarpImage rightImage = GetTimeWarpImage(parms->RightImage.mPtr);



		nativeParms->Images[0][0] = leftImage;
		nativeParms->Images[1][0] = rightImage;



		ovr_WarpSwap(ovr, nativeParms);


		// TODO: What about memory - who deletes What?
		
		
	}
	
	double GetTimeInSeconds() {
		return ovr_GetTimeInSeconds();
		
	}
	
	


}

}
