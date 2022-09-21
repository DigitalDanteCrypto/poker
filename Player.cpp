#include <iostream>
#include "Player.h"

void Player::AddCard(Card card) {
    _myHand.emplace_back(card);

}

void Player::ToString() const {

std::cout << " My player cards :" << "\n";

for(auto &card : _myHand) {
    card.ToString();
}



};
