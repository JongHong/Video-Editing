/*
*该函数功能:功能按钮选择栏
*/
#include "video_menubar.h"

video_menuBar::video_menuBar(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(30);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,0,128));  //设置主界面的背景色
    this->setPalette(palette);
}

video_menuBar::~video_menuBar()
{

}

