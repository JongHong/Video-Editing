/*
*该函数功能:添加视频处理的界面.
*/
#include "video_hidebar.h"

video_hideBar::video_hideBar(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(30);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(209,95,38));  //设置主界面的背景色
    this->setPalette(palette);
}

video_hideBar::~video_hideBar()
{

}

