//
// Created by Rokid on 2024/7/20.
//

#include "userplayer.h"

UserPlayer::UserPlayer(QObject *parent) : Player(parent)
{
    m_type = Player::User;
}

void UserPlayer::prepareCallLord()
{

}

void UserPlayer::preparePlayHand()
{
    emit startCountDown();
}
