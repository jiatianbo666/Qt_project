#include "start.h"
#include "ui_start.h"
#include<QPainter>
#include"config.h"
start::start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);
    //设置窗口固定尺寸
    setFixedSize(946,745);
    //设置标题
    setWindowTitle(GAME_TITLE  );
    //加载图标
    setWindowIcon(QIcon(GAME_ICON));
}

start::~start()
{
    delete ui;
}

void start::paintEvent(QPaintEvent *Event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(BACKGROUND));
}

void start::on_pushButton_clicked()
{
    this->hide();
    emit showmain();
}
