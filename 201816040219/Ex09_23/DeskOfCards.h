#include<iostream>
#include<vector>
#include"Card.h"

using namespace std;

class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();//shuffle function
   Card dealcard(int );////Returns the next card
    void viewcard(int );//view card function
    bool morecard();//Whether there are CARDS to deal with
private:
    vector<Card> deck;//vector类型的card类型的记录数据数组
    int currentCard;//near card


};


