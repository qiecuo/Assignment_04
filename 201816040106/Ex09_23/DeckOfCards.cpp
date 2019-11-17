#include "DeckOfCards.h"
#include "Card.h"
#include <ctime>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
DeckOfCards::DeckOfCards()
{
    currentCard = 0;
    while (moreCards())
    {
        deck.push_back(dealCard());
        currentCard++;
    }
}
void DeckOfCards::shuffle()
{
    srand(time(0));
    for (int i = 0; i < 52; i++)
    {
        Card card;
        int a = rand() % 52;
        card = deck[i];
        deck[i] = deck[a];
        deck[a] = card;
    }
}
void DeckOfCards::shuffle1()
{
    currentCard = 0;
    while (moreCards1())
    {
        deck.push_back(dealCard());
        currentCard++;
    }
    srand(time(0));
    for (int i = 0; i < 52; i++)
    {
        Card card;
        int a = rand() % 52;
        card = deck[i];
        deck[i] = deck[a];
        deck[a] = card;
    }
}
Card DeckOfCards::dealCard()
{

    Card a;
    if (currentCard >= 0 && currentCard < 13)
    {
        a.suit = 0;
        a.face = currentCard;
    }
    if (currentCard >= 13 && currentCard < 26)
    {
        a.suit = 1;
        a.face = currentCard - 13;
    }
    if (currentCard >= 26 && currentCard < 39)
    {
        a.suit = 2;
        a.face = currentCard - 26;
    }
    if (currentCard >= 39 && currentCard < 52)
    {
        a.suit = 3;
        a.face = currentCard - 39;
    }
    return a;
}
bool DeckOfCards::moreCards()
{
    return currentCard < 52 ? true : false;
}
bool DeckOfCards::moreCards1()
{
    return currentCard < 5 ? true : false;
}
void DeckOfCards::print()
{
    for (int i = 0; i < 52; i++)
        cout << deck[i].toString() << endl;
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
