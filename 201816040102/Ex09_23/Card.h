#ifndef CARD_H_INCLUDED

#define CARD_H_INCLUDED

#include <string>

using namespace std;
class Card
{
public:
 	Card (int,int);
	void setCard(int,int);
	string toString();	
private:
	int face;
	int suit;
	static string color[4];
	static string invalid[13];
};

#endif
