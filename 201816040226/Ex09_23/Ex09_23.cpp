#include <iostream>
#include<ctime>

#include "Card.h"
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards d;
    cout<<"Deal Cards before shuffle"<<endl;
    d.dealCard1();
    d.dealCard2();
    d.shuffle();

    cout<<"Deal Cards after shuffle"<<endl;
    d.moreCards();

    return 0;
}
