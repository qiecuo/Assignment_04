#ifndef CARD_H
#define CARD_H
#include<iostream>
#include<string>
using namespace std;
class Card
{
public:
    Card(int,int);
    static string face[13];
    static string suit[4];
    string toString();
    int getsuit();
    int getface();
private:
     int su;
     int fa;
};
#endif // CARD_H
//参考王嘉豪的
