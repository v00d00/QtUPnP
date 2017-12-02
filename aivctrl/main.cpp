#include "mainwindow.hpp"
#include <QApplication>
#include "../upnp/helper.hpp"

int main(int argc, char *argv[])
{
  QApplication a (argc, argv);
  CMainWindow w;
  QIcon icon (":/icons/aivctrl48.ico");
  w.setWindowIcon (icon);
  w.show ();
  return a.exec();
}
