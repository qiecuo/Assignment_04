#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
#include <array>
using namespace std;

class Card
{
public:
    Card(int=0,int=0); //Default constructor with default arguments
    string toString() const;
    void setface(int f);
    void setsuit(int s);
private:
    int face;
    int suit;
    static std::array <std::string,13> Face; //Array to store the size of a card
    static std::array <std::string,4> Suit; //Array that stores the suits
};

#endif
