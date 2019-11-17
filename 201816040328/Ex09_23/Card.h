#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED



using namespace std;

class Card
{
public:
	Card(int f,int s);	//constructor
	Card(const Card &c);    //copy constructor
	~Card();			//destructor
	string toString() const;	//display face of suit
	void setFace(int f);		//set face of card
	void setSuit(int s);		//set suit of card
	int getFace() const;		//get face of card
	int getSuit() const;		//get suit of card
private:
	int face;
	int suit;
	    
};

#endif // CARD_H_INCLUDED
