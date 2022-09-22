
#include "Pattern.h"

std::string Pattern::patternToString() {
   switch(PatternValue) {
       case Patterns::HIGHCARD:
           return "Highcard";


       case Patterns::PAIR:
           return "Pair";


       case Patterns::TWO_PAIRS:
           return "TwoPairs";


       case Patterns::THREE_OF_A_KIND:
           return "ThreeOfAKind";


       case Patterns::STRAIGHT:
           return "Straight";


       case Patterns::FLUSH:
           return "Flush";


       case Patterns::FULL_HOUSE:
           return "FullHouse";


       case Patterns::FOUR_OF_A_KIND:
           return "FourOfAKind";


       case Patterns::STRAIGHT_FLUSH:
           return "StraightFlush";


       default:
           break;
   }
}
