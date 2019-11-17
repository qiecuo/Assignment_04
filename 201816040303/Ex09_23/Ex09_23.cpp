#include<iostream>
#include"DeckOfCards.h"
#include"Card.h"

using namespace std;

int main()
{
    DeckOfCards cards(2);
    cards.shuffle();
    while(cards.moreCard()) {
        cout << cards.dealCard().getFos() << endl;
    }
    return 0;
}
