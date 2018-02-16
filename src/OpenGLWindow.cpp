#include "OpenGLWindow.h"

#ifdef __APPLE__
  #include <OpenGL/OpenGL.h> //this for apple because the headers are different on mac
#else
  #include <GL/gl.h>
#endif

OpenGLWindow::OpenGLWindow()
{
  setTitle("My first Window");
}

OpenGLWindow::~OpenGLWindow()
{

}

void OpenGLWindow::paintGL()
{
  glClear(GL_COLOR_BUFFER_BIT |
          GL_DEPTH_BUFFER_BIT);
}

void OpenGLWindow::initializeGL()
{
  glClearColor(1, 0, 0, 1);
}

void OpenGLWindow::resizeGL(int _w, int _h)
{

}

