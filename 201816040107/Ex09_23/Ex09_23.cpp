#include <iostream>
#include "DeckOfCards.h"
#include "Card.h"
#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DeckOfCards card1;//对象的定义；
	card1.shuffle();
	while(card1.moreCards()==true)
	{
		card1.dealCard();
	}
	return 0;
}
