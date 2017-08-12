#ifndef ADDFORM_H
#define ADDFORM_H

#include <QWidget>

namespace Ui {
  class AddForm;
}

class AddForm : public QWidget
{
  Q_OBJECT

public:
  explicit AddForm(QWidget *parent = 0);
  ~AddForm();

private slots:

  void on_pushButton_ok_clicked();

private:
  Ui::AddForm *ui;
};

#endif // ADDFORM_H
