// Assignment_04: Ex09_24.cpp
// Create and manipulate DeckOfCards objects.
#include <iostream>
#include "DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards deckofcard;
    deckofcard.shuffle();
    deckofcard.dealFiveCard();

    if(deckofcard.isOneDouble())
        cout << "\nThere is a pair." << endl;
    else
        cout << "\nThere are no pair." << endl;

    if(deckofcard.isTwoDouble())
        cout << "\nThere are two pair." << endl;
    else
        cout << "\nThere are no two pair." << endl;

    if(deckofcard.isThreePlate())
        cout << "\nThere are three CARDS in a row." << endl;
    else
        cout << "\nThere are no three CARDS in a row." << endl;

    if(deckofcard.isFourPlate())
        cout << "\nThere are four CARDS in a row." << endl;
    else
        cout << "\nThere are no four CARDS in a row." << endl;

    if(deckofcard.isFlush())
        cout << "\nThere is flush." << endl;
    else
        cout << "\nThere isn't flush." << endl;

    if(deckofcard.isSuitable())
        cout << "\nThere are CARDS in alignment." << endl;
    else
        cout << "\nThere aren't CARDS in alignment." << endl;

    return 0;
}
