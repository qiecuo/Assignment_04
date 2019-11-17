#include<iostream>
#include"DeckOfCards.h"//define class DeckOfCards
#include"Card.h"//define class Card
using namespace std;
int main()
{
    DeckOfCards a;//object of class
    cout<<"deal the cards before shuffle"<<endl;
    a.dealCard1();//choose cards
    a.shuffle();
    cout<<"deal the cards after shuffle"<<endl;
    a.dealCard2();//output result
    return 0;

    }
