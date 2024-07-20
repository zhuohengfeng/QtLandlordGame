//
// Created by HengFeng on 2024/7/15.
//

#include "card.h"

Card::Card(CardPoint point, CardSuit suit) {
    setPoint(point);
    setSuit(suit);
}

bool lessSort(const Card &c1, const Card &c2) {
    if (c1.getPoint() == c2.getPoint()) {
        return c1.getSuit() < c2.getSuit();
    }
    return c1.getPoint() < c2.getPoint();
}

bool greaterSort(const Card &c1, const Card &c2) {
    if (c1.getPoint() == c2.getPoint()) {
        return c1.getSuit() > c2.getSuit();
    }
    return c1.getPoint() > c2.getPoint();
}

bool operator<(const Card &c1, const Card &c2) {
    return lessSort(c1, c2);
}

bool operator>(const Card &c1, const Card &c2) {
    return greaterSort(c1, c2);
}

bool operator==(const Card &c1, const Card &c2) {
    return (c1.getSuit() == c2.getSuit()) && (c1.getPoint() == c2.getPoint());
}


uint qHash(const Card &card)
{
    return static_cast<uint>(card.getPoint()) * 100 + static_cast<uint>(card.getSuit());
}
