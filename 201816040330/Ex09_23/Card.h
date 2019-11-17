#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <array>

using namespace std;


class Card
{
public:
    explicit Card(int,int);
    Card toString();

private:
    int face=13;
    int suit=4;
    static array<string,13>face1;
    static array<string,4>siut;
};

#endif // CARD_H_INCLUDED
