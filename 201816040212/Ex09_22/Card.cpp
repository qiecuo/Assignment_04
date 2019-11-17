#include "Card.h"
#include <string>
#include<iostream>
using namespace std;

Card::Card(int x,int y)
:suit(x),face(y){
}
string Card::toString()const{
    return huase[face]+mianzhi[suit];
}
string Card::huase="fmhx";
string Card::mianzhi="A234567890JQK";

//array<string,4> Card::mianzhi={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
