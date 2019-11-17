//browsing a website
#include<iostream>
#ifndef CARD_H
#define CARD_H
using namespace std;
class Card//define the class Card
{
    friend class DeckOfCards;//friend class function
public:
    Card(int=0,int=0);
    void toString();
private://data members
   int face;//面值
   int suit; //花色
  static string face1[13];
  static string suit1[4];
};
#endif // CARD_H
