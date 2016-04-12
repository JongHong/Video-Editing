/*
*该函数功能:底部的精确预览功能栏.
*/
#include "video_preview_column.h"

video_Preview_column::video_Preview_column(QWidget *parent) : QWidget(parent)
{
    this->setFixedHeight(200);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(230,230,250));  //设置主界面的背景色为白色
    this->setPalette(palette);

}

video_Preview_column::~video_Preview_column()
{

}

