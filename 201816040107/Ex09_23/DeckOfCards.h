#include <vector>
#include<algorithm>
#include "Card.h"
using namespace std;
class DeckOfCards
{
	public:

		DeckOfCards();//构造函数的声明；
		vector<Card> deck;
		void shuffle();
		void dealCard();
		bool moreCards();
	private:
		int currentCard;
		int k=1;
};
