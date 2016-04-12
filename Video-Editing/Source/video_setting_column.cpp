/*
*该函数功能:设置和时间显示栏
*/
#include "video_setting_column.h"

video_setting_column::video_setting_column(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(30);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(54,54,54));  //设置主界面的背景色为白色
    this->setPalette(palette);
}

video_setting_column::~video_setting_column()
{

}

