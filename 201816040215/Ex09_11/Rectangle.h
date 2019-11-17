#include <string>
using namespace std;

 //Rectangle class definition
class Rectangle
{
public:
    Rectangle ( double , double );
    void setRectangleLength( double );//Declare a set method for the Rectangle's length
    double getRectangleLength();//Declare a get method for the Rectangle's length
    void setRectangleWidth( double );//Declare a set method for the Rectangle's width
    double getRectangleWidth();//Declare a get method for the Rectangle's width
    double getRectanglePerimeter();//Declare a member function for the Rectangle's perimeter
    double getRectangleArea();//Declare a member function for the Rectangle's area
private:
    double rectangleLength;//Declare a double data for the Rectangle's length
    double rectangleWidth;//Declare a double data for the Rectangle's width
    double rectanglePerimeter;//Declare a double data for the Rectangle's perimeter
    double rectangleArea;//Declare a double data for the Rectangle's area
};


