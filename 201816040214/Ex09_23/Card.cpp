//
// Created by wangl on 2019/11/10.
//
//Card.cpp
#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

string Card::value[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};//value of cards
string Card::symbol[4] = {"Club", "Diamond", "Heart", "Spade"};//♣ ♦ ♥ ♠ 

Card::Card(int f, int s)
        :face(f), suit(s)
{
}
//initialize face and suit
Card::Card()
{}
//reload
string Card::toString()
{
    string conj = "of";
    return value[face] + " " + conj + " " + symbol[suit];
}
//output face and suit of joker
