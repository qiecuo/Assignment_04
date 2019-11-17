#include <vector>
#include "Card.h"
using namespace std;
class DeckOfCards
{
public:
	DeckOfCards();    
 	void shuffle();
	Card dealCard();
	bool moreCards();
	Card getCard(int);
private:
	vector <Card> deck;
	int currentCard=0;
};
