#ifndef CARD
#define CARD

#include <string>
using namespace std;
class Card
{
private:
    int face, suit;

public:
    static string f[13];
    static string s[4];
    Card(int a=0,int b=0);
    string toString();
};
#endif
