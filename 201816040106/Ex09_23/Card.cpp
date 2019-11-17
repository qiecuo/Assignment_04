#include "Card.h"
#include <cstring>
#include<iostream>
using namespace std;
string Card::face1[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string Card::suit1[4] = {"Spades", "Hearts", "Diamonds", "Clubs"};
Card::Card(int f, int s)
{
    face = f;
    suit = s;
}
string Card::toString()
{
    return face1[face]+" of "+suit1[suit];
}
