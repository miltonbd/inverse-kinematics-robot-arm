#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include "cube.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    addMenu();
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMenu() {

    //Window Menu
   QObject::connect(ui->actionNew_Game, SIGNAL(triggered()),this,SLOT(onNewGame()));
   QObject::connect(ui->actionCollectBall, SIGNAL(triggered()),this,SLOT(onCollectBalls()));
   QObject::connect(ui->actionChange_Player_Turn, SIGNAL(triggered()),this,SLOT(onPlayerTurnChange()));
   QObject::connect(ui->actionFinish, SIGNAL(triggered()),this,SLOT(onFinishGame()));


   // Scale
   QObject::connect(ui->scale, SIGNAL(valueChanged(double)),this,SLOT(onScale(double)));

   // camera
   QObject::connect(ui->cameraX, SIGNAL(valueChanged(double)),this,SLOT(onCameraXChanged(double)));
   QObject::connect(ui->cameraY, SIGNAL(valueChanged(double)),this,SLOT(onCameraYChanged(double)));
   QObject::connect(ui->cameraZ, SIGNAL(valueChanged(double)),this,SLOT(onCameraZChanged(double)));

  // Center
  QObject::connect(ui->centerX, SIGNAL(valueChanged(double)),this,SLOT(onCenterXChanged(double)));
  QObject::connect(ui->centerY, SIGNAL(valueChanged(double)),this,SLOT(onCenterYChanged(double)));
  QObject::connect(ui->centerZ, SIGNAL(valueChanged(double)),this,SLOT(onCenterZChanged(double)));

  // Up vectors
  QObject::connect(ui->upX, SIGNAL(toggled(bool)),this,SLOT(onUpCheckBoxToggle(bool)));
  QObject::connect(ui->centerY, SIGNAL(valueChanged(double)),this,SLOT(onCenterYChanged(double)));
  QObject::connect(ui->centerZ, SIGNAL(valueChanged(double)),this,SLOT(onCenterZChanged(double)));


  // Model Transformation
  QObject::connect(ui->translateX, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
  QObject::connect(ui->translateY, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
  QObject::connect(ui->translateZ, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
  QObject::connect(ui->rotateX, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
  QObject::connect(ui->rotateY, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
  QObject::connect(ui->rotateZ, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));

  // Target
    QObject::connect(ui->addTarget, SIGNAL(clicked(bool)),this,SLOT(onAddNewTarget()));
    QObject::connect(ui->targetX, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
    QObject::connect(ui->targetY, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
    QObject::connect(ui->targetZ, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));

    QObject::connect(ui->actionRules, SIGNAL(triggered()),this,SLOT(onShowRules()));


  // Basket
    QObject::connect(ui->basketX, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
    QObject::connect(ui->basketY, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));
    QObject::connect(ui->basketZ, SIGNAL(valueChanged(double)),this,SLOT(onUiEvent()));

    // Refresh Window
    QObject::connect(&myGlw, SIGNAL(refreshWindow()),this,SLOT(onUiEvent()));


    QPixmap pixmap("/media/milton/Works/work-projects/openGL-Examples/Robot-Arm/player1.jpg");
    ui->playerImage->setPixmap(pixmap);
    ui->playerImage->setMask(pixmap.mask());
    ui->playerImage->setScaledContents( true );

   ui->playerImage->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
    ui->playerImage->show();


}

void MainWindow::onNewGame() {
    /**
      create dialog.
      */
    bool ok;
    QString text = QInputDialog::getText(0, "New Game Box Numbers",
                                             "Enter Number of Box:", QLineEdit::Normal,
                                             "", &ok);
        if (ok && !text.isEmpty()) {
            int numberOfBalls= text.toInt();
            if (numberOfBalls>0) {
                 myGlw.createNewGame(numberOfBalls);
            }
        }
}

/**
 * @brief MainWindow::onCollectBalls
 * Robot Arm will collect the selected balls to basket
 */

void MainWindow::onCollectBalls() {
    uiValueChanged();
    myGlw.collectBoxToBasket();
}

void MainWindow::onPlayerTurnChange() {
    if (myGlw.currentPlayer==1) {
        myGlw.currentPlayer=2;
             ui->labelPlayerTurn->setText("Player 2");
             QPixmap pixmap("/media/milton/Works/work-projects/openGL-Examples/Robot-Arm/player2.jpg");
             ui->playerImage->setPixmap(pixmap);
             ui->playerImage->setMask(pixmap.mask());
    }else {
         myGlw.currentPlayer=1;
                 ui->labelPlayerTurn->setText("Player 1");
                 QPixmap pixmap("/media/milton/Works/work-projects/openGL-Examples/Robot-Arm/player1.jpg");
                 ui->playerImage->setPixmap(pixmap);
                 ui->playerImage->setMask(pixmap.mask());
    }

 ui->playerImage->show();
    myGlw.changePlayerTurn();
}

void MainWindow::onScale(double value) {
   uiValueChanged();
}

void MainWindow::onCameraXChanged(double value) {
    uiValueChanged();
}

void MainWindow::onCameraYChanged(double value) {
 uiValueChanged();
}

void MainWindow::onCameraZChanged(double value) {
 uiValueChanged();
}

void MainWindow::onCenterXChanged(double value) {
    myGlw.center[0]=value;
}

void MainWindow::onCenterYChanged(double value) {
  uiValueChanged();
}

void MainWindow::onCenterZChanged(double value) {
        uiValueChanged();
}

void MainWindow::onTargetXChanged(double value) {
   myGlw.xtarget=value;
}
void MainWindow::onTargetYChanged(double value) {
   myGlw.ytarget=value;
}

void MainWindow::onTargetZChanged(double value) {
   myGlw.ztarget=value;
}

void MainWindow::uiValueChanged() {
      myGlw.camera[0]=ui->cameraX->value();
      myGlw.camera[1]=ui->cameraY->value();
      myGlw.camera[2]=ui->cameraZ->value();
      myGlw.center[0]=ui->centerX->value();
     myGlw.center[1]=ui->centerY->value();
    myGlw.center[2]=ui->centerZ->value();
      myGlw.scale=ui->scale->value();
      if (ui->upX->isChecked()) {
          myGlw.ups[0]=1;
      }
      if (ui->upY->isChecked()) {
          myGlw.ups[1]=1;
      }
      if (ui->upZ->isChecked()) {
          myGlw.ups[2]=1;
      }
       myGlw.fov=ui->fov->value();
       myGlw.zNear=ui->zNear->value();
       myGlw.zFar=ui->zFar->value();

       myGlw._tx=ui->translateX->value();
       myGlw._ty=ui->translateY->value();
       myGlw._tz=ui->translateY->value();
       int rotateX=(int)ui->rotateX->value();
       if(rotateX> 359) {
           ui->rotateX->setValue(rotateX-359);
       }
       myGlw._rx=myGlw.normalizeAngle((int)ui->rotateX->value());
       int rotateY=(int)ui->rotateY->value();
       if(rotateY> 359) {
           ui->rotateY->setValue(rotateY-359);
       }
       myGlw._ry=myGlw.normalizeAngle((int)ui->rotateY->value());
       int rotatez=(int)ui->rotateZ->value();
       if(rotatez> 359) {
           ui->rotateZ->setValue(rotatez-359);
       }
       myGlw._rz=myGlw.normalizeAngle((int)ui->rotateZ->value());

       myGlw.xtarget= ui->targetX->value();
       myGlw.ytarget=ui->targetY->value();
       myGlw.ztarget=ui->targetZ->value();

       myGlw.basketX= ui->basketX->value();
       myGlw.basketY= ui->basketY->value();
       myGlw.basketZ= ui->basketZ->value();
       ui->boxSelected->setText(QString::number(myGlw.boxSelection.size()));
       if(myGlw.currentPlayer==1) {
            ui->labellPlayer1Score->setText(QString::number(myGlw.totalCostPayer1));
       } else {
            ui->labelPlayer2Score->setText(QString::number(myGlw.totalCostPlayer2));
       }
       myGlw.update();
}

void MainWindow::onUpCheckBoxToggle(bool checked) {
    uiValueChanged();
}

void MainWindow::onUiEvent() {
    uiValueChanged();
}

void MainWindow::onAddNewTarget(){
    Target target;
    target.x=ui->targetX->value();
    target.y=ui->targetY->value();
    target.z=ui->targetZ->value();
    myGlw.targets.push_back(target);
    myGlw._cubes.append(new Cube(-.5f,  .5f, 0.f, &myGlw));
    myGlw._cubes.last()->setColor(0xff7f7fff);
    myGlw.update();
}


void MainWindow::onFinishGame() {
    QString msg;
    if(myGlw.totalCostPayer1==0||myGlw.totalCostPlayer2==0) {
        QMessageBox::information(
            this,
            tr("Game Result"),
           "Both Player Needs to finish their turns." );
        return;
    }
    if (myGlw.totalCostPayer1<myGlw.totalCostPlayer2) {
        msg.append("Player 1 ");
    } else {
        msg.append("Player 2 ");
    }
    msg.append("has won the Game");
    QMessageBox::information(
        this,
        tr("Game Result"),
       msg );
}

void MainWindow::onShowRules() {
    QMessageBox::information(
        this,
        tr("Game Rules"),
        tr("1. <b>Start New Game: </b> Click File >> New Game . Player 1 will be selected by default \n <br/> \
           2. <b>Select Box: </b> Each player has to select 5 Boxes which are near to Robot Arm \n <br/> \
           3. <b>Box Collect Cost:</b>More the box is near to Robot Arm less the effort .Player with minimum Cost to collect the Boxes will win the Game \n <br/> \
           4. <b>Collect Boxes: </b> Click Game >> Collect Boxes . </b> <br/>\
           5. <b>Change Player: </b>Click Game >> Change Player Turn \n <br/>\
           6. <b>Repeat 2, 3 steps </b>\n <br/>\
           4. <b>Finish: </b> Game >> Finish will end the Game and show winner. <br/>\
           5. <b>Enjoy</b> \
           \
           "
           ) );
}

void MainWindow::init() {
    QHBoxLayout mainLayout;
    mainLayout.addWidget(&myGlw);
    QVBoxLayout *qglLayout= findChild<QVBoxLayout*>("qglLayout");
    qglLayout->addWidget(&myGlw);
    setWindowTitle("Robot Arm");
    uiValueChanged();
    myGlw.createNewGame(50);
}


void MainWindow::test() {
    std::cout << "SFsf";
}
