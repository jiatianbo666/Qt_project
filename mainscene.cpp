#include "mainscene.h"
#include "config.h"
#include<QIcon>
#include<QPainter>
#include<QMoveEvent>

MainScene::MainScene(QWidget *parent)
    : QWidget(parent)
{
    //调用初始化场景
    initScene();
    //启动游戏
    playGame();
}

MainScene::~MainScene()
{
}

void MainScene::initScene()
{

    //设置窗口固定尺寸
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);
    //设置标题
    setWindowTitle(GAME_TITLE  );
    //加载图标
    setWindowIcon(QIcon(GAME_ICON));
    //定时器设置
    m_Timer.setInterval(GAME_RATE);

}

void MainScene::playGame()
{
    //启动定时器
    m_Timer.start();
    //监听定时器发送的信号
    connect(&m_Timer,&QTimer::timeout,[=](){
       //更新游戏中元素坐标
        updatePosition();
        //绘制到屏幕中
                update();
    });
}

void MainScene::updatePosition()
{
    //更新地图坐标
    m_map.mapPosition();
}

void MainScene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //绘制地图
    painter.drawPixmap(0,m_map.m_map1_posY,m_map.m_map1);
    painter.drawPixmap(0,m_map.m_map2_posY,m_map.m_map2);
    //绘制英雄飞机
    painter.drawPixmap(m_hero.m_X,m_hero.m_Y,m_hero.m_Plane);
}

void MainScene::mouseMoveEvent(QMouseEvent *event)
{
    int x = event->x()-m_hero.m_Rect.width()*0.5;
    int y = event->y()-m_hero.m_Rect.height()*0.5;
    //边界检测

    m_hero.setPosition(x,y);
}
