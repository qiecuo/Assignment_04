#include <iostream>
#include<stdexcept>
#include<iomanip>
#include "Card.h"
using namespace std;

//string 数组表示面值和花色
string Card::suit1[4]={"Hearts","Diamonds","Clubs","Spades"};
string Card::face1[13]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
Card::Card(int a,int b)
{
    face=a;
    suit=b;
}//end Card constructor
//返回face of suit
void Card::toString()
{
    cout<<face1[face]<<" of "<<suit1[suit];
}
