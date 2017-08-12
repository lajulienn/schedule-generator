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


void ScheduleGenerator::on_action_add_triggered()
{
    add_form = new AddForm(centralWidget());
    ui->gridLayout_centralWidget->addWidget(add_form);
    //add_form->setStyleSheet("background-color: white");
    add_form->show();
}
