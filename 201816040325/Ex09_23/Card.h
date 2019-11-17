#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED
#include <string>
using namespace std;
class Card
{
public:
    Card(int ,int );
    string toString();
    static int cardFace;
    static int cardSuit;
private:
    int face;
    int suit;
    static string strface[];
    static string strsuit[];
};

#endif // CARD_H_INCLUDED
