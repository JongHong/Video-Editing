/*
*该函数功能:视频处理选项栏界面
*/
#include "video_effects_column.h"

video_effects_column::video_effects_column(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(30);
    //this->hide();
    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(178,223,238));  //设置主界面的背景色
    this->setPalette(palette);
}

video_effects_column::~video_effects_column()
{

}

