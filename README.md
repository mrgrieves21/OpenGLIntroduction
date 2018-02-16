#OPENGL WORKSHOP


Q_OBJECT = makes it part of QT
**virtual function** = this can be inhereted
  initialize GL
  resize GL
  Paint GL = render scene

This sends colour to the buffer:
>>glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

The | allows to put the buffer_bit on one line.

This sets the oclour of the window:
>>void OpenGLWindow::initializeGL()
>>{
  >>glClearColor(1, 0, 0, 1);
>>}
