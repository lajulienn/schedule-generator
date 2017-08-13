#include "dialog-add.h"
#include "ui_dialog-add.h"

DialogAdd::DialogAdd(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogAdd)
{
  ui->setupUi(this);
  student_teacher = new StudentOrTeacherForm(this);
  this->layout()->addWidget(student_teacher);
  student_teacher->show();
}

DialogAdd::~DialogAdd()
{
  delete ui;
}
