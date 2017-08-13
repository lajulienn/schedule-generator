#ifndef STUDENTORTEACHERFORM_H
#define STUDENTORTEACHERFORM_H

#include <QWidget>

#include "raw-add-form.h"

namespace Ui {
  class StudentOrTeacherForm;
}

class StudentOrTeacherForm : public QWidget
{
  Q_OBJECT

public:
  explicit StudentOrTeacherForm(QWidget *parent = 0);
  ~StudentOrTeacherForm();

private slots:
  void on_pushButton_forward_clicked();

private:
  Ui::StudentOrTeacherForm *ui;
  RawAddForm *raw_add_form;
};

#endif // STUDENTORTEACHERFORM_H
