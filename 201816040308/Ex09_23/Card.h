#include <bits/stdc++.h>
using namespace std;
class Card
{
public:
   static string Suit[4];
   static string Face[13];
   int getface();
   int getsuit();
   Card(int ,int );
   string tostring();
private:
   int face;
   int suit;

};


