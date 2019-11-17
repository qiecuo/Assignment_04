#include<iostream>
#include<string>
#include"DeskOfCards.h"
#include"card.h"
#include<vector>
#include<cstdlib>
#include<ctime>


DeckOfCards::DeckOfCards()//constructor
{

    for (size_t i =0;i<52;i++)
    {
        Card card(i%13,i/13);

        deck.push_back(card);
    }

}

void DeckOfCards::shuffle()//shuffle
{
    int swap1[52];//define array
    srand(time(0));//random
    for (int i=0;i<52;i++)
    {

        swap1[i]=(rand())%52;//
        Card change(1,2);
        change = deck[i];
        deck[i] = deck[swap1[i]];
        deck[swap1[i]] = change;
    }

}
//Returns the next card
Card DeckOfCards::dealcard(int currentCard)
{

    cout<<deck[currentCard+1].toString()<<endl;

}
void DeckOfCards::viewcard( int num)//view card
{
    if(num>52||num<0)
    {
        cout<<" please enter a correct number.....";
    }
    else
    {
        for (int i = 0;i<num;i++)
        {
            cout<<deck[i].toString()<<endl;
        }

    }

}

bool DeckOfCards::morecard()
{
    if(currentCard==52)
    {
        return true;
    }
    else
    {
        return false;
    }

}
