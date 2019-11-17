#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards FirstDeck;//create an object FirstDeck
    FirstDeck.shuffle();//shuffle the poker card
    //it will hang out different poker in different time
    FirstDeck.hangOutCard();//hang out five poker card
    return 0;
}
