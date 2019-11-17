#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include<iostream>
using namespace std;

class Card
{
private:
    int face;
    int suit;
    static string f[13];
    static string s[4];
    string fos;
public:
    Card(int ,int);

    string getFos();
    void setFace(int);
    void setSuit(int);
    int getFace();
    int getSuit();
    Card toString();
};

#endif // CARD_H_INCLUDED
