#ifndef CARDOFDECK_H_INCLUDED
#define CARDOFDECK_H_INCLUDED
#include<vector>
class CardOfDeck{
public:
    CardOfDeck(vector<Card>);
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    vector<Card> deck;
    int i;
        };

#endif // CARDOFDECK_H_INCLUDED
