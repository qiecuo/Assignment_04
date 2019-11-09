#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
#include <array>
using namespace std;
class Card
{

public:
    static array<string, 4> eSuits;  // static data member store suites
    static array<string, 13> eFaces; // static data member store faces
    Card(int, int);                  // (face,suit)
    Card();
    string toString(); // show this card with string
    int getFace() const;
    int getSuit() const;

private:
    /*data*/
    int face;
    int suit;
};
#endif