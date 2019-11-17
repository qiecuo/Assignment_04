#include<iostream>
#include"Card.h"
#include"DeckOfCards.h"
using namespace std;

int main()
{
    DeckOfCards cardOne;    //定义个牌组
    int i;

    cout << "Deal all cards before shuffle." << endl;

    for(i = 0; i < 52; ++i)
    {
        cout << cardOne.dealCard(i-1).toString() << endl;
        if((i+1)%13 == 0)
            cout << endl;
    }

    cardOne.shuffle();  //洗牌

    cout << endl << "Deal all cards after shuffle." << endl << endl;

    for(i = 0; i < 52; ++i)
    {
        cout << cardOne.dealCard(i-1).toString() << endl;
        if((i+1)%13 == 0)
            cout << endl;
    }

    if(cardOne.moreCards())
        cout << "There are cards to wash." << endl;
    else
        cout << endl << "No card to wash." << endl;


}
