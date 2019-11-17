#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std;
class Card
{
public:
    Card( int , int );//constructor function
    string toString();//function to return card
    static string Face[13];//static string[] to store face
    static string Suit[4];//static strings[] to store suit
private:
    int face;
    int suit;
};


#endif // CARD_H_INCLUDED
