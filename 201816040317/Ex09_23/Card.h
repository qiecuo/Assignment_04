#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<array>

using namespace std;

class Card
{
public:
    Card(int,int);
    string toString();
private:
    int face;
    int suit;
    static array<string,14>Face;
    static array<string,5>Suit;
};

#endif // CARD_H_INCLUDED
