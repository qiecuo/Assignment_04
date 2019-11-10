//
// Created by wangl on 2019/11/10.
//
//Card.h
#ifndef EX09_23_CARD_H
#define EX09_23_CARD_H

#include <string>
using namespace std;

class Card
{
public:
    Card(int ,int);
    string toString();
    Card();
private:
    //define face and suit and two array
    static string value[13];
    static string symbol[4];
    int face;
    int suit;

};

#endif //EX09_23_CARD_H
