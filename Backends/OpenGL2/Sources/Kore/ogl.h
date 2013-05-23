#pragma once

#ifdef SYS_WINDOWS
#include <GL/glew.h>
#include <GL/gl.h>
#endif

#ifdef SYS_OSX
#include <OpenGL/gl3.h>
#include <OpenGL/gl3ext.h>
#endif

#ifdef SYS_IOS
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
#define OPENGLES
#endif

#ifdef SYS_ANDROID
//#include <EGL/egl.h>
#include <GLES/gl.h>
#define OPENGLES
#endif

#ifdef SYS_HTML5
#include <GL/gl.h>
#endif

#ifdef SYS_LINUX
#include <X11/X.h>
#include <X11/Xlib.h>
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glext.h>
#endif
