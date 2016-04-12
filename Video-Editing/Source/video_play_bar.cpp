/*
*该函数功能:视频播放栏功能函数.
*/
#include "video_play_bar.h"

video_play_bar::video_play_bar(QWidget *parent) : QWidget(parent)
{

    this->setAutoFillBackground(true);
    this->setStyleSheet("");
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,206,209));  //设置主界面的背景色为白色
    this->setPalette(palette);
}

video_play_bar::~video_play_bar()
{

}

