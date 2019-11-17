#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED



#endif // POINT_H_INCLUDED
#include<iostream>
using namespace std;

class Point
{
public:
    Point(int,int);
    void setleftPart(int);
    void setrightPart(int);
    int getleftPart();
    int getrightPart();
    Point Width(const Point &a);
    Point Length(const Point &a);
private:
    int leftPart;
    int rightPart;
    int length;
    int width;
};
