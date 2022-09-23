#pragma once


#include "Deck.h"
#include "Player.h"

int constexpr PLAYERS = 5;
int constexpr NUMBER_OF_CARDS = 5;

class Dealer {

private:
    Deck _deck;

    std::vector<Player> _players;

//List of default PlayerNames
    const std::vector<std::string> _NAME_TABLE = {
            "John",
            "Marcel",
            "Nicolas",
            "Patrick",
            "Thomas",
    };

//Function to Distribute cards
    void distribute();

public:
    //Constructor
    Dealer();
    //Game controller
    void StartGame();

    //Get a Winner (beta)
    void getWinner();


};
