//
// Created by wangl on 2019/11/10.
//
#include "DeckOfCards.h"
#include "Card.h"
using namespace std;

//initialize the vector: deck
DeckOfCards::DeckOfCards()
{
    int i ,j ;
    for ( i=0 ; i<4 ; i++)
    {
        for( j=0 ; j<13 ; j++)
        {
            Card poker(j , i);
            deck.push_back(poker);//push face and suit of joker to the back of deck
        }
    }
}
//random
void DeckOfCards::shuffle()
{
    int index;
    int value;
    Card median;

    if(deck.empty())
        return ;
    srand((int)rand());
    //拿当前系统时间作为种子，由于时间是变化的，种子变化，可以产生不相同的随机数。
    /* 每次发牌的时候任意分配待交换的数据 */
    for(index = 0; index < 52; index ++){
        value = rand() % 52;

        median = deck[index];
        deck[index] = deck[value];
        deck[value] = median;
    }

}
//return next card
Card DeckOfCards::dealCard()
{
    currentCard++;
    return deck[currentCard-1];
}
//judge if cards over the limit
bool DeckOfCards::moreCards()
{
    if( currentCard > 51 )
    {
        return true;
    }
    else if( currentCard <= 51 )
    {
        return false;
    }
}
