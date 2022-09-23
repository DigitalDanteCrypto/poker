#include <iostream>
#include "Player.h"
#include <algorithm>
#include <map>


//We add a card in the myHand vector
void Player::AddCard(Card card) {
    _myHand.emplace_back(card);

}


//We sort the cards in the _my Hand variable
void Player::sortHand() {
    std::sort(_myHand.begin(), _myHand.end(), Card::compareCardValues);
}


//This display the info : PlayerName + Cards + Pattern
void Player::ToString() {
    std::cout << _playerName << " player cards :" << "\n";
    sortHand();
    for (auto &card: _myHand) {
        card.ToString();

    }
    std::cout << getPattern().patternToString();
    std::cout << "\n";

}


//Give a name to the Object Player
Player::Player(std::string playerName) {
    _playerName = playerName;
}


// Get Pattern of the 5 Cards
Pattern Player::getPattern() {
    Pattern result = Pattern();

    std::map<Values, int> countValues;
    std::map<Suits, int> countSuits;



    for (Card card1: _myHand) {
        int countValue = 0;
        int countSuit = 0;
        for (Card card2: _myHand) {
            if (card1.getValue() == card2.getValue()) {
                countValue++;
            }
            if (card1.getSuits() == card1.getSuits()) {
                countSuit++;
            }
        }
        countValues[card1.getValue()] = countValue;
        countSuits[card1.getSuits()] = countSuit;

    }

    for (auto &countValue: countValues) {
        if (countValue.second == 2) {
            result.PatternValue = Pattern::Patterns::PAIR;
            result.firstCard = countValue.first;
            if (countValue.second > 2 && countValue.first != result.firstCard) {
                result.PatternValue = Pattern::Patterns::TWO_PAIRS;
                result.secondCard = countValue.first;
            }
        }
            if (countValue.second == 3) {
                result.PatternValue = Pattern::Patterns::THREE_OF_A_KIND;
                result.firstCard = countValue.first;
                if (countValue.second == 2 && countValue.first != result.firstCard) {
                    result.PatternValue = Pattern::Patterns::FULL_HOUSE;
                    result.secondCard = countValue.first;
                }

            }
            if (countValue.second == 4) {
                result.PatternValue = Pattern::Patterns::FOUR_OF_A_KIND;
                result.firstCard = countValue.first;
                if (countValue.second == 2 && countValue.first != result.firstCard) {
                    result.PatternValue = Pattern::Patterns::STRAIGHT;
                    result.secondCard = countValue.first;
                }

            }




        return result;
    }


}




