#include <iostream>
#include"DeskOfCards.h"
#include"card.h"

using namespace std;

int main()
{
    DeckOfCards round;
    round.shuffle();
    round.viewcard(52);
    cout<<endl;
    if(!round.morecard()) //judge
        cout<<"已经没有牌需要处理了......"<<endl;
    else
        cout<<"还有牌需要处理....."<<endl;

    cout<<endl<<endl;

    return 0;
}
