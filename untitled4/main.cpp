#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Snake window;

  window.setWindowTitle("Snake");
  window.show();

  return app.exec();
}
