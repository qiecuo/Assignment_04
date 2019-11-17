#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED


class Point
{
public:
    Point(double ,double);//constructor function
    //set functions
    void setx(double);
    void sety(double);
    //get functions
    double getx();
    double gety();

private:
    double x;
    double y;
};
#endif // POINT_H_INCLUDED
