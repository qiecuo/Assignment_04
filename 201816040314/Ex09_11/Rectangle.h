#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double=1,double=1);//default constructor of the rectangle
    void setLength(double);//to set the length of the rectangle
    void setWidth(double);//to set the width of the rectangle
    double getLength()const;//to get the length of the rectangle
    double getWidth()const;//to get the width of the rectangle
    void perimeter();//to calculate the perimeter of the rectangle
    void area();//to calculate the area of the rectangle
private:
   double length;//data number length
   double width;//data number width

};


#endif // RECTANGLE_H_INCLUDED
