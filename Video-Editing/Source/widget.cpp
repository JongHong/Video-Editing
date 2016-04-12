/*
*该函数功能:视频编辑的主页面
*/
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QDesktopWidget *pDw = QApplication::desktop();//获取屏幕分辨率

    Video_title *title = new Video_title;      //标题烂
    video_Function_rotten *rotten = new video_Function_rotten; //功能栏
    video_Options *options = new video_Options;    //功能选项栏
    video_play_bar *play = new video_play_bar;     //视频播放栏
    video_Preview_column *preview = new video_Preview_column;  //预览栏
    video_menuBar *menubar = new video_menuBar;    //功能按钮选项栏
    video_setting_column *set = new video_setting_column; //设置栏
    video_effects_column *effec = new video_effects_column; //视频增加效果选择栏
    video_hideBar *hiBar = new video_hideBar;      //实现视频调优效果栏
    video_forward_pause_bar *forward = new video_forward_pause_bar; //控制视频栏
    video_player_interface *inter = new video_player_interface;     //视频播放界面栏

    this->resize(1200,630);
    this->setWindowOpacity(1);                  //设置窗口透明度
    this->setWindowFlags(Qt::FramelessWindowHint);//设置无边框,无标题

    this->setAutoFillBackground(true);
    palette.setColor(QPalette::Background, QColor(53,53,53));  //设置主界面的背景色为白色
    this->setPalette(palette);


    int wd = pDw->width();
    int ht = pDw->height();


    QHBoxLayout *Hbox = new QHBoxLayout;
    Hbox->setMargin(0);
    Hbox->setSpacing(0);
    Hbox->addWidget(rotten);
    Hbox->addWidget(options);
    Hbox->addWidget(play);

    QVBoxLayout *vl = new QVBoxLayout;
    vl->setMargin(0);
    vl->setSpacing(0);
    vl->addWidget(title);
    vl->addLayout(Hbox);
    vl->addWidget(preview);
    this->setLayout(vl);

    QVBoxLayout *opt = new QVBoxLayout;
    opt->setMargin(0);
    opt->setSpacing(0);
    opt->addWidget(menubar,0,Qt::AlignTop);
    rotten->setLayout(opt);


    QVBoxLayout *sett = new QVBoxLayout;
    sett->setMargin(0);
    sett->setSpacing(0);
    sett->addWidget(set,0,Qt::AlignTop);
    preview->setLayout(sett);

    QVBoxLayout *pa = new QVBoxLayout;
    pa->setMargin(0);
    pa->setSpacing(0);
    pa->setContentsMargins(15,0,15,0);
    pa->addWidget(effec);
    pa->addWidget(hiBar);
    pa->addWidget(inter);
    pa->addWidget(forward);
    play->setLayout(pa);


    this->move((wd - this->width()) / 2,(ht - this->height()) / 2); //窗体居中
    this->show();
}


void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_Drag = true;
        m_DragPosition = event->globalPos() - this->pos();
        event->accept();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton) {
        move(event->globalPos() - m_DragPosition);
        event->accept();
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *)
{
    m_Drag = false;
}
Widget::~Widget()
{

}
