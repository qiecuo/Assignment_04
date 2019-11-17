#include "Card.h"
using namespace std;

string Card::color[4]={"spade","heart","diamond","club"};
string Card::number[13]={"1","2","3","4","5","6","7","8","9","10","11","12","13"};

Card::Card(int a,int b)
{
	face=a;
	suit=b;
}
string Card::toString()
{
	string a="";
	a=color[face]+" "+"of"+" "+number[suit];
	return a;
}
