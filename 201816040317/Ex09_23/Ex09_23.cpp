#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards a;
    a.shuffle();
    for(int i=1;i<53;++i)
    {
         a.dealCard();
    }
}
