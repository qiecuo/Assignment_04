#include <iostream>
#include "DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards FirstDeck;//create an object
    FirstDeck.shuffle();//shuffle the poker
    cout<<"Shuffling..."<<endl;
    cout<<"Shuffle the end!"<<endl;
    cout<<"Hand out poker:"<<endl;
    for(int i=0;FirstDeck.moreCards();i++)//print the poker of the vector deck
    {
        cout<<FirstDeck.dealCard().toString()<<endl;
    }
    cout<<"End of poker hand out"<<endl;
    return 0;
}
