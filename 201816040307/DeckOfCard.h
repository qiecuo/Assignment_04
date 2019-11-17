#include<vector>
#include"Card.h"
using namespace std;

class DeckOfCards
{
private:
    vector<Card> deck;//An array of Cards named deck to store the Cards
    int currentCard;//An integer currentCard representing the next card to deal
public:
    DeckOfCards();
    void shuffle();//a shuffle function that shuffles the Cards in the deck
    Card dealCard();//a dealCard function that returns the next Card object from the deck
    bool moreCards();//a moreCards function that returns a bool value indicating whether there are more Cards to deal
};
