/*
*该函数功能:功能选择栏功能功能函数.
*/
#include "video_options.h"

video_Options::video_Options(QWidget *parent) : QWidget(parent)
{
    this->setFixedWidth(54);
    //this->setStyleSheet("border:1px solid black");
    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(224,102,255));  //设置主界面的背景色
    this->setPalette(palette);
}

video_Options::~video_Options()
{

}

