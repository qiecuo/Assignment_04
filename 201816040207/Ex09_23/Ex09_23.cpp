#include <iostream>
#include"DeckOfCards.h"
#include"card.h"

using namespace std;

int main()
{
    DeckOfCards card1;
    card1.shuffle();
    card1.beforecard(10);
    cout<<endl;
    cout<<"The next card is ";
    card1.dealcard(10);
    cout<<endl<<endl;
    card1.beforecard(5);//打印出前5张牌
    card1.judge(5);//判断前5张牌

    return 0;
}
