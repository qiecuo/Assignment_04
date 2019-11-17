#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int DeckOfCards::number = 52;
DeckOfCards::DeckOfCards() //Initialize 52 CARDS
{
    currentCard=0;
    for( int i = 0;i < 52; ++i)
    {
        Card card(i%13,i/13);
        deck.push_back(card);
    }
    srand( time(0) );
}
void DeckOfCards::shuffle() //Shuffle the deck
{
    int flag;
    Card temp;
    for( int i = 0;i < 52; ++i)
    {
        flag = rand() % 52;
        temp = deck[51-i];
        deck[51-i] = deck[flag];
        deck[flag] = temp;
    }
}
void DeckOfCards::dealCard()
{
    cout << deck[currentCard].toString()<< endl;
    ++currentCard;
}
bool DeckOfCards::moreCards() //Whether it's the last card
{
    return currentCard < 52;
}
