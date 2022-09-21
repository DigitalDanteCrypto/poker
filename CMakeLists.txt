cmake_minimum_required(VERSION 3.23)
project(poker)

set(CMAKE_CXX_STANDARD 14)

add_executable(poker main.cpp Card.h Card.cpp Deck.cpp Deck.h Dealer.cpp Dealer.h Player.cpp Player.h)
