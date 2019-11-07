#include "Card.h"
#include <vector>

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();

private:
    vector<Card> deck;
    int currentCard;
};
