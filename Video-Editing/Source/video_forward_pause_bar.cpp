/*
*该函数功能:下一个视频/暂停，全屏操作栏界面
*/
#include "video_forward_pause_bar.h"

video_forward_pause_bar::video_forward_pause_bar(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(30);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(255,255,0));  //设置主界面的背景色为白色
    this->setPalette(palette);
}

video_forward_pause_bar::~video_forward_pause_bar()
{

}

