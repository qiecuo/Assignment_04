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
	if(k<=4)
	{
		return true;
	}
	else
	{
		return false;
	}

}
void DeckOfCards::print1()
{
    for (int i = 0; i < 5; i++)
        cout << deck[i].toString() << endl;
    cout<<"hasOnePair : "<<(hasOnePair()?"Yes":"No")<<endl;
    cout<<"hasTwoPair : "<<(hasTwoPair()?"Yes":"No")<<endl;
    cout<<"hasThreeSameFace : "<<(hasThreeSameFace()?"Yes":"No")<<endl;
    cout<<"hashasFourSameFace : "<<(hasFourSameFace()?"Yes":"No")<<endl;
    cout<<"hasTongshun : "<<(hasTongshun()?"Yes":"No")<<endl;
    cout<<"hasFiveSameSuit : "<<(hasFiveSameSuit()?"Yes":"No")<<endl;
}
bool DeckOfCards::hasOnePair()
{
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (deck[i].face == deck[j].face)
                return true;
    return false;
}
bool DeckOfCards::hasTwoPair()
{
    int cnt = 0;
    int firstI = -1, firstJ = -1;
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (deck[i].face == deck[j].face && firstI == -1 && firstJ == -1)
            {
                firstI = i;
                firstJ = j;
                cnt++;
            }
            else if (deck[i].face == deck[j].face && firstI != i && firstJ != j)
            {
                cnt++;
            }
        }
    if (cnt == 2)
        return true;
    return false;
}
bool DeckOfCards::hasThreeSameFace()
{
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            if (deck[i].face == deck[j].face)
                for (int k = j + 1; k < 5; k++)
                    if (deck[k].face == deck[j].face)
                        return true;
    return false;
}
bool DeckOfCards::hasFourSameFace()
{
    for (int i = 0; i < 2; i++)
        for (int j = i + 1; j < 3; j++)
            if (deck[i].face == deck[j].face)
                for (int k = j + 1; k < 4; k++)
                    if (deck[k].face == deck[j].face)
                        for (int l = k + 1; l < 5; l++)
                            if (deck[l].face == deck[l].face)
                                return true;
    return false;
}
bool DeckOfCards::hasTongshun()
{
    for (int i = 1; i < 5; i++)
        if(deck[i].face!=deck[i-1].face+1)
            return false;
    return true;
}
bool DeckOfCards::hasFiveSameSuit()
{
    for (int i = 1; i < 5; i++)
        if(deck[i].suit!=deck[i-1].suit)
            return false;
    return true;
}
