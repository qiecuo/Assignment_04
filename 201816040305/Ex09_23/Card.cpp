#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
using namespace std;
//include the head File Rectangle.h
#include "Card.h"
//Constructor
string Card::allFace[]={"K","A","2","3","4","5","6","7","8","9","10","J","Q","Surname","King"};
string Card::allSuit[]={"diamond","club","spade","heart" ,"joker"};

Card::Card(int id)
{
   setFace(id);
   setSuit(id);
}

void Card::setFace(int id)
{
    fface = allFace[id%4];

}

string Card::getFace()
{
    return fface ;
}


void Card::setSuit(int id)
{
    ssuit = allSuit[id/4];
    cout<<id/4 ;
}

string Card::getSuit()
{
    return ssuit;
}

void Card::toString()
{
cout << getSuit() <<" +  "<<getFace()<<endl ;
}

/*const Card Card::operator+( const Card &right )
{
    string temp ;
   temp.length = length+right.length ;
   //Allocate memory
   temp.sPtr = new char[length+1];
   assert( sPtr != 0 ); // terminate if memory not allocated
   strcpy(temp.sPtr, sPtr);
   strcat(temp.sPtr , right.sPtr);
    return temp;
} // end function operator+*/

