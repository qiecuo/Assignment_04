// Assignment_04: Rectangle.h
// Definition of Rectangle class.

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(double = 1,double = 1);// constructor initializes

    //function to set
    void setLength(double);
    void setWidth(double);

    //function to get
    double getLength();
    double getWidth();

    double Perimeter();// return the Rectangle's perimeter
    double Area();// return the Rectangle's area

private:
    double Length;// data member that length
    double Width;// data member that width

}; // end class Rectangle

#endif // RECTANGLE_H
