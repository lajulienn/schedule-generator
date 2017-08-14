#ifndef DIALOGADD_H
#define DIALOGADD_H

#include <QDialog>

#include "student-or-teacher-form.h"

namespace Ui {
  class DialogAdd;
}

class DialogAdd : public QDialog {
  Q_OBJECT

public:
  explicit DialogAdd(QWidget *parent = 0);
  ~DialogAdd();

private:
  Ui::DialogAdd *ui;
  StudentOrTeacherForm *student_teacher;
};

#endif // DIALOGADD_H
