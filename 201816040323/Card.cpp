
#include <iomanip>
#include "Card.h" //Call the card.h function

using namespace std;
array <string,13> Card::Face={"A","2","3","4","5","6","7","8","9","10","J","Q","K"}; //The number of the card
array <string,4> Card::Suit={"hearts","diamonds","clubs","spades"}; //The design and color of card

Card::Card(int f,int s)
{
    setface(f);
    setsuit(s);
}
string Card::toString() const
{
    return Face[face] + " of " + Suit[suit]; //Output the format of "face+suit"
}
void Card::setface(int f)
{
    face=f;
}
void Card::setsuit(int s)
{
    suit=s;
}
