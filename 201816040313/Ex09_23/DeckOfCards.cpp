#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <time.h>
#include <string.h>
using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard=0;

    for(int i=0;i<52;i++)
    {
        deck.push_back(Card(i%13,i%4));//use vector 's push_back to add the resulting card to the end
    }


    srand(time(0));//generate random number

}
void DeckOfCards::shuffle()
{
    //Card first;
    Card first(0,0);//declare a temporary object
    for(int i=0;i<52;i++)//exchange 52 times
    {

        first=deck[i];
        int number=rand()%52;
        deck[i]=deck[number];
        deck[number]=first;

    }

}
void DeckOfCards::output()
{
    int i;
    for(i=0;i<52;i++)
    {
        deck[i].toString();
    }

}

Card DeckOfCards::dealCard()
{
    deck[currentCard].toString();//output the next card
    currentCard++;
    if(moreCards())
    {
        cout<<"there is still cards"<<endl;
    }
    if(!moreCards())
    {
        cout<<"there is no cards"<<endl;
    }

}
bool DeckOfCards::moreCards()
{
   if(currentCard==52)//if currentCard be equal to 52,it means there is no card to deal with
   {
        return false;
   }
   return true;
}
void DeckOfCards::sendoutCard()
{
    int k=13;
    cout<<"you attain 13 cards"<<endl;
    for(k=0;k<13;k++)
    {
        deck[k].toString();
    }
}
