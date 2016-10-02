 #include <QApplication>

#include <QWidget>
#include <QGridLayout>
#include <QSlider>
#include <QCheckBox>
#include <QMenuBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "myqglwidget.h"
#include <QLabel>
#include "mainwindow.h"
#include "GL/freeglut.h"
#include <phonon/audiooutput.h>
#include <phonon/mediaobject.h>
#include <phonon/mediasource.h>
#include <phonon/videowidget.h>
#include <QUrl>
#include <phonon/phonon>
#include <QUrl>

#include <phonon/audiooutput.h>
#include <phonon/mediaobject.h>
#include <phonon/mediasource.h>
#include <phonon/videowidget.h>




void addRightMenu(QWidget &mainWindow);
void addBottomSection();
void addMenu();

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);

  QApplication app(argc, argv);
  MainWindow mainWindow;
  mainWindow.init();
  mainWindow.show();

//       Phonon::MediaObject *mediaObject = Phonon::createPlayer(Phonon::NoCategory, Phonon::MediaSource("file:///media/milton/Works/work-projects/openGL-Examples/Robot-Arm/background_music.mp3"));
//           mediaObject->play();
  return app.exec();
}

void addRightMenu(QWidget &mainWindow) {
   QVBoxLayout rightMenu;
   QLabel *cameraLabel = new QLabel("Camera");
   rightMenu.addWidget(cameraLabel);
   mainWindow.setLayout(&rightMenu);
}

void addBottomSection() {

}

void addMenu() {

}

