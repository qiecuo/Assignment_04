/#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
using namespace std;
#include "Point.h" //包含文件Point.h

class Rectangle
{
public:
    Rectangle(Point,Point,Point,Point);
    void setPoint(Point,Point,Point,Point);
    double getLength()const;
    double getWidth()const;
    double getperimeter()const;
    double getarea()const;
    bool square() const;
private:
    Point tLeft;
    Point lLeft;
    Point tRight;
    Point lRight;
};
#endif
