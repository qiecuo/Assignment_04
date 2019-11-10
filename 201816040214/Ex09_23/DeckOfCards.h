//
// Created by wangl on 2019/11/10.
//

#ifndef EX09_23_DECKOFCARDS_H
#define EX09_23_DECKOFCARDS_H

#include <vector>
#include "Card.h"
#include "DeckOfCards.h"

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();//shuffle
    Card dealCard();
    bool moreCards();//judge if cards over the limit
private:
    vector< Card > deck;//vector
    int currentCard = 0;
};
#endif //EX09_23_DECKOFCARDS_H
