#include <iostream>
#include "Player.h"

void Player::AddCard(Card card) {
    _myHand.emplace_back(card);

}

void Player::ToString() const {

std::cout << _playerName << " player cards :" << "\n";

for(auto &card : _myHand) {
    card.ToString();
}



}

Player::Player(std::string playerName) {
 _playerName = playerName;
}


