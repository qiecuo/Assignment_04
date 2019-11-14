#include <bits/stdc++.h>
using namespace std;

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
    for(int i=0;i<13;i++)
        for(int j=0;j<4;j++)
            deck.push_back(Card(i,j));
}

void DeckOfCards::shuffle()
{
    srand((unsigned int)time(NULL));
    int flag[26];
    memset(flag,0,sizeof(flag));
    for(int i=26;i<=51;i++){
        int x=rand()%26;
        if(!flag[x]){
            swap(deck[i],deck[x]);
        }
        else
        {
            while(1){
                if(!flag[(++x)%26])
                    break;
            }
            swap(deck[i],deck[x]);
        }
    }
}

void DeckOfCards::drive()
{
    shuffle();
    if(!moreCard())
        cout<<"There are no cards"<<endl;
    else{
        Card c=dealCard();
        deck.pop_back();
        cout<<c.tostring()<<endl;
    }
}

Card DeckOfCards::dealCard()
{
    int x=deck.back().getface();
    int y=deck.back().getsuit();
    Card c(x,y);
    return c;
}

bool DeckOfCards::moreCard()
{
    if(deck.empty()){
        return false;
    }
    return true;
}
