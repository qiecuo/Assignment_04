#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<string>
#include<array>
using namespace std;
class Card{
public:
    Card(int,int);
    static string mianzhi;
    static string huase;
    //static array<string,13> mianzhi={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    //static array<string,4> huase;
    string toString()const;
private:
    int face,suit;
};

#endif // CARD_H_INCLUDED
