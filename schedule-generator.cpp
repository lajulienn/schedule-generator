#include <QPixmap>
#include <QPalette>
#include <QPushButton>

#include "schedule-generator.h"
#include "ui_schedule-generator.h"

ScheduleGenerator::ScheduleGenerator(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::ScheduleGenerator) {
  ui->setupUi(this);
  this->centralWidget()->setStyleSheet("QWidget#centralWidget {"
                                       "background-image: url(:/img/background.png); background-position: center;"
                                       "}");
}

ScheduleGenerator::~ScheduleGenerator() {
  delete ui;
}


void ScheduleGenerator::on_action_add_triggered() {
  // working delete
//  for (auto &child : this->centralWidget()->findChildren<QWidget *>()) {
//    child->hide();
//  }

  /*
   * Opening a dialog to add new person.
   */
  dialog_add = new DialogAdd(this);
  dialog_add->show();
}
