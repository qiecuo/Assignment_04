#include<bits/stdc++.h>
#include"DeckOfCards.h"
#include"Card.h"
using namespace std;
int main()
{
    DeckofCard oneround;
    oneround.suffle();
    for(int i=0;oneround.moreCard()!=false;i++)//发牌
    {
        cout<<oneround.dealCard().tostring()<<endl;
    }
}
