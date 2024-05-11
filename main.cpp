#include "mainscene.h"
#include <QApplication>
#include<QResource>
#include"config.h"
#include"score.h"
#include"start.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QResource::registerResource(GAME_RES_PATH);
   MainScene w;
    start w1;
    //w.show();
    w1.show();
    QObject::connect(&w1,SIGNAL(showmain()),&w,SLOT(recivelogin()));
    return a.exec();
}
