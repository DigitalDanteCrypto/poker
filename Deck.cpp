
#include <random>
#include "Deck.h"


//We use the constructor of deck to create the cards
Deck::Deck() {
    for (int suit = (int) Suits::CLUBS; suit < (int) Suits::endSuits; suit++) {
        for (int value = (int) Values::TWO; value < (int) Values::endValues; value++) {
            _cards.emplace_back(
                    Card(static_cast<Suits>(suit), static_cast<Values>(value)));
        }
    }
}

//We Call the card to string function and use it in the deckToString Function
void Deck::ToString() const {
    for (auto &card: _cards) {
        card.ToString();
    }
}


//We shuffle the cards
void Deck::Shuffle() {
    std::shuffle(this->_cards.begin(), this->_cards.end(), std::random_device());

}

//We can get a card
Card Deck::getCard() {
    Card pickedCard = _cards.front();
    _cards.erase(_cards.begin());
    return pickedCard;
}
