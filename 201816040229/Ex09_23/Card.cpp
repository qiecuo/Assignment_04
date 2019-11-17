#include<iostream>
using namespace std;
#include"Card.h"
#include"DeckOfCards.h"
Card::Card(string color,string points)
{
    this->color=color;
    this->point=point;

}

void Card::display()
{
    string s=this->color + this->point;
    cout<<s<<endl;
}
//输出牌的花色和数字
