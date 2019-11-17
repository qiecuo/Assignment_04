#include <iostream>
#include <string>
using namespace std;
#include "Card.h"
#include "DeckOfCards.h"

// function main begins program execution
int main()
{
    DeckOfCards m;
    m.shuffle();
    cout <<"four player" <<endl;//玩家
    cout << endl;
    cout << endl;
    cout << endl;
    m.dealCard(52);//发牌
} // end main


//部分参考他人。
