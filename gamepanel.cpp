//
// Created by Rokid on 2024/7/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_GamePanel.h" resolved

#include "gamepanel.h"
#include "ui_GamePanel.h"
#include <QImage>
#include <QMouseEvent>
#include <QPainter>
#include <QRandomGenerator>
#include <QTimer>
#include <QDebug>
#include <QPropertyAnimation>

GamePanel::GamePanel(QWidget *parent) :
        QWidget(parent), ui(new Ui::GamePanel) {
    ui->setupUi(this);

    // 1. 背景图
    int num = QRandomGenerator::global()->bounded(10);
    QString path = QString(":/res/images/background-%1.png").arg(num+1);
    m_bkImage.load(path);


}

GamePanel::~GamePanel() {
    delete ui;
}







void GamePanel::paintEvent(QPaintEvent *ev)
{
    Q_UNUSED(ev)
    QPainter p(this);
    p.drawPixmap(rect(), m_bkImage);
}


void GamePanel::mouseMoveEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev)
    if(ev->buttons() & Qt::LeftButton)
    {
//        QPoint pt = ev->pos();
//        if(!m_cardsRect.contains(pt))
//        {
//            m_curSelCard = nullptr;
//        }
//        else
//        {
//            QList<CardPanel*> list = m_userCards.keys();
//            for(int i=0; i<list.size(); ++i)
//            {
//                CardPanel* panel = list.at(i);
//                if(m_userCards[panel].contains(pt) &&m_curSelCard != panel)
//                {
//                    // 点击这张扑克牌
//                    panel->clicked();
//                    m_curSelCard = panel;
//                }
//            }
//        }
    }
}
