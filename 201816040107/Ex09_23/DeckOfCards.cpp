#include "DeckOfCards.h"
#include  <vector>
#include <iostream>
using namespace std;
DeckOfCards::DeckOfCards()//定义构造函数；
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<13;j++)
		{
			Card t(i,j);
			deck.push_back(t);
		}
	}
}
void DeckOfCards::shuffle()
{
	vector<int>t;
	int j=0;
	for(int i=0;i<52;i++)
	{
		t.push_back(i);
	}
	random_shuffle(t.begin(),t.end());
	for(int i=51;i>0;i--)
	{
		j=i-1;
		swap(deck[t[i]],deck[t[j]]);
	}
}
void DeckOfCards::dealCard()
{
	if(moreCards())
	{
		cout<<deck[k].toString()<<endl;
		k++;
	}
}
bool DeckOfCards::moreCards()
{
	if(k<=52)
	{
		return true;
	}
	else
	{
		return false;
	}

}
