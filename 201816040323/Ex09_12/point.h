#ifndef POINT_H
#define POINT_H

#include <string>
using namespace std;

class Point
{
public:
    Point(double=0,double=0);  //Default constructor with default arguments
    double getx() const;
    double gety() const;
    void setx(double a);
    void sety(double b);
    bool m() const; //Judging function
private:
    double x;
    double y;
};
#endif
