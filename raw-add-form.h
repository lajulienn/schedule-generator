#ifndef RAWADDFORM_H
#define RAWADDFORM_H

#include <QWidget>

namespace Ui {
  class RawAddForm;
}

class RawAddForm : public QWidget
{
  Q_OBJECT

public:
  explicit RawAddForm(QWidget *parent = 0);
  ~RawAddForm();

private:
  Ui::RawAddForm *ui;
};

#endif // RAWADDFORM_H
