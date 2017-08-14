#include "schedule-generator.h"
#include <QApplication>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  ScheduleGenerator w;
  w.show();

  return a.exec();
}
