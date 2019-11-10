#include <string>
#include <vector>
#include "Card.h"
using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();       //洗牌
    Card dealCard();       //输出牌

private:
    vector<Card> deck;       //储存Card
    int currentCard;

}; 
