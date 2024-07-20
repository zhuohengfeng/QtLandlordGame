//
// Created by Rokid on 2024/7/20.
//

#ifndef LANDLORDGAME_USERPLAYER_H
#define LANDLORDGAME_USERPLAYER_H

#include "player.h"
#include <QObject>

class UserPlayer : public Player
{
    Q_OBJECT
public:
    using Player::Player; // 构造函数重载
    explicit UserPlayer(QObject *parent = nullptr);

    void prepareCallLord() override;
    void preparePlayHand() override;

signals:
    void startCountDown();
};


#endif //LANDLORDGAME_USERPLAYER_H
