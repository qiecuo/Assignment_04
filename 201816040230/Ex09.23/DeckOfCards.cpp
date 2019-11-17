#include<iostream>
#include"DeckOfCards.h"
#include"Card.h"
using namespace std;


DeckOfCards::DeckOfCards()
{
    for(int i=0;i<=3;i++)
        for(int j=0;j<=12;j++)
            deck.push_back(Card(i,j));
}
 Card DeckOfCards::dealCard()
 {
     int s,f;
      s=deck.back().getsuit();
     f=deck.back().getface();

return Card(s,f);

 }
void DeckOfCards:: shuffle()
{

    int flag[26];
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

 bool DeckOfCards::moreCards()
{
    if(deck.empty())
    {
        return false;
    }
    return true;
}
void DeckOfCards::print()
{
     shuffle();
    if(!moreCards())
           {
               cout<<"There is not cards"<<endl;

           }
            else
            {
                Card c=dealCard();
               deck.pop_back();
                cout<<c.toString()<<endl;
            }
    }

//参考王嘉豪的
