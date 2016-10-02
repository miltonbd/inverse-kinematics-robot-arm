//#include "myqglwidget.h"

//MYGLWidget::MYGLWidget(QWidget *parent) :
//QGLWidget(parent) {
//    _refreshTimer.setSingleShot(false);
//    QObject::connect(
//      &_refreshTimer, SIGNAL(timeout()),
//      this, SLOT(update())
//    );
//    _refreshTimer.start(40);
//    _rx=0;
//    _ry=0;
//    _rz=0;
//    _selection=-1;
//    _cubes.append(new Cube(-.5f,  .5f, 0.f, this));
//    _cubes.last()->setColor(0xff7f7fff);
//    _cubes.append(new Cube(-.5f, -.5f, 0.f, this));
//    _cubes.last()->setColor(0xff7fff7f);
//    _cubes.append(new Cube( .5f, -.5f, 0.f, this));
//    _cubes.last()->setColor(0xffff7f7f);
//    _cubes.append(new Cube( .5f,  .5f, 0.f, this));
//    _cubes.last()->setColor(0xffffff7f);

//    setAttribute(Qt::WA_NoSystemBackground);
//    setMinimumSize(480, 480);
//    setMouseTracking(true);
//  setMinimumSize(1200, 1000);
//  setMouseTracking(true);
//  QObject::connect(&game, SIGNAL(updateQGLWindowSignal()),
//                   this, SLOT(updateQGLWindow()));
//}

//MYGLWidget::~MYGLWidget()
//{
//  makeCurrent();

//  QVectorIterator<Cube*> cube(_cubes);
//  while (cube.hasNext())
//    delete cube.next();
//}

////void MYGLWidget::initializeGL()
////{
////   glClearColor(1,1,1,1);
////   glShadeModel(GL_SMOOTH);
////}

////void MYGLWidget::resizeGL(int width, int height)
////{
////    glMatrixMode(GL_PROJECTION);
////    glLoadIdentity();
////    //Angle of view:40 degrees
////    //Near clipping plane distance: 0.5
////    //Far clipping plane distance: 20.0

////    gluPerspective(40.0,(GLdouble)width/(GLdouble)height,0.5,40.0);
////    glMatrixMode(GL_MODELVIEW);
////    glViewport(0,0,width,height);  //Use the whole window for rendering - See more at: http://www.codemiles.com/c-opengl-examples/draw-3d-cube-using-opengl-t9018.html#sthash.ygiITcIL.dpuf
////}

////void MYGLWidget::paintGL()
////{
//// glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

//// glEnable(GL_CULL_FACE);
//// glEnable(GL_DEPTH_TEST);
//// glShadeModel(GL_SMOOTH);
////// glEnable(GL_LIGHTING);
////// glEnable(GL_LIGHT0);
//// //static GLfloat lightPosition[4] = { 0.2, 0.3, 6.0, 3.0 };
//// //glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

//// glPushMatrix();

//// glMatrixMode(GL_MODELVIEW);
////// clear the drawing buffer.
////glClear(GL_COLOR_BUFFER_BIT);
////glLoadIdentity();
////    glTranslatef(-1.0,2.0,-20.5);
////        glScalef(.5,.5,.5);
////glRotatef(game._rx/16,1.0,0.0,0.0);
////// rotation about Y axis
////glRotatef(game._ry/16,0.0,1.0,0.0);
//// glRotatef(game._rz/16,0.0,0.0,1.0);

////  draw();
//// // glLoadIdentity();

////  game.display();

//// glPopMatrix();

//// glDisable(GL_DEPTH_TEST);
//// glDisable(GL_CULL_FACE);
//// //glDisable(GL_LIGHT0);
////// glDisable(GL_LIGHTING);

//// glFlush();

////}

////void MYGLWidget::draw()
////{

////  QVectorIterator<Cube*> cube(_cubes);
////  while (cube.hasNext())
////    cube.next()->Draw();
////}

//void MYGLWidget::initializeGL()
//{
//  qglClearColor(Qt::black);
//  glShadeModel(GL_SMOOTH);
//}

//void MYGLWidget::paintGL()
//{
//  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//  resizeGL(width(), height());

//  glEnable(GL_CULL_FACE);
//  glEnable(GL_DEPTH_TEST);

//  qglClearColor(Qt::black);
//  glShadeModel(GL_SMOOTH);
//  glEnable(GL_LIGHTING);
//  glEnable(GL_LIGHT0);
//  static GLfloat lightPosition[4] = { 0.2, 0.3, 6.0, 3.0 };
//  glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

//  glPushMatrix();

//  draw();

//  glPopMatrix();

//  glDisable(GL_DEPTH_TEST);
//  glDisable(GL_CULL_FACE);
//  glDisable(GL_LIGHT0);
//  glDisable(GL_LIGHTING);

//  glFlush();
//}

//void MYGLWidget::draw()
//{
//  glPushMatrix();

//  glMatrixMode(GL_MODELVIEW);
//  glLoadIdentity();

//  glClearColor(0.0, 0.0, 0.0, 0.0);
//  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//  glLoadIdentity();
//  glTranslated(0.0, 0.0, -10.0);
//  glRotated(_rx / 16.0, 1.0, 0.0, 0.0);
//  glRotated(_ry / 16.0, 0.0, 1.0, 0.0);
//  glRotated(_rz / 16.0, 0.0, 0.0, 1.0);

//  QVectorIterator<Cube*> cube(_cubes);
//  while (cube.hasNext())
//    cube.next()->Draw();

//  glPopMatrix();
//}

//void MYGLWidget::resizeGL(int width, int height)
//{
//  int side = qMin(width, height);
//  glViewport((width - side)>>1, (height - side)>>1, side, side);

//  glMatrixMode(GL_PROJECTION);
//  glLoadIdentity();
//  glOrtho(-1, +1, +1, -1, -1.0, 15.0);
//  glMatrixMode(GL_MODELVIEW);
//}


////void MYGLWidget::mouseMoveEvent(QMouseEvent *event) {
////    int dx = event->x() - _lastPos.x();
////    int dy = event->y() - _lastPos.y();

////    if (event->buttons() & Qt::LeftButton)
////    {
////      game._rx = normalizeAngle(game._rx + (dy<<3));
////      game._ry = normalizeAngle(game._ry + (dx<<3));
////    }
////    else if (event->buttons() & Qt::RightButton)
////    {
////      game._rx = normalizeAngle(game._rx + (dy<<3));
////      game._rz = normalizeAngle(game._rz + (dx<<3));
////    }
////    _lastPos = event->pos();
////    pick(event->pos());

////}

////void MYGLWidget::mousePressEvent(QMouseEvent *event) {
////    game.xtarg= event->pos().x();
////    game.ytarg= event->pos().y();
////    _lastPos = event->pos();
////}


//void MYGLWidget::paintEvent(QPaintEvent */*event*/)
//{
//  QPainter painter;
//  painter.begin(this);

//  paintGL();

//  painter.end();
//}

//void MYGLWidget::mouseMoveEvent(QMouseEvent *event)
//{
//    int dx = event->x() - _lastPos.x();
//    int dy = event->y() - _lastPos.y();

//    if (event->buttons() & Qt::LeftButton)
//    {
//      _rx = normalizeAngle(_rx + (dy<<3));
//      _ry = normalizeAngle(_ry + (dx<<3));
//    }
//    else if (event->buttons() & Qt::RightButton)
//    {
//      _rx = normalizeAngle(_rx + (dy<<3));
//      _rz = normalizeAngle(_rz + (dx<<3));
//    }
//    _lastPos = event->pos();
//  pick(event->pos());
//}

//void MYGLWidget::mousePressEvent(QMouseEvent *event)
//{
//  _lastPos = event->pos();

//  pick(event->pos());
//  if (_selection >= 0)
//  {
//    if (event->button() == Qt::RightButton)
//    {
//      Cube *cube = _cubes[_selection];
//      QColor color = QColorDialog::getColor(cube ->color(), this);
//      if (color.isValid())
//        cube->setColor(color);
//    }
//  }
//}

//void MYGLWidget::mouseReleaseEvent(QMouseEvent *event) {
//  std::cout<<"mouse relesed \n";

// // game.moveArm();
//  update();

//}
//int MYGLWidget::normalizeAngle(int angle)
//{
//  while (angle < 0) angle += (360<<4);
//  while (angle > (360<<4)) angle -= (360<<4);
//  return angle;
//}

//void MYGLWidget::updateQGLWindow() {
//   update();
//}

//void MYGLWidget::pick(const QPoint &pos)
//{
//  qreal x = pos.x();
//  qreal y = pos.y();

//  GLuint selectBuf[1024];
//  GLint hits;
//  GLint viewport[4];

//  glGetIntegerv(GL_VIEWPORT, viewport);
//  glSelectBuffer(1024, selectBuf);
//  glRenderMode(GL_SELECT);

//  glInitNames();
//  glPushName(0);

//  glPushMatrix();
//  glMatrixMode(GL_PROJECTION);
//  glLoadIdentity();
//  gluPickMatrix((GLdouble)x, (GLdouble)(viewport[3] - y), 1.f, 1.f, viewport);
//  //glOrtho(-1, +1, +1, -1, -1.0, 40.0);

//  draw();

//  glMatrixMode(GL_PROJECTION);
//  glPopMatrix();

//  hits = glRenderMode(GL_RENDER);

//  //On traite les sommets cliqués
//  processHits(hits, selectBuf); //Fonction appelée ci-dessous

//  glPopMatrix();

//  updateGL();
//}

//void MYGLWidget::processHits(GLint hits, GLuint buffer[])
//{
//  int selection = -1;

//  if (hits > 0)
//  {
//    GLuint nb_names, name, *ptr;
//    GLdouble z1, z2, zInter = 0.0;

//    qDebug() << "Hits:" << hits;

//    ptr = (GLuint *)buffer;

//    /*  Pour chaque hit (collision)  */
//    for (GLint i = 0; i < hits; ++i)
//    {
//      nb_names = ptr[0];
//      if (nb_names != 1)
//      {
//        QMessageBox::critical(this, "Erreur pile noms", "Erreur sur la pile des noms !\nLe programme va quitter.");
//        exit(1);
//      }

//      z1 = (double) ptr[1]/0x7fffffff;
//      z2 = (double) ptr[2]/0x7fffffff;

//      name = ptr[3];
//      ptr +=4;

//      /* On ne garde que le nom de l'objet le plus proche (ici on garde le zmin le plus petit) */
//      if (i == 0 || z1 < zInter)
//      {
//        selection = name;
//        zInter=z1;
//      }
//    }
//  }
//  else
//    selection = -1;

//  if (selection != _selection)
//  {
//    if (_selection >= 0) _cubes[_selection]->setHighlighted(false);
//    _selection = selection;
//    if (_selection >= 0) _cubes[_selection]->setHighlighted(true);
//    qDebug() << "Selection changed:" << _selection;
//  }
//}

#include "myqglwidget.h"
#include <QtOpenGL>
#include <QDebug>
#include <cube.h>
#include <GL/glu.h>
#include <stdexcept>      // std::out_of_range
#include <vector>         // std::vector

MYGLWidget::MYGLWidget(QWidget *parent)
  :QGLWidget(QGLFormat(QGL::SampleBuffers), parent),
  _selection(-1), _rx(20), _ry(25), _rz(10)
{
  _refreshTimer.setSingleShot(false);
  QObject::connect(
    &_refreshTimer, SIGNAL(timeout()),
    this, SLOT(update())
  );
 _refreshTimer.start(30);

  setAttribute(Qt::WA_NoSystemBackground);
  setMinimumSize(1200, 1000);
  setMouseTracking(true);
  // Create seed for the random
  // That is needed only once on application startup
  QTime time = QTime::currentTime();
  qsrand((uint)time.msec());
  vector<Segment*> segs;
     Segment *new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     new_seg = new Segment(2, BALLJOINT);
     segs.push_back(new_seg);
     mainArm.set_segments(segs);
     calculateInverseKinematics();
}

MYGLWidget::~MYGLWidget()
{
  makeCurrent();

  QVectorIterator<Cube*> cube(_cubes);
  while (cube.hasNext())
    delete cube.next();
}

QSize MYGLWidget::sizeHint() const
{
  return QSize(1200, 1000);
}

void MYGLWidget::initializeGL()
{
  qglClearColor(Qt::white);
  glShadeModel(GL_SMOOTH);
}

void MYGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);				// clear the color buffer
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
    glEnable(GL_DEPTH_TEST);

    // random light behind your eyes
    GLfloat diffuse0[]={-8.6, 2.5, 4.5, 1.0};
    GLfloat ambient0[]={-7, 2.0, 3.0, 1.0};
    GLfloat specular0[]={-6, 3.0, 3.0, 1.0};
    GLfloat light0_pos[]={-8, 4.0, 10.0, .0};
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_POSITION, light0_pos);
   // glLightfv(GL_LIGHT0, GL_AMBIENT, ambient0);
    //glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse0);
   // glLightfv(GL_LIGHT0, GL_SPECULAR, specular0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(fov, 1200/1000, zNear, zFar);
    // drawing is done here
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glScalef(scale,scale,scale);
    glTranslatef(_tx,_ty,_tz);
    glRotatef(_rx,1,0,0);
    glRotatef(_ry,0,1,0);
    glRotatef(_rz,0,0,1);
    gluLookAt(camera[0],camera[1],camera[2],center[0], center[1], center[2],ups[0], ups[1],ups[2]);
    //glutSolidCylinder(2,3,50,50);
    drawTargetsBoxes();
    mainArm.draw();
    ///cout <<"Target Point "<<xtarget<<" "<<ytarget<<" "<<ztarget<<" \n";

    draw();

    glFlush();
}

void MYGLWidget::drawTargetsBoxes() {
//    glPushMatrix();
//    glTranslatef(xtarget,ytarget,ztarget);
//    glColor3f(1,0,0);

//   Cube *c= new Cube(-.5f,  .5f, 0.f, this);
//   c->setColor(0xff7f7fff);
//   c->Draw();
//    glPopMatrix();
    glPushMatrix();
    glTranslatef(basketX,basketY,basketZ);
    glutSolidCube(2);
    glPopMatrix();
}

void MYGLWidget::draw()
{

//  glLoadIdentity();

//  glClearColor(1.0, 1.0, 1.0, 1.0);
//  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//  glLoadIdentity();
// // glTranslated(0.0, 0.0, -10.0);
//  glScalef(.1,.1,.1);
//  glRotated(_rx / 16.0, 1.0, 0.0, 0.0);
//  glRotated(_ry / 16.0, 0.0, 1.0, 0.0);
//  glRotated(_rz / 16.0, 0.0, 0.0, 1.0);

  QVectorIterator<Cube*> cube(_cubes);
  int i=0;
  while (cube.hasNext()) {
      glPushMatrix();
      glMatrixMode(GL_MODELVIEW);
     Target target=targets.at(i);
     glTranslatef(target.x,target.y,target.z);
     cube.next()->Draw();
     i++;
       glPopMatrix();
  }

}
void MYGLWidget::createNewGame(int numbers){
    std::cout << "Number of Balls "<<numbers<<" \n";
    for (int var = 0; var < numbers; ++var) {
        Target target;
        target.x=randInt(-10,30);
        target.y=randInt(-10,30);
        target.z=randInt(-10,30);
        targets.push_back(target);
        _cubes.append(new Cube(-.5f,  .5f, 0.f, this));
        _cubes.last()->setColor(0xffffffff);
    }
    update();
}
void MYGLWidget::collectBoxToBasket() {
     totalCostPayer1=0;
     totalCostPlayer2=0;
    for (int var = 0; var < costOfBoxMoveToBasket1.size(); ++var) {
          totalCostPayer1+=costOfBoxMoveToBasket1.at(var);

            totalCostPlayer2+=costOfBoxMoveToBasket2.at(var);
    }
    for (int var = 0; var < costOfBoxMoveToBasket2.size(); ++var) {
            totalCostPlayer2+=costOfBoxMoveToBasket2.at(var);
    }
    emit refreshWindow();

    // show box collection animation.
    // choose each of the box, interpolate its position to final position one by one.
   InterpolatePoint basketPoint;
   basketPoint.x=basketX;
   basketPoint.y=basketY;
   basketPoint.z=basketZ;

   for (int var = 0; var < boxSelection.size(); ++var) {
          Cube *c= _cubes.at(boxSelection.at(var));
          InterpolatePoint boxPoint;
          Target t= targets.at(boxSelection.at(var));
          boxPoint.x=t.x;
          boxPoint.y=t.y;
          boxPoint.z=t.z;
          MyInterpolator inter;
          inter.interpolate3D(boxPoint,basketPoint);
          cout <<"\n\n Box going to basket "<<var<<" \n\n";
          int lastTime=time(0);
          for (int var = 0; var < inter.points.size(); ++var) {
                  int currentTime=time(0);
              //if (currentTime>lastTime+3) {
                //  lastTime=currentTime;
                  InterpolatePoint ip=inter.points.at(var);
                  cout <<"\n\n Interpolated Point "<<ip.x<<" "<<ip.y<<" "<<ip.z<<" \n\n";
                  goal = Vector3f(ip.x,  ip.y, ip.z);
                  mainArm.solve(goal, 200);

             // }

          }
    }

}
float MYGLWidget::calculateBoxMovementCost() {
/**
  calculate all selected boxes distance from basket and sum them up
  */
    for (int var = 0; var < boxSelection.size(); ++var) {
       // Target t= targets.at(boxSelection.at());

    }
}

void MYGLWidget::resizeGL(int width, int height)
{
  int side = qMin(width, height);
  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glMatrixMode(GL_MODELVIEW);

}

void MYGLWidget::paintEvent(QPaintEvent */*event*/)
{
  QPainter painter;
  painter.begin(this);
  paintGL();
  painter.end();
}

void MYGLWidget::mouseMoveEvent(QMouseEvent *event)
{
//    int dx = event->x() - _lastPos.x();
//    int dy = event->y() - _lastPos.y();

//    if (event->buttons() & Qt::LeftButton)
//    {
//      _rx = normalizeAngle(_rx + (dy<<3));
//      _ry = normalizeAngle(_ry + (dx<<3));
//    }
//    else if (event->buttons() & Qt::RightButton)
//    {
//      _rx = normalizeAngle(_rx + (dy<<3));
//      _rz = normalizeAngle(_rz + (dx<<3));
//    }
//    _lastPos = event->pos();
 // pick(event->pos());
}

void MYGLWidget::mousePressEvent(QMouseEvent *event)
{
  _lastPos = event->pos();

  pick(event->pos());

//  if (event->button() == Qt::LeftButton) {

//         GLint viewport[4]; //var to hold the viewport info
//             GLdouble modelview[16]; //var to hold the modelview info
//             GLdouble projection[16]; //var to hold the projection matrix info
//             GLfloat winX, winY, winZ; //variables to hold screen x,y,z coordinates
//             GLdouble worldX, worldY, worldZ; //variables to hold world x,y,z coordinates

//             glGetDoublev( GL_MODELVIEW_MATRIX, modelview ); //get the modelview info
//             glGetDoublev( GL_PROJECTION_MATRIX, projection ); //get the projection matrix info
//             glGetIntegerv( GL_VIEWPORT, viewport ); //get the viewport info

//         winX = (float)_lastPos.x();
//             winY = (float)viewport[3] - (float)_lastPos.y();
//         winZ = 0;

//         //get the world coordinates from the screen coordinates
//             gluUnProject( winX, winY, winZ, modelview, projection, viewport, &worldX, &worldY, &worldZ);
//             cout <<" World X,Y,Z "<<worldX<<" "<<worldY<<" "<<worldZ<<"\n";
////             xtarget=worldX;
////             ytarget=worldY;
////             ztarget=worldZ;


//      }
}

void MYGLWidget::pick(const QPoint &pos)
{
  qreal x = pos.x();
  qreal y = pos.y();

  GLuint selectBuf[1024];
  GLint hits;
  GLint viewport[4];

  glGetIntegerv(GL_VIEWPORT, viewport);
  glSelectBuffer(1024, selectBuf);
  glRenderMode(GL_SELECT);

  glInitNames();
  glPushName(0);

  glPushMatrix();
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPickMatrix((GLdouble)x, (GLdouble)(viewport[3] - y), 1.f, 1.f, viewport);
  //glOrtho(-1, +1, +1, -1, -1.0, 15.0);

  draw();

  glMatrixMode(GL_PROJECTION);
  glPopMatrix();

  hits = glRenderMode(GL_RENDER);

  //On traite les sommets cliqués
  processHits(hits, selectBuf); //Fonction appelée ci-dessous

  glPopMatrix();

  updateGL();
}

void MYGLWidget::processHits(GLint hits, GLuint buffer[])
{
  int selection = -1;

  if (hits > 0)
  {
    GLuint nb_names, name, *ptr;
    GLdouble z1, z2, zInter = 0.0;

    qDebug() << "Hits:" << hits;

    ptr = (GLuint *)buffer;

    /*  Pour chaque hit (collision)  */
    for (GLint i = 0; i < hits; ++i)
    {
      nb_names = ptr[0];
      if (nb_names != 1)
      {
        QMessageBox::critical(this, "Erreur pile noms", "Erreur sur la pile des noms !\nLe programme va quitter.");
        exit(1);
      }

      z1 = (double) ptr[1]/0x7fffffff;
      z2 = (double) ptr[2]/0x7fffffff;

      name = ptr[3];
      ptr +=4;

      /* On ne garde que le nom de l'objet le plus proche (ici on garde le zmin le plus petit) */
      if (i == 0 || z1 < zInter)
      {
        selection = name;
        zInter=z1;
      }
    }
  }
  else
    selection = -1;

  if (selection != _selection)
  {
    if (_selection >= 0) {
         _cubes[_selection]->setHighlighted(false);
    }

    _selection = selection;
    if (_selection >= 0)  {

        if(boxSelection.size()==5) {
            boxSelection.dequeue();
        }
        boxSelection.enqueue(_selection);
        cout <<"Total Box Selected "<<boxSelection.size()<<" \n";
        for (int var = 0; var < _cubes.size(); ++var) {
             _cubes[var]->setHighlighted(false);
        }

        for (int var = 0; var < boxSelection.size(); ++var) {
             _cubes[boxSelection.at(var)]->setHighlighted(true);
        }

    }
    qDebug() << "Selection changed:" << _selection;
    try {
        //std::cout <<"Size of Cubes and targets "<< _cubes.size()<<" "<<targets.size()<<" \n";
        Target t= targets.at(_selection);
        // calcualting effort
        Point3f base=mainArm.base;
        float xBase= base[0];
        float yBase= base[1];
        float zBase= base[2];
        float effort=sqrt(pow(xBase-t.x,2)+  pow(yBase-t.y,2)+  pow(zBase-t.z,2));
        if (currentPlayer==1) {
            if(costOfBoxMoveToBasket1.size()==5) {
                costOfBoxMoveToBasket1.dequeue();
            }
            costOfBoxMoveToBasket1.enqueue(effort);
        } else {
            if(costOfBoxMoveToBasket2.size()==5) {
                costOfBoxMoveToBasket2.dequeue();
            }
            costOfBoxMoveToBasket2.enqueue(effort);
        }
        goal = Vector3f(t.x,  t.y, t.z);
        mainArm.solve(goal, 200);
        mainArm.testdraw();
        /**
         * calculate the difference between the target point and end effector point
         */
        Point3f end_point= mainArm.end_point;
        float xEnd= end_point[0];
        float yEnd= end_point[1];
        float zEnd= end_point[2];
        cout <<"Effort "<<effort<<" \n";
        cout <<"Target Point "<<t.x<<" "<<t.y<<" "<<t.z<<" \n";
        cout <<"End Effector Point "<<xEnd<<" "<<yEnd<<" "<<zEnd<<" \n";
        float diffDistance=sqrt(pow(xEnd-t.x,2)+  pow(yEnd-t.y,2)+  pow(zEnd-t.z,2));
        cout <<" difference between target and end effector  "<<diffDistance<<"\n";
        if(diffDistance>.08){
            cout <<"Invalid Selection \n";
        }else {
             cout <<"Valid Selection \n";
        }
    } catch (const std::out_of_range& oo) {

    }
  }
emit refreshWindow();
}

void MYGLWidget::changePlayerTurn() {
    for (int var = 0; var < _cubes.size(); ++var) {
         _cubes[var]->setHighlighted(false);
    }
   boxSelection.clear();
}

int MYGLWidget::normalizeAngle(int angle)
{
  while (angle < 0) angle += (360<<4);
  while (angle > (360<<4)) angle -= (360<<4);
  return angle;
}

void MYGLWidget::calculateInverseKinematics() {

}

int MYGLWidget::randInt(int low, int high){
    // Random number between low and high
    return qrand() % ((high + 1) - low) + low;
}
