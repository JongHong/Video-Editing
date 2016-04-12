/*
*该函数功能:视频播放界面
*/
#include "video_player_interface.h"

video_player_interface::video_player_interface(QWidget *parent) : QWidget(parent)
{

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,0,0));  //设置主界面的背景色为白色
    this->setPalette(palette);
}

video_player_interface::~video_player_interface()
{

}

