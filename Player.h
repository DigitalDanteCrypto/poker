#pragma once
#include <vector>
#include "Card.h"

class Player {


private :

    std::vector<Card> _myHand;

public:

    void AddCard(Card card);
    void ToString() const;
};
