#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std

class Card
{
public:
    Card ( string , string )
    void setCrad( string, string );
    void setFace(string);
    string getFace();
    void setSuit( string );
    string getSuit();
    Card toString( string );
private:
    int face;
    int suit;
};


#endif // CARD_H_INCLUDED
