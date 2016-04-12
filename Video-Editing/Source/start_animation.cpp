/*
*该函数功能:启动视频编辑器时的启动动画,同时它也加载一些软件需要加载的一些缓存
*/
#include "start_animation.h"
#include <QEvent>
#include <QMouseEvent>
#include <QDebug>

Start_Animation::Start_Animation(QWidget *parent) : QWidget(parent)
{
    QTime t;
    QMovie *movie;
    movie = new QMovie(":/prefix1/image/qidong.gif");  //播放动态图片
    label = new QLabel("",0);
    label->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint); // 去除边框
    label->setWindowOpacity(0.9);
    label->setGeometry(600,300,268,168);
    label->setMovie(movie);
    label->setScaledContents(true);

    movie->start();
    label->show();
    t.start();
    while(t.elapsed() < 3000)
    {
       QApplication::processEvents();
    }
    label->close();
}
Start_Animation::~Start_Animation()
{
    delete label;
}


