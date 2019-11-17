#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
class Card
{


public:
    static const int faces=14;
    static const int suits=4;
    Card(int,int);//constructor function
    std::string toString();//output card
    void setface(int);
    void setsuit(int);
    int  getface();
    int  getsuit();

private:
    int face;
    int suit;
    static const std::string facevalue[faces];//static array of stored values
    static const std::string suitcolors[suits];//static array to store decors

};


#endif // CARD_H_INCLUDED
