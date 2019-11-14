#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Card
{
public:
    Card( int, int ); // Card constructor
    void setFace( int ); // function to set the face
    int getFace ( );  // function to retrieve the face
    void setSuit( int ); // function to set the suit
    int getSuit ( );  // function to retrieve the suit
    string toString( ); //store the information of the card into the string

    static string fa[13];
    static string su[4];
private:
    int face;
    int suit;
}; // end class Card

#endif // CARD_H_INCLUDED
