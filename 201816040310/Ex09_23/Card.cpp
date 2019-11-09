#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

array<string, 4> Card::eSuits = {"spade", "hearts", "club", "diamond"}; // four suits
array<string, 13> Card::eFaces = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}; // 13 kinds of face

string Card::toString() // link face and suit to a string
{
	return (eFaces[face] + " of " + eSuits[suit]);
}

Card::Card(int f, int s) : face(f), suit(s) 
{
}

Card::Card() {} 

int Card::getFace() const
{
	return face;
}

int Card::getSuit() const
{
	return suit;
}