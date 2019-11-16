#include<iostream>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;

int main()
{
    //Card card1(12,1);
   // card1.tostring();
    DeckOfCards di;//创建一个对象
    di.shuffle();//对对象di进行洗牌
    //di.output();

    cout<<"\n\n\n";
    int i;
    for(i=1;i<=5;i++)//输出五张牌
    {
        di.dealcard();
    }
}
