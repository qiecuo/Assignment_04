#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards b;
    b.shuffle();
    int c;
    cout<<"Please input:"<<endl;
    cin >> c;
    for(int i=0;i<c;i++)
    {
        if(b.moreCards())
        {
            cout<<b.dealCard().toString()<<endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}

