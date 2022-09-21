#pragma once

#include <vector>
#include "Card.h"

class Deck {

private:
    std::vector<Card> _cards;


public :
    void Shuffle();

    Deck();

    void ToString() const;

    Card getCard();

};


