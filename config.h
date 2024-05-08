#ifndef CONFIG_H
#define CONFIG_H

//游戏数据
#define GAME_WIDTH 512
#define GAME_HEIGHT 768
#define GAME_TITLE "制霸领空"
#define GAME_RES_PATH "./plane.rcc"//rcc文件路径
#define GAME_ICON ":/素材/app.ico"//图标资源加载路径
#define GAME_RATE 10//定时器刷新时间间隔 单位ms
//地图数据
#define MAP_PATH ":/素材/img_bg_level_2.jpg"//地图路径
#define MAP_SCROLL_SPEED 2  //地图滚动速度
//飞机数据
#define HERO_PATH  ":/素材/hero2.png"//飞机路径
//子弹信息
#define BULLET_PATH ":/素材/bullet_11.png"//子弹路径
#define BULLET_SPEED 5 //子弹移动速度
#define BULLET_NUM 30   //弹匣中子弹总数
#define BULLET_INTERVAL 20 //发射子弹时间间隔
//敌机数据
#define ENEMY_PATH  ":/素材/img-plane_5.png"  //敌机资源图片
#define ENEMY_SPEED 5  //敌机移动速度
#define ENEMY_NUM   20  //敌机总数量
#define ENEMY_INTERVAL  30  //敌机出场时间间隔
//爆炸数据
#define BOMB_PATH  ":/素材/bomb-%1.png"   //爆炸资源图片
#define BOMB_NUM  20     //爆炸数量
#define BOMB_MAX  7      //爆炸图片最大索引
#define BOMB_INTERVAL 15  //爆炸切图时间间隔
//音乐效果
#define SOUND_BACKGROUND ":/素材/bg.wav"
#define SOUND_BOMB ":/素材/bomb.wav"
#endif // CONFIG_H
