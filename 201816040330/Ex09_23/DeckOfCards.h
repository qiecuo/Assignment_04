#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED
#include <vector>

using namespace std;

class DeckOfCards
{
public:
    explicit DeckOfCards();
    void shuffle();
    void dealCard();
    bool moreCards();
private:
    int currentCard;
    vector <Card> deck;

};

#endif // DECKOFCARDS_H_INCLUDED
