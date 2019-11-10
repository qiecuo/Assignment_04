//Rectangle.h
class Rectangle
{
public:
    Rectangle();//constructor
    double perimeter();//member function
    double area();//member function
    void setLength(double);
    double getLength() const;
    void setWidth(double);
    double getWidth() const;
private:
    double length;
    double width;
};
