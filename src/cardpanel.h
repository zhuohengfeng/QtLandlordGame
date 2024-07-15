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

    void setImage(const QPixmap& front, const QPixmap& back);
    QPixmap getImage() const;

    void setFrontSide(bool flag);
    bool isFrontSide() const;

    void setSelected(bool flag);
    bool isSelected() const;

    void setCard(const Card& card);
    const Card& getCard() const;

    void setOwner(Player* player);
    const Player* getOwner() const;

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

signals:


private:
    QPixmap m_frontImage;
    QPixmap m_backImage;

    bool m_isFront;
    bool m_select;

    Card m_card;

    Player* m_owner;
};


#endif //LANDLORDGAME_CARDPANEL_H
