#pragma once
#include <string>

enum class Suits {
    HEARTS,
    CLUBS,
    DIAMOND,
    SPADES,
    endSuits
};

enum class Values {
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    endValues

};


class Card {

private:

    Suits _suits;
    Values _values;

    std::string suitToString() const;

    std::string valueToString() const;

public:


    Card(Suits suits, Values values);

    void ToString() const;


};


