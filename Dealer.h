#pragma once


#include "Deck.h"
#include "Player.h"
int constexpr PLAYERS = 5;
int constexpr NUMBER_OF_CARDS = 5;

class Dealer {

private:
    Deck _deck;
    std::vector<Player> _players;
    const std::vector<std::string> _NAME_TABLE = {
            "John",
            "Marcel",
            "Nicolas",
            "Patrick",
            "Thomas",
    };


    void distribute();

public:

    Dealer();

    void StartGame();


};
