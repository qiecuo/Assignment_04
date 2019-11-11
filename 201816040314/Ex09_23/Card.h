#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <iostream>
#include<sstream>
using namespace std;

class Card
{

public:
    string static faceArray[52];//a string static array to store the face of the poker
    string static suitArray[52];//a string static array to store the suit of the poker
    Card(int,int);//constructor with two parameter
    string toString();//a function to return the string of the value
    int getFace();//a function to return the face
    int getSuit();//a function to return the suit
private:
    int face;//data number face
    int suit;//data number suit
    string toFace()//a tool function to return the face with string form
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
    std::string toSuit()//a tool function to return the suit with string form
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
