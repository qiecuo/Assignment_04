#include<bits/stdc++.h>
#include"Card.h"
using namespace std;
string Card::cardsuit[]={"Ace","two","three","four","five","six","seven","eight","nine","ten","jack","queen","king"};
string Card::cardfaces[]={"spade","heart","club","dianmond"};
Card::Card(int x,int y)
{
    setsuit(y);
    setfaces(x);
}
void Card::setsuit(int y)
{
   suit=(y>=0&&y<=12)?y:0;
}
void Card::setfaces(int x)
{
    faces=(x>=0&&x<=3)?x:0;
}
string Card::getfaces()
{
    return cardfaces[faces];
}
string Card::getsuit()
{
    return cardsuit[suit];
}
string Card::tostring()
{
    return string(getfaces()+" of "+getsuit());
}
