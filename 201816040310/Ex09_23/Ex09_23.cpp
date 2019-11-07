#include <iostream>
#include <string>
#include <array>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;
int main()
{
    DeckOfCards deck;
    deck.shuffle();
    deck.shuffle();
    deck.shuffle();
    array<vector<Card>, 4> side;
    int curS = 0;
    while (deck.moreCards())
    {
        Card card = deck.dealCard();
        side[curS].push_back(card);
        curS = (curS + 1) % 4;
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<"\nSIDE "<<i+1<<" :"<<endl;
        for (Card card : side[i])
        {
            cout << card.toString() << endl;
        }
    }
}