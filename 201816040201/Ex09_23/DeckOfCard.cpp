#include<bits/stdc++.h>
#include"DeckOfCards.h"
#include"Card.h"
using namespace std;
DeckofCard::DeckofCard()
{
    currentCard=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<13;j++)
        {
            Card x(i,j);
            deck.push_back(x);

        }
    }
}
void DeckofCard::suffle()
{
    srand(clock());
    for(int i=0;i<deck.size();i++)
    {
        int index=rand()%52;
        swap(deck[index],deck[i]);

    }
}
bool DeckofCard::moreCard()
{
    return (deck.size()-currentCard>0)?true:false;
}
Card DeckofCard::dealCard()
{
    return deck[currentCard++];
}
