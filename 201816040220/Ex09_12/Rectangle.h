#ifndef _COMMON
#define _COMMON
#include "Point.h"

#include <string> // program uses C++ standard string class
using namespace std;


class Rectangle
{
public:
         Rectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4);

         void setBian(float,float,float,float,float,float,float,float);              //Judge side length
         float getBian();                                                            //get data

         void calculation(float,float,float,float);                                  //calculated data

         void square(float,float,float,float);                                        //Judge whether a square



private:
        float length;
        float width;
        float area;
        float perimeter;
        int flag;

};
#endif
