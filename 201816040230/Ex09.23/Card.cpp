#include<iostream>
#include"Card.h"
using namespace std;
string Card::face[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::suit[4]={"plum","diamond","heart","spade"};
Card::Card(int f,int s)
{
    fa=f;
    su=s;
}
int Card::getsuit()
{
    return su;
}
int Card::getface()
{
    return fa;
}
string Card::toString()
{
    return face[fa]+" "+"of"+" "+suit[su];
}
//参考王嘉豪的
