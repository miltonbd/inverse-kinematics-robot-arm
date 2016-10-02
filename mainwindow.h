#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "myqglwidget.h"
#include <QHBoxLayout>
#include "include.h"
#include <QInputDialog>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MYGLWidget myGlw;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void addMenu();
    void init();
    void uiValueChanged();

private:
    Ui::MainWindow *ui;
public slots:
    void test();
    void onNewGame();
    void onCollectBalls();
    void onPlayerTurnChange();
    void onScale(double value);
    void onCameraXChanged(double value);
    void onCameraYChanged(double value);
     void onCameraZChanged(double value);
      void onCenterXChanged(double value);
       void onCenterYChanged(double value);
        void onCenterZChanged(double value);

        void onTargetXChanged(double value);
         void onTargetYChanged(double value);
          void onTargetZChanged(double value);

          void onUpCheckBoxToggle(bool checked);
          void onUiEvent();
          void onAddNewTarget();
          void onShowRules();
          void onFinishGame();

};

#endif // MAINWINDOW_H
