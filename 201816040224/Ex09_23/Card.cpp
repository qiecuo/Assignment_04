#include <bits/stdc++.h>
using namespace std;

#include "Card.h"

string Card::Face[13]={"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
string Card::Suit[4]={ "plum", "box", "hearts", "spades"};

Card::Card(int x,int y)
{
    face=x;
    suit=y;
}
