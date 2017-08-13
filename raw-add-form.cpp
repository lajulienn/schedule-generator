#include "raw-add-form.h"
#include "ui_add-teacher-form.h"
#include "config.h"

RawAddForm::RawAddForm(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::RawAddForm)
{
  ui->setupUi(this);
  for (auto subject : config::subjects) {
    ui->comboBox_subject->addItem(subject);
  }
}

RawAddForm::~RawAddForm()
{
  delete ui;
}
