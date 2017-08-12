#include <QPixmap>
#include <QPalette>

#include "schedule-generator.h"
#include "ui_schedule-generator.h"

ScheduleGenerator::ScheduleGenerator(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::ScheduleGenerator) {
  ui->setupUi(this);
//  QPixmap background(":/img/background.png");
//  background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
//  QPalette palette;
//  palette.setBrush(QPalette::Background, background);
//  this->setPalette(palette);
  this->centralWidget()->setStyleSheet("background-image: url(:/img/background.png); background-position: center; ");
}

ScheduleGenerator::~ScheduleGenerator() {
  delete ui;
}

