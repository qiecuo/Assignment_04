#include <iostream>
#include <cstring>
#include <vector>
#include <ctime>
#include "DeckOfCards.h"  // include definition of DeckOfCards Card from DeckOfCards.h
#include "Card.h"  // include definition of class Card from Card.h
using namespace std;

// DeckOfCards constructor
DeckOfCards::DeckOfCards()
{
    for( int i = 1; i<=4; i++ )
    {
        for( int j = 1; j<=13; j++ )
        {
            Card card ( j, i );
            deck.push_back(card);
        }
    }
}

 //shuffle the cards
void DeckOfCards::shuffle()
{
    Card tcard(0,0);
    srand(time(NULL));
    for(int i=0;i<52;i++)
    {
        //Randomly choose a card and exchange with the card i.
        int t = rand()%52;
        tcard = deck[i];
        deck[i] = deck[t];
        deck[t] = tcard;
    }

}

 //deal cards
Card DeckOfCards::dealCard(int cardNum)
{
    for( int i = 0; i<cardNum; i++)
        cout<<deck[i].toString()<<endl;
    currentCard = cardNum;
    return deck[currentCard];
}

 //judge if there are any remaining cards
bool DeckOfCards::moreCards()
{
    if(currentCard == 52)
        return false;
    else
        return true;
}

//function to judge whether there is a pair
void DeckOfCards::onePair( )
{
    int t = 0;
    for( int i = 0; i<currentCard-1; i++)
    {
        for( int j = i+1; j<currentCard; j++)
        {
            //If card i is equal to card j,t=1
            if( deck[i].fa[deck[i].getFace()-1]==deck[j].fa[deck[j].getFace()-1] )
                t=1;
        }
        if( t == 1)
            break;
    }
    if( t == 1)
        cout<<"There is a pair."<<endl;
    else
        cout<<"There isn't a pair."<<endl;
}

 //function to judge whether there are two pairs
void DeckOfCards::twoPairs( )
{
    for( int i = 0; i<currentCard-1; i++)
    {
        for( int j = i+1; j<currentCard; j++)
        {
            if( deck[i].getFace()<deck[j].getFace() )
            {
                Card tcard = deck[i];
                deck[i] = deck[j];
                deck[j] = tcard;
            }
        }
    } //Sort cards from big to small
    int t = 0;
    for( int i = 0; i<currentCard-1; i++)
    {
        if( deck[i].fa[deck[i].getFace()-1]==deck[i+1].fa[deck[i+1].getFace()-1] )
        {
            t++;
            i++;
        }
    }
    if( t == 2)
        cout<<"There are two pairs."<<endl;
    else
        cout<<"There aren't two pair."<<endl;
}

//function to judge whether there are three cards of same face
void DeckOfCards::threeSameCards( )
{
    for( int i = 0; i<currentCard-1; i++)
    {
        for( int j = i+1; j<currentCard; j++)
        {
            if( deck[i].getFace()<deck[j].getFace() )
            {
                Card tcard = deck[i];
                deck[i] = deck[j];
                deck[j] = tcard;
            }
        }
    } //Sort cards from big to small
    int t = 0;
    for( int i = 0; i<currentCard-2; i++)
    {
        if( deck[i].fa[deck[i].getFace()-1]==deck[i+1].fa[deck[i+1].getFace()-1]
          &&deck[i].fa[deck[i].getFace()-1]==deck[i+2].fa[deck[i+2].getFace()-1] )
        {
            t++;
            break;
        }
    }
    if( t == 1)
        cout<<"There are three cards of same face."<<endl;
    else
        cout<<"There aren't three cards of same face."<<endl;
}

//function to judge whether there are four cards of same face
void DeckOfCards::fourSameCards( )
{
    for( int i = 0; i<currentCard-1; i++)
    {
        for( int j = i+1; j<currentCard; j++)
        {
            if( deck[i].getFace()<deck[j].getFace() )
            {
                Card tcard = deck[i];
                deck[i] = deck[j];
                deck[j] = tcard;
            }
        }
    } //Sort cards from big to small
    int t = 0;
    for( int i = 0; i<currentCard-3; i++)
    {
        if( deck[i].getFace()==deck[i+1].getFace()
          &&deck[i].getFace()==deck[i+2].getFace()
          &&deck[i].getFace()==deck[i+3].getFace() )
        {
            t++;
            break;
        }
    }
    if( t == 1)
        cout<<"There are four cards of same face."<<endl;
}

//function to judge whether these cards have the same suit
void DeckOfCards::sameSuit( )
{
    if( deck[0].getSuit()==deck[1].getSuit()
      &&deck[0].getSuit()==deck[2].getSuit()
      &&deck[0].getSuit()==deck[3].getSuit()
      &&deck[0].getSuit()==deck[4].getSuit() )
        cout<<"These cards have the same suit."<<endl;
    else
        cout<<"These cards don't have the same suit."<<endl;
}

//function to judge whether these cards have a continuous face
void DeckOfCards::continuousFace( )
{
    for( int i = 0; i<currentCard-1; i++)
    {
        for( int j = i+1; j<currentCard; j++)
        {
            if( deck[i].getFace()<deck[j].getFace() )
            {
                Card tcard = deck[i];
                deck[i] = deck[j];
                deck[j] = tcard;
            }
        }
    } //Sort cards from big to small
    if( deck[0].getFace()==deck[1].getFace()-1
      &&deck[1].getFace()==deck[2].getFace()-1
      &&deck[2].getFace()==deck[3].getFace()-1
      &&deck[3].getFace()==deck[4].getFace()-1 )
        cout<<"These cards have a continuous face."<<endl;
    else
        cout<<"These cards don't have a continuous face."<<endl;
}
