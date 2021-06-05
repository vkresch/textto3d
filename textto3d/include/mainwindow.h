#pragma once

#include <QtGui/QOpenGLWindow>
#include <QtCore/QObject>

class MainWindow: public QOpenGLWindow {
    Q_OBJECT;

public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();
    void resizeEvent(QResizeEvent *event);
    void paintEvent(QPaintEvent *event);
};
