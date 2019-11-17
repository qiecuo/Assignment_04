#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"
#include <string>
#include <vector>

using namespace std;

int main() 
{
	DeckOfCards d;
	d.shuffle();
	for(int i=0;i<52;i++)
	{
		cout <<d.dealCard().toString()<<endl;
		if (d.moreCards()==0)
            break;
	}
	
	
}
