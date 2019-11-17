#include <iostream>
#include "Card.h"  // include definition of class Card from Card.h
#include "DeckOfCards.h"  // include definition of class DeckOfCards from DeckOfCards.h

using namespace std;

int main()
{
    DeckOfCards d; // create a DeckOfCards object
    d.shuffle(); //shuffle the cards
    d.dealCard(52); //deal cards
    cout<<endl;
    if(!d.moreCards()) //judge if there are any remaining cards
        cout<<"There are no remaining cards."<<endl;
    else
        cout<<"There are remaining cards."<<endl;

    return 0;
}
