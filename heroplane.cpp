#include "heroplane.h"
#include"config.h"
HeroPlane::HeroPlane()
{
    //初始化加载飞机图片
    m_Plane.load(HERO_PATH);
    //初始化飞机坐标
    m_X=(GAME_WIDTH-m_Plane.width())*0.5;
    m_Y =GAME_HEIGHT-m_Plane.height();
    //初始化矩形边框
    m_Rect.setWidth(m_Plane.width());
    m_Rect.setHeight(m_Plane.height());
    m_Rect.moveTo(m_X,m_Y);
}

void HeroPlane::shoot()
{
    //累加事件间隔记录的变量
    m_recorder++;
    //如果记录数字 未达到发射间隔，直接return
    if(m_recorder < BULLET_INTERVAL)
    {
        return;
    }
    m_recorder = 0;
    //发射子弹
    for(int i = 0 ; i < BULLET_NUM;i++)
    {
        //如果是空闲状态的子弹，发射子弹
        if(m_bullets[i].m_Free)
        {
            m_bullets[i].m_Free = false;
            m_bullets[i].m_X = m_X+m_Rect.width()*0.5 - 10;
            m_bullets[i].m_Y = m_Y - 25 ;
            break;
        }

    }
}

void HeroPlane::setPosition(int x, int y)
{
    m_X=x;
    m_Y=y;
    m_Rect.moveTo(m_X,m_Y);
}
