// Assignment_04: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards.
#include "DeckOfCards.h"
#include <cstdlib>
#include <ctime>
#include <array>

int DeckOfCards::total = 52;

DeckOfCards::DeckOfCards ()
{
    currentCard = 0;
    for( int i = 0;i < Card::facetotal; ++i )
    {
        for( int j = 0;j < Card::suittotal; ++j )
        {
            Card card(i,j);
            deck.push_back(card);
        }
    }
    srand( time(0) );
}

void DeckOfCards::shuffle()
{
    int flag;
    Card temp;
    for( int i = 0;i < total; ++i )
    {
        flag = rand() % total;
        temp = deck[i];
        deck[i] = deck[flag];
        deck[flag] = temp;
    }
}

void DeckOfCards::dealFiveCard()
{
    for( int i = 0; i < 5; ++i )
    {
        std::cout << deck[currentCard].toString()<< std::endl;
        ++currentCard;
    }
}

bool DeckOfCards::moreCards()
{
    return currentCard < total;
}

bool DeckOfCards::isOneDouble()
{
    int flag = 0;
    for( int i = 0; i < currentCard; ++i )
    {
        for( int j = i+1; j < currentCard; ++j )
        {
            if( deck[i].face == deck[j].face )
            {
                flag = 1;
                goto out;
            }
        }
    }
    out:
    if( flag == 1 )
        return true;
    else
        return false;
}

bool DeckOfCards::isTwoDouble()
{
    int *flag,temp = 0;
    flag = new int [ currentCard ]();
    for( int i = 0; i < currentCard; ++i )
    {
        if( flag[i] == 0 )
        {
            for(int j = i+1; j < currentCard; ++j )
            {
                if( deck[i].face == deck[j].face )
                {
                    flag[i] = 1;
                    flag[j] = 1;
                }
            }
        }

    }
    for( int i = 0; i < currentCard; ++i )
    {
        if( flag[i] == 1 )
            ++temp;
    }
    if( temp == 4 )
        return true;
    else
        return false;
}

bool DeckOfCards::isThreePlate()
{
    int flag = 0;
    for( int i = 0; i < currentCard; ++i )
    {
        for( int j = i+1; j < currentCard; ++j )
        {
            if( deck[i].face == deck[j].face )
            {
                for( int k = j+1; k < currentCard; ++k )
                {
                    if( deck[j].face == deck[k].face )
                    {
                        flag = 1;
                            goto out;
                    }
                }
            }
        }
    }
    out:
    if( flag == 1 )
        return true;
    else
        return false;
}

bool DeckOfCards::isFourPlate()
{
    int flag = 0;
    for( int i = 0; i < currentCard; ++i )
    {
        for( int j = i+1; j < currentCard; ++j )
        {
            if( deck[i].face == deck[j].face )
            {
                for( int k = j+1; k < currentCard; ++k )
                {
                    if( deck[j].face == deck[k].face )
                    {
                       for( int l = k+1; l < currentCard; ++l )
                       {
                            if( deck[k].face == deck[l].face )
                            {
                                flag = 1;
                                    goto out;
                            }
                       }
                    }
                }
            }
        }
    }
    out:
    if( flag == 1 )
        return true;
    else
        return false;
}

bool DeckOfCards::isFlush()
{
    int flag = 1;
    for( int i = 0; i < currentCard; ++i )
    {
        if( deck[0].suit != deck[i].suit )
        {
            flag = 0;
            break;
        }
    }
    if( flag == 1 )
        return true;
    else
        return false;
}

bool DeckOfCards::isSuitable()
{
    std::vector < Card > decks;
    int flag = 1,temp;
    int *flags;
    flags = new int [ currentCard ]();

    for( int i = 0; i < currentCard; ++i )
    {
        if( flags[i] == 0 )
        {
            temp = i;
            for( int j = i+1; j < currentCard; ++j )
            {
                if( flags[j] == 0 )
                    if( deck[temp].face < deck[j].face )
                        temp = j;
            }
            flags[temp] = 1;
            decks.push_back(deck[temp]);
        }
    }
    for( int i = 0; i < currentCard - 1; ++i )
    {
        if( ( decks[i].face - 1 ) != decks[i+1].face )
        {
             flag = 0;
             break;
        }
    }
    if( flag == 1 )
        return true;
    else
        return false;
}
