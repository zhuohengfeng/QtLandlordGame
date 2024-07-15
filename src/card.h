//
// Created by HengFeng on 2024/7/15.
//

#ifndef LANDLORDGAME_CARD_H
#define LANDLORDGAME_CARD_H

enum CardSuit
{
    Suit_Begin,
    Diamond,
    Club,
    Heart,
    Spade,
    Suit_End
};

enum CardPoint
{
    Card_Begin,
    Card_3,
    Card_4,
    Card_5,
    Card_6,
    Card_7,
    Card_8,
    Card_9,
    Card_10,
    Card_J,
    Card_Q,
    Card_K,
    Card_A,
    Card_2,
    Card_SJ, // small joker
    Card_BJ, // big joker
    Card_End
};

class Card final {

public:
    Card();
    ~Card();

    void setPoint(const CardPoint& point) { m_point = point; };
    CardPoint getPoint() const { return m_point; };

    void setSuit(const CardSuit& suit) { m_suit = suit; };
    CardSuit getSuit() const { return m_suit; };

private:
    CardSuit m_suit;
    CardPoint m_point;

};


#endif //LANDLORDGAME_CARD_H
