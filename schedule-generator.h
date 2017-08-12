#ifndef SCHEDULEGENERATOR_H
#define SCHEDULEGENERATOR_H

#include <QMainWindow>

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


private:
  Ui::ScheduleGenerator *ui;
};

#endif // SCHEDULEGENERATOR_H
