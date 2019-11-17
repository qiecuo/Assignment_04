//Header file for class point
#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();
    Point(double ,double);//declare data member
    void setx( double );//set abscissa
    void sety( double );//set ordinate
    double getx();//retrieve abscissa
    double gety();//retrieve ordinate
private:
    double x,y;//abscissa and ordinate for class point

};

#endif // POINT_H
