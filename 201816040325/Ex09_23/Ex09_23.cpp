#include <iostream>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;

int main()
{
    DeckOfCards deck;
    int n;

    cout<<"洗牌前："<<endl;
    deck.dealCard(52);
    cout<<"洗牌后："<<endl;
    deck.shuffle();
    deck.dealCard(52);

    cout<<"请输入要发牌的数量：";
    cin>>n;
    cout<<"发牌结果为："<<endl;
    deck.dealCard(n);
    return 0;
}
