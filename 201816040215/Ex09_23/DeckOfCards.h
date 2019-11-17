#ifndef DECKOFCARDS_H_INCLUDED
#define DECKOFCARDS_H_INCLUDED

using namespace std;

class DeckOfCard
{
public:
    DeckOfCard ();
    void shuffle();
    void dealCard();
    bool moreCards();
private:
    int currentCard;
};

#endif // DECKOFCARDS_H_INCLUDED
