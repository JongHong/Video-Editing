#include "widget.h"
#include "start_animation.h"
#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Start_Animation animation;    //启动动画界面
    Widget w;                     //编辑主页面

    return a.exec();
}
