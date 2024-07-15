//
// Created by HengFeng on 2024/7/15.
//

#include "cardpanel.h"
#include <QPainter>

CardPanel::CardPanel(QWidget *parent) : QWidget(parent) {
    m_isFront = true;
    m_select = false;
}

void CardPanel::setImage(const QPixmap &front, const QPixmap &back) {
    m_frontImage = front;
    m_backImage = back;
    setFixedSize(m_frontImage.size());
    update(); // call paintEvent
}

QPixmap CardPanel::getImage() const {
    return m_frontImage;
}


void CardPanel::setFrontSide(bool flag) {
    m_isFront = flag;
}

bool CardPanel::isFrontSide() const {
    return m_isFront;
}

void CardPanel::setSelected(bool flag) {
    m_select = flag;
}

bool CardPanel::isSelected() const {
    return m_select;
}

void CardPanel::setCard(const Card& card) {
    m_card = card;
}

const Card& CardPanel::getCard() const {
    return m_card;
}

void CardPanel::setOwner(Player* player) {
    m_owner = player;
}

const Player* CardPanel::getOwner() const {
    return m_owner;
}

void CardPanel::paintEvent(QPaintEvent *event) {
    QPainter p(this);
    p.drawPixmap(rect(), m_isFront ? m_frontImage : m_backImage);
}

void CardPanel::mousePressEvent(QMouseEvent *event) {
    QWidget::mousePressEvent(event);
}

