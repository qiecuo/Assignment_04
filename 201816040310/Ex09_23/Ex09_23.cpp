#include <iostream>
#include <string>
#include <array>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
int main()
{
    DeckOfCards deck; // define a deck of card
    deck.shuffle();   // shuffle deck

    array<vector<Card>, 4> side; // 4 sides represent 4 people who are play this game
    int curS = 0;                // a flag to deal card
    while (deck.moreCards())
    {
        Card card = deck.dealCard();
        side[curS].push_back(card);
        curS = (curS + 1) % 4; // when curS MOD 4 is 0,it will to a new turn
    }
    for (int i = 0; i < 4; i++) // display every sides' cards
    {
        cout << "\nSIDE " << i + 1 << " :" << endl;
        for (Card card : side[i])
        {
            cout << card.toString() << endl;
        }
    }
}