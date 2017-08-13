#include <QMessageBox>

#include "student-or-teacher-form.h"
#include "ui_student-or-teacher-form.h"

StudentOrTeacherForm::StudentOrTeacherForm(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::StudentOrTeacherForm)
{
  ui->setupUi(this);
}

StudentOrTeacherForm::~StudentOrTeacherForm()
{
  delete ui;
}

void StudentOrTeacherForm::on_pushButton_forward_clicked()
{
  if (!ui->radioButton_student->isChecked() && !ui->radioButton_teacher->isChecked()) {
    QMessageBox::critical(this, "Warning", "Выберите одну из опций.");
    return;
  }

  /*
   * Removing this widget and showing the raw add form.
   */
  this->hide();
  raw_add_form = new RawAddForm(this->parentWidget());
  this->parentWidget()->layout()->addWidget(raw_add_form);
  raw_add_form->show();

  if (ui->radioButton_student->isChecked()) {

  } else if (ui->radioButton_teacher->isChecked()) {

  }
}
