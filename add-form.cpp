#include <QMessageBox>

#include "add-form.h"
#include "ui_add-form.h"

AddForm::AddForm(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::AddForm)
{
  ui->setupUi(this);
}

AddForm::~AddForm()
{
  delete ui;
}

void AddForm::on_pushButton_ok_clicked()
{
  if (ui->radioButton_student->isChecked()) {
    QMessageBox::information(this, "info", "student");
  }
}
