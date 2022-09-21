#pragma once
#include <vector>
#include "Card.h"

class Player {


private :

    std::vector<Card> _myHand;
    std::string _playerName;

public:
    Player(std::string playerName);
    void AddCard(Card card);
    void ToString() const;
};
