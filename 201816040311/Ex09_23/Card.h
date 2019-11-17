#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <array>

using namespace std;

static array<string,14>faceID={"0","1","2","3","4","5","6","7","8","9","10","J","Q","K"};
static array<string,5>SUIT={"0","heart","spade","club","diamond"};

class Card
{
private:
    int face;
    int suit;
public:
    Card();
    Card(int, int);
    void setface(int);
    void setsuit(int);
    string toString();
};

#endif // CARD_H_INCLUDED

