#include <iostream>

using namespace std;
#include "Card.h"
#include "DeckOfCards.h"

int main()
{
    DeckOfCards a;//construct a
    a.shuffle();//shuffle a
    for(int i=0;i<52;++i )
    {
        cout<<a.dealCard().toString()<<endl;
    }
    if(a.moreCards()) //judge if there are any remaining cards
        cout<<"There are no remaining cards"<<endl;
    else
        cout<<"There are remaining cards"<<endl;
    return 0;
}
