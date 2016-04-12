/*
*该函数功能:功能效果栏用于已查看以前编辑文件及其功能效果.
*/
#include "video_function_rotten.h"

video_Function_rotten::video_Function_rotten(QWidget *parent) : QWidget(parent)
{
    //this->setFixedWidth(450);

    this->setAutoFillBackground(true);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(0,191,255));  //设置主界面的背景色
    this->setPalette(palette);
}

video_Function_rotten::~video_Function_rotten()
{

}
