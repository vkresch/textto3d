#include "textto3d/include/mainwindow.h"

MainWindow::MainWindow(QWidget *parent){
    setSurfaceType(QWindow::OpenGLSurface);
    QSurfaceFormat format;
    format.setProfile(QSurfaceFormat::CompatibilityProfile);
    format.setVersion(2, 1);
    setFormat(format);
    
    context = new QOpenGLContext;
    context->setFormat(format);
    context->create();
    context->makeCurrent(this);

    openGLFunctions = context->functions();
}

MainWindow::~MainWindow(){

} 

void MainWindow::initializeGL(){
    resizeGL(this->width(), this->height());
}

void MainWindow::resizeGL(int w, int h){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0.0f, 0.0f, w, h);
    qreal aspectratio = qreal(w)/qreal(h);
    glOrtho(-1*aspectratio, 1*aspectratio, -1, 1, 1, -1);
}

void MainWindow::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);
    
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.5f, -0.5f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.5f, -0.5f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.5f, 0.5f);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(-0.5f, 0.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.4f, -0.4f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.8f, -0.1f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-0.1f, -0.8f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glEnd();
    
    glFlush();
}

void MainWindow::resizeEvent(QResizeEvent *event){
    resizeGL(this->width(), this->height());
    this->update();
}

void MainWindow::paintEvent(QPaintEvent *event){
    paintGL();
}
