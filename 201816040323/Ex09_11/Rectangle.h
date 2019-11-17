#include <string>
using namespace std;

class Rectangle
{
public:
    Rectangle(double = 1.0,double = 1.0);
    void setlength(double l);
    double getlength()const;
    void setwidth(double w);
    double getwidth()const;
    double perimeter();
    double area();
private:
    double length;
    double width;
};
