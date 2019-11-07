#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include <array>
using namespace std;
class Card
{

public:
    static array<string, 4> eSuits;
    static array<string, 13> eFaces;
    Card(int, int);
    Card();
    string toString();
    int getFace() const;
    int getSuit() const;

private:
    int face;
    int suit;
};
#endif