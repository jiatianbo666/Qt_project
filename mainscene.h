#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include<QTimer>
#include "map.h"
#include"heroplane.h"

class MainScene : public QWidget
{
     Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    //初始化场景
    void initScene();

    //启动游戏
    void playGame();

    //更新游戏中所有元素的坐标
    void updatePosition();

    //绘制到屏幕中  函数名称不可改
    void paintEvent(QPaintEvent *);

    //重写鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

    //地图对象
    Map m_map;
    //飞机对象
    HeroPlane m_hero;
    //定时器
    QTimer m_Timer;
};
#endif // MAINSCENE_H
