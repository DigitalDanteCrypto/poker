#include <iostream>
#include "Card.h"


//Defining Constructor
Card::Card(Suits suits, Values values) {
    _suits = suits;
    _values = values;
}


//Function to string the cards to make them string
std::string Card::suitToString() const {
    switch (_suits) {
        case Suits::CLUBS:
            return "Clubs";
        case Suits::HEARTS:
            return "Hearts";
        case Suits::SPADES:
            return "Spades";
        case Suits::DIAMOND:
            return "Diamond";
        case Suits::endSuits:
            return "Unknown";
    }

    return "undefined";
}


//We string the values of the card
std::string Card::valueToString() const {
    switch (_values) {
        case Values::TWO:
            return "2";
        case Values::THREE:
            return "3";
        case Values::FOUR:
            return "4";
        case Values::FIVE:
            return "5";
        case Values::SIX:
            return "6";
        case Values::SEVEN:
            return "7";
        case Values::EIGHT:
            return "8";
        case Values::NINE:
            return "9";
        case Values::TEN:
            return "10";
        case Values::JACK:
            return "Jack";
        case Values::QUEEN:
            return "Queen";
        case Values::KING:
            return "King";
        case Values::ACE:
            return "Ace";
        case Values::endValues:
            return "undefined";
    }

    return "ERROR ";
}



//We print out the 2 functions of the toString
void Card::ToString() const {
    std::cout << Card::valueToString() << " Of " << Card::suitToString();
    std::cout << "\n";
}



//We compare the values and return it as a boolean for another function
bool Card::compareCardValues(Card A, Card B) {
    if (A._values < B._values) {
        return true;

    } else {
        return false;
    }
}


//Simple get Functions
Values Card::getValue() {
    return _values;
}

Suits Card::getSuits() {
    return _suits;
}
