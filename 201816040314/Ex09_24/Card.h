#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>
#include<sstream>
using namespace std;

class Card
{

public:
    string static faceArray[13];//a string static array to store the face of the poker
    string static suitArray[4];//a string static array to store the suit of the poker
    Card(int,int);//constructor with two parameter
    string toString();//a function to return the string of the value
    int getFace();//a function to return the face
    int getSuit();//a function to return the suit
private:
    int face;//data number face
    int suit;//data number suit
    string toFace()//a tool function to return the face with string form
    {
        return faceArray[face-1];
    }
    std::string toSuit()//a tool function to return the suit with string form
    {
        return suitArray[suit-1];
    }


};

#endif // CARD_H_INCLUDED


#endif // CARD_H_INCLUDED
