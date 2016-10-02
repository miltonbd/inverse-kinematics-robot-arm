//#ifndef QGLWIDGET_H
//#define QGLWIDGET_H
//#include <QGLWidget>
//#include <QtOpenGL>
//#include <QTimer>
//#include "Game.h"
//#include "cube.h"

//class MYGLWidget : public QGLWidget
//    {
//        Q_OBJECT

//    public:
//        MYGLWidget(QWidget *parent = 0);
//        ~MYGLWidget();
//        Game game;
//        int _selection;
//        QPoint _lastPos;
//        int _rx;
//        int _ry;
//        int _rz;

//    protected:

//        QTimer _refreshTimer;
//        QVector<Cube*> _cubes;
//        void initializeGL();
//        void resizeGL(int w, int h);
//           virtual void paintEvent(QPaintEvent *event);
//        void paintGL();
//        int normalizeAngle(int angle);
//        void mousePressEvent(QMouseEvent *event);
//        void mouseMoveEvent(QMouseEvent *event);
//        void mouseReleaseEvent(QMouseEvent *event);
//        virtual void pick(const QPoint &pos);
//        virtual void processHits(GLint hits, GLuint buffer[]);
//        virtual void draw();

//public slots:
//        void updateQGLWindow();


//    };

//#endif // QGLWIDGET_H

#ifndef __GLWIDGET_H
#define __GLWIDGET_H

#include <QGLWidget>
#include <QTimer>

#include "arm.h"
#include "point.h"
#include "include.h"
#include <vector>
#include <QQueue>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "InterpolatePoint.h"
#include "myInterpolator.h"


using namespace std;

class Cube;

class MYGLWidget : public QGLWidget
{
  Q_OBJECT

  protected:

    QTimer _refreshTimer;

    int _selection;
    QPoint _lastPos;

  public:
     int currentPlayer=1;
     float totalCostPayer1=0;
      float totalCostPlayer2=0;
    QQueue<float> costOfBoxMoveToBasket1;
      QQueue<float> costOfBoxMoveToBasket2;
    QQueue<int> boxSelection; // holds the current selections maximum 5
    int interpolationToBasket=30;
    float 	basketX = -1, basketY = 10, basketZ=2;
  QVector<Cube*> _cubes;
    vector<Target> targets;
    float xtarget=3;
    float ytarget=5;
    float ztarget=7;
    int _rx=0;
    int _ry=0;
    int _rz=0;
    int _tx=0;
    int _ty=0;
    int _tz=0;
        double camera[3]={1,-9,1};
        double center[3]={0,0,0};
        double ups[3]={0,1,0};
        float scale=1;
        float fov=0;
        float zNear=0;
        float zFar=200;

        Arm mainArm;
        Point3f goal;
    MYGLWidget(QWidget *parent = NULL);
    virtual ~MYGLWidget();

    QSize sizeHint() const;

    static int normalizeAngle(int angle);
    void calculateInverseKinematics();
    void drawTargetsBoxes();
    int randInt(int low, int high);
    void createNewGame(int);
    void collectBoxToBasket();
    float calculateBoxMovementCost();
    void changePlayerTurn();

  protected:
    virtual void initializeGL();
    virtual void paintGL();
    virtual void resizeGL(int width, int height);
    virtual void paintEvent(QPaintEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void pick(const QPoint &pos);
    virtual void processHits(GLint hits, GLuint buffer[]);
    virtual void draw();

 signals:
 void refreshWindow();

};

#endif

