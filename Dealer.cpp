
#include "Dealer.h"
//Constructor
Dealer::Dealer() {

    for(int i = 0 ; i < PLAYERS ; i++) {
        _players.emplace_back(Player());
    }
_deck = Deck();

}
//Function to distribute cards.
void Dealer::distribute() {
    _deck.Shuffle();
for(int i = 0; i < NUMBER_OF_CARDS; i++) {
    for(Player &player:_players) {
        Card card = _deck.getCard();
        player.AddCard(card);
    }
}


}


void Dealer::StartGame() {
    this->distribute();
    for (Player &player: _players) {
        player.ToString();
    }

}
