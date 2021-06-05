// #pragma once

#include <QtWidgets/QMainWindow>
#include <QtCore/QObject>

class MainWindow: public QMainWindow {
    Q_OBJECT;

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};
