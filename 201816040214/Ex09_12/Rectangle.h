#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

double countperimeter(double , double);
double countarea(double , double);
void equal_square(double , double);
//Rectangle.h
class Rectangle
{
public:
    Rectangle(double, double);//declare constructor function
    void setX(double x);
    double getX() const;
    void setY(double Y);
    double getY() const;
    double getlength(const Rectangle &horn2);
    double getwidth(const Rectangle &horn3);//define set and get functions 
private:
    double x_coordinate;
    double y_coordinate;//statement x, y coordiante
};

#endif // RECTANGLE_H_INCLUDED

