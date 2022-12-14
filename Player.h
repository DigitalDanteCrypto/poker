#pragma once

#include <vector>
#include "Card.h"
#include "Pattern.h"

class Player {

private :
//Vectors of cards by player and name of player
    std::vector<Card> _myHand;
    std::string _playerName;

public:
    explicit Player(std::string playerName);

    void sortHand();

    void AddCard(Card card);

    void ToString();

    Pattern getPattern();

};
