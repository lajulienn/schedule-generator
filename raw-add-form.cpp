#include <QCheckBox>
#include <QLabel>
#include <QComboBox>
#include <QMessageBox>

#include "raw-add-form.h"
#include "ui_raw-add-form.h"
#include "config.h"

RawAddForm::RawAddForm(QWidget *parent, bool isStudent) :
  QWidget(parent),
  ui(new Ui::RawAddForm),
  isStudent_(isStudent) {

  ui->setupUi(this);
  for (auto subject : config::subjects) {
    ui->comboBox_subject->addItem(subject);
  }
  for (auto time : config::available_time) {
    ui->verticalLayout_time->addWidget(new QCheckBox(time, this));
  }
  if (isStudent) {
    this->parentWidget()->setWindowTitle("Новый студент");

    QLabel *label_class = new QLabel("Класс", this);
    QComboBox *comboBox_class = new QComboBox(this);
    for (auto class_num : config::classes) {
      comboBox_class->addItem(class_num);
    }

    ui->formLayout_subject->insertRow(1, label_class, comboBox_class);
  } else {
    this->parentWidget()->setWindowTitle("Новый преподаватель");
  }
}

RawAddForm::~RawAddForm() {
  delete ui;
}

void RawAddForm::on_pushButton_clicked()
{
    if (isStudent_ && ui->comboBox_subject->currentText() == "Математика") {
      int answer = QMessageBox::question(this, "Математика",
                                                                 "Какой уровень математики выбрать?",
                                                                 "Базовый", "Профильный");
      if (answer == 0) {
        QMessageBox::information(this, "", "База");
      } else if (answer == 1) {
        QMessageBox::information(this, "", "Профиль");
      }
    }
}
