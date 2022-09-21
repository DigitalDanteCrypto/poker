
#include <random>
#include "Deck.h"

Deck::Deck() {
    for (int suit = (int) Suits::CLUBS; suit < (int) Suits::endSuits; suit++) {
        for (int value = (int) Values::TWO; value < (int) Values::endValues; value++) {
            _cards.emplace_back(
                            Card(static_cast<Suits>(suit), static_cast<Values>(value)));
        }
    }
}


void Deck::ToString() const {
    for (auto & card: _cards) {
        card.ToString();
    }
}

void Deck::Shuffle() {
    std::shuffle(this->_cards.begin(), this->_cards.end(), std::random_device());

}

Card Deck::getCard() {
    Card pickedCard = _cards.front();
    _cards.erase(_cards.begin());
    return pickedCard;
}
