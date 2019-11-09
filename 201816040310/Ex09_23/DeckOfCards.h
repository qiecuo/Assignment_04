#include "Card.h"
#include <vector>

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();   // shuffle the deck of cards
    Card dealCard();  // return a card from deck's top,and deck will lose it
    bool moreCards(); // check the deck whether have cards

private:
    vector<Card> deck; // vectory store cards
    int currentCard;   // number of cards in deck
};
