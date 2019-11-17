// Assignment_04: DeckOfCards.h
// Definition of DeckOfCards class.
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"
#include <vector>

class DeckOfCards
{
public:
    DeckOfCards();

    void shuffle();

    void dealFiveCard();
    bool moreCards();

    bool isOneDouble();
    bool isTwoDouble();
    bool isThreePlate();
    bool isFourPlate();
    bool isFlush();
    bool isSuitable();
private:
    std::vector < Card > deck;
    int currentCard;
    static int total;
};

#endif // DECKOFCARDS_H
