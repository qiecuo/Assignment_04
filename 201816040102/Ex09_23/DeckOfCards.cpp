#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include "DeckOfCards.h"
#include <time.h>
using namespace std;
DeckOfCards::DeckOfCards()
{
	for(int i =0;i<13;i++)
	{
		for(int j=0;j<4;j++)
		{
			deck.push_back(Card(i,j));
		}	
	}
	shuffle();	
}
void DeckOfCards::shuffle()           //洗牌 
{
	srand( unsigned( time(0) ) );
	for(int i = 0; i < 52; i++)
	{
 	   int x=rand()%52 ;
 	   swap(deck[i],deck[x]);
	}	
}
Card DeckOfCards::dealCard()         //返回下一张牌 
{
	return deck[currentCard];	
}
bool DeckOfCards::moreCards()       //是否有剩余的牌 
{
	if(currentCard++<=52)
		return 1;
	else
		return 	0;	
}
Card DeckOfCards::getCard(int i)
{
	return deck[i];
}
