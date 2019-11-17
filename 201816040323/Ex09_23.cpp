
#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards deckofcard;
    deckofcard.shuffle();
    deckofcard.dealCard();
    return 0;
}
