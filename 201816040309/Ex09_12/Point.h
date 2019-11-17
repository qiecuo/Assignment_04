#include <array>
class Point
{
public:
    Point( double ,double,double,double,double,double,double,double ); // constructor initializes balance

    array<double,2> setRectangle();
    bool judgepoint(double,double,double,double,double,double,double,double);
    bool judgeRectangle();
    double distant(double,double,double,double);
    bool judgesquare(double,double);
private:
    double x1,y1,x2,y2,x3,y3,x4,y4;
};
