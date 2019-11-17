#include<array>
#include<string.h>

using namespace std;

class Card
{
private:
    int face;//the face of the card
    int suit;//the suit of the card
public:
    Card(int, int);//constructor
    string toString();//to return face of suit
};
