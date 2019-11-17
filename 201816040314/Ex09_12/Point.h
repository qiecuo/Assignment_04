#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
public:
    Point(double,double,double,double,double,double,double,double);//default constructor of class Point
    void setPeremater(double,double,double,double,double,double,double,double);//to set the data of the object
    double pointLength();//to set the length of the point
    double pointWidth();//to set the width of the point
    void pointDisplay();//to display the point
private:
    int x1;
    int x2;
    int x3;
    int x4;
    int y1;
    int y2;
    int y3;
    int y4;
};


#endif // POINT_H_INCLUDED
