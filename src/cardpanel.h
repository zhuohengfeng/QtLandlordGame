//
// Created by HengFeng on 2024/7/15.
//

#ifndef LANDLORDGAME_CARDPANEL_H
#define LANDLORDGAME_CARDPANEL_H

#include <QWidget>
#include "card.h"
#include "player.h"

class CardPanel final : public QWidget {
    Q_OBJECT

public:
    explicit CardPanel(QWidget* parent = nullptr);

    // 设置获取图片函数
    void setImage(const QPixmap& front, const QPixmap& back);
    QPixmap getImage() const;

    // 扑克牌显示那一面
    void setFrontSide(bool flag);
    bool isFrontSide() const;

    // 记录窗口是否被选中了
    void setSelected(bool flag);
    bool isSelected() const;

    // 扑克牌的花色以及点数
    void setCard(const Card& card);
    const Card& getCard() const;

    // 扑克牌的所有者
    void setOwner(Player* player);
    const Player* getOwner() const;

    // 模拟扑克牌的点击事件
    void clicked();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

signals:
    void cardSelected(Qt::MouseButtons button);

private:
    QPixmap m_frontImage;
    QPixmap m_backImage;

    bool m_isFront;
    bool m_select;

    Card m_card;

    Player* m_owner;
};


#endif //LANDLORDGAME_CARDPANEL_H
