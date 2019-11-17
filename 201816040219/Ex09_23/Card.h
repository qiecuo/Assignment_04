#include<iostream>
#include<string>
#ifndef CARD_H
#define CARD_H
using namespace std;

class Card
{
public:
    static const int facenumber = 13;//value
    static const int suitnumber = 4;//suit

    Card(int ,int );
    int getface();
    int getsuit();
    string toString();


private:
    int face;//面值
    int suit;//花色

    static const string facee[facenumber];
    static const string suitt[suitnumber];


};
 #endif


