#include"RectanglePlus.h"
class Point: public RectanglePlus
{
private:
    //define the Cartesian coordinates of the four corners of the rectangle
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
public:
    Point(double,double,double,double,double,double,double,double);
    void setFunction(double,double,double,double,double,double,double,double);
};

