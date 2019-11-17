#include"DeckOfCards.h"
#include"Card.h"
using namespace std;
int main()
{
    printf("*********9.23************\n");
    DeckOfCards deckofcards;
    deckofcards.shuffle();
    deckofcards.dealCard();
    deckofcards.print();
    printf("*********9.24************\n");
    DeckOfCards deckofcards1;
    deckofcards1.shuffle1();
    deckofcards1.dealCard();
    deckofcards1.print1();

    return 0;
}
