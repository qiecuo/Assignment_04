#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <string> // program uses C++ standard string class
using namespace std;

// Point class definition
class Point
{
public:
   //Point( int l=1,int w=1);
   void setCoodinate( ); // function to set the coo d i n ate
   void getCoodinate( );//output coo d i n ate
   double distance(double,double,double,double);//the distance of two coo d i n ate

   double duiJiaoXian(int);
   bool judgeEqual(int);
   bool judgeRectangle();
private:
    double a[4][2];
    double b[3];
};//end class Point

#endif // POINT_H_INCLUDED
