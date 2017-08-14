#ifndef RAWADDFORM_H
#define RAWADDFORM_H

#include <QWidget>
#include <string>

namespace Ui {
  class RawAddForm;
}

class RawAddForm : public QWidget {
  Q_OBJECT

public:
  //explicit RawAddForm(QWidget *parent = 0);
  explicit RawAddForm(QWidget *parent = 0, bool isStudent = true);
  ~RawAddForm();

private slots:
  void on_pushButton_clicked();

private:
  Ui::RawAddForm *ui;
  bool isStudent_;
};

#endif // RAWADDFORM_H
