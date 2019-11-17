#ifndef CARD
#define CARD

#include <string>

using namespace std;
class Card
{
	friend class DeckOfCard;//友元的声明；
	public:
		Card(int,int);
		string toString();
	private:
		int face;
		int suit;

		static string color[4];
		static string number[13];
};

#endif
