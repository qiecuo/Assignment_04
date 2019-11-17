#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

#include<iostream>

#include<vector>
#include"Card.h"
using namespace std;

class DeckOfCards
{
public:
	DeckOfCards();
	void shuffle();
	Card dealCard1();
	Card dealCard2();
	bool moreCards();

private:
	vector<Card>deck;//存储的Card
	size_t currentCard;
};

#endif // DECKOFCARDS_H_INCLUDED
