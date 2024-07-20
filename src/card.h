//
// Created by HengFeng on 2024/7/15.
//

#ifndef LANDLORDGAME_CARD_H
#define LANDLORDGAME_CARD_H

#include <QVector>


class Card final {

public:
    // 花色
    enum class CardSuit
    {
        Suit_Begin,
        Diamond,
        Club,
        Heart,
        Spade,
        Suit_End
    };

// 点数
    enum class CardPoint
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

public:
    Card() = default;
    ~Card() = default;

    Card(CardPoint point, CardSuit suit);

    void setPoint(const CardPoint& point) { m_point = point; };
    [[nodiscard]] CardPoint getPoint() const { return m_point; };

    void setSuit(const CardSuit& suit) { m_suit = suit; };
    [[nodiscard]] CardSuit getSuit() const { return m_suit; };

private:
    CardSuit m_suit;
    CardPoint m_point;

};

bool lessSort(const Card& c1, const Card& c2);
bool greaterSort(const Card& c1, const Card& c2);
bool operator < (const Card& c1, const Card& c2);
bool operator > (const Card& c1, const Card& c2);
bool operator == (const Card& c1, const Card& c2);

// 重写全局函数 qHash
uint qHash(const Card& card);

// 定义排好序的牌的新类型
using CardList = QVector<Card>;


#endif //LANDLORDGAME_CARD_H
