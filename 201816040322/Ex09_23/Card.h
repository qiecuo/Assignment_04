// Assignment_04: Card.h
// Definition of Card class.
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <array>

class Card
{
public:
    Card( int = 0,int = 0); //constructor initializes

    std::string toString() const;// input face of suit

    static int facetotal;// total 13 face
    static int suittotal;// total 4 suit
private:
    // data member
    int face;
    int suit;
    static std::array <std::string,13> Face;
    static std::array <std::string,4> Suit;
};

#endif // CARD_H
