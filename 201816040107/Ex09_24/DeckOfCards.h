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
        void print1();//输出函数；
        bool hasOnePair();//判断是否有一个对子；
        bool hasTwoPair();//判断是否有两个对子；
        bool hasThreeSameFace();//判断是否有三张同号牌；
        bool hasFourSameFace();//判断是否有四张同号牌；
        bool hasFiveSameSuit();//判断是否有同化；
        bool hasTongshun();//判断是否有同顺；
	private:
		int currentCard;
		int k=0;
};
