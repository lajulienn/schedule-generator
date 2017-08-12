#ifndef SCHEDULEGENERATOR_H
#define SCHEDULEGENERATOR_H

#include <QMainWindow>

#include "add-form.h"

namespace Ui {
  class ScheduleGenerator;
}

class ScheduleGenerator : public QMainWindow
{
  Q_OBJECT

public:
  explicit ScheduleGenerator(QWidget *parent = 0);
  ~ScheduleGenerator();

private slots:


  void on_action_add_triggered();

private:
  Ui::ScheduleGenerator *ui;
  AddForm *add_form;
};

#endif // SCHEDULEGENERATOR_H
