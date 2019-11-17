#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(int f,int s)
{
    setface(f);
    setsuit(s);
}
const  std::string Card::facevalue[faces]={"0","A","2","3","4","5","6","7","8","9","10","J","Q","K"};//assign values to two arrays
const  std::string Card::suitcolors[suits]={"heart","diamond","club","spade"};
void Card::setface(int fac)
{
    if(fac>=0&&fac<=13)
    {
        face=fac+1;
    }

}
void Card::setsuit(int sui)
{
    if(sui>=0&&sui<4)
    {
        suit=sui;
    }

}
string Card::toString()
{
    cout<<facevalue[face]+" of "+suitcolors[suit]<<endl;
    //cout<<face<<"+"<<suit<<endl;

}
int  Card::getface()
{
    return face;
}
int  Card::getsuit()
{
    return suit;
}
