#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>
#include<sstream>
using namespace std;

class Card
{

public:
    string static faceArray[52];//a string static array to store the face of poker
    string static suitArray[52];//a string static array to store the suit of poker
    Card(int,int);//constructor with two parameter
    string toString();//a function to return the value with a string form
    int getFace();//to return the face of the poker
    int getSuit();//to return the suit of the poker
private:
    int face;//data number face
    int suit;//data number suit
    string toFace()//a tool function to return the face with a string form
    {
        if(face > 10||face==1)
        {
            if(face==11)
                return "J";
            else if(face==12)
                return "Q";
            else if(face==1)
                return "A";
            else
                return "K";
        }
        else
        {

            std::ostringstream ost;
            ost << face;
            string temp(ost.str());

            return temp;
        }

    }
    std::string toSuit() //a tool function to return the suit with a string form
    {
        if(suit==1)
        {
            return "黑桃";
        }
        if(suit==2)
        {
            return "红桃";
        }
        if(suit==3)
        {
            return "梅花";
        }
        if(suit==4)
        {
            return "方块";
        }
    }


};


#endif // CARD_H_INCLUDED
