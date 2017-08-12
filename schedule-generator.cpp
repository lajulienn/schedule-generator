#include "schedule-generator.h"
#include "ui_schedule-generator.h"

ScheduleGenerator::ScheduleGenerator(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::ScheduleGenerator) {
  ui->setupUi(this);
}

ScheduleGenerator::~ScheduleGenerator() {
  delete ui;
}

