#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards d1;
    d1.shuffle();
    d1.output();
    cout<<endl;
    cout<<"next card is"<<endl;
    for(int j=0;j<52;j++)
    {
        d1.dealCard();
    }
    cout<<endl;
    d1.sendoutCard();
    return 0;
}
