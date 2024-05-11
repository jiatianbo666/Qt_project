#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class start;
}

class start : public QDialog
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();
    void paintEvent(QPaintEvent *Event);
signals:
    void showmain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::start *ui;
};

#endif // START_H
