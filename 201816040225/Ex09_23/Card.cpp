//browsing a website
#include<string>
#include<iostream>
#include"Card.h"
using namespace std;
string Card::suit1[4]={"Hearts","Diamonds","Clubs","Spades"};//suit members
string Card::face1[13]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};//face members
Card::Card(int a,int b)//constructor Card
{
    face=a;
    suit=b;
}
void Card::toString()//output face and it's suit
{
    cout<<face1[face]<<" of "<<suit1[suit];
}
