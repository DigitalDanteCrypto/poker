#pragma once
#include <string>


//We make Enum of the Suits and Values
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


//Get values functions
    Values getValue();

    Suits getSuits();

//Constructor
    Card(Suits suits, Values values);


    //ToString Function
    void ToString() const;

    static bool compareCardValues(Card A, Card B);

};


