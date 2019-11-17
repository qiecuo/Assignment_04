#include "Card.h"
#include <iostream>

using namespace std;            
string Card::invalid[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::color[4]={"Spade","Plum blossom","Heart","block"}; //黑桃，梅花，红桃，方块 

Card::Card(int f,int s)
{
	setCard(f,s);
}
void Card::setCard(int f,int s)
{
	face = f;
	suit = s;
}
string Card::toString()
{
	string x,y="  of  "   ;
	x=invalid[face] + y + color[suit];
	return x; 
} 
