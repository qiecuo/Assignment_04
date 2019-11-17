// Assignment_04: Card.h
// Definition of Card class.
#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <array>

class Card
{
    friend class DeckOfCards;
public:
    Card( int = 0,int = 0);

    std::string toString() const;

    static int facetotal;
    static int suittotal;
private:
    int face;
    int suit;
    static std::array <std::string,13> Face;
    static std::array <std::string,4> Suit;
};

#endif // CARD_H
