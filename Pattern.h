#pragma once
#include "Player.h"
#include "Card.h"
class Pattern {





public:


    enum class Patterns {
        HIGHCARD,
        PAIR,
        TWO_PAIRS,
        THREE_OF_A_KIND,
        STRAIGHT,
        FLUSH,
        FULL_HOUSE,
        FOUR_OF_A_KIND,
        STRAIGHT_FLUSH
    };


    Patterns PatternValue;




    Values firstCard;
    Values secondCard;
    Values thirdCard;

std::string patternToString();

};
