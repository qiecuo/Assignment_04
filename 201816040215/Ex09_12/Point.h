 #include <string>
using namespace std;

 //Point class definition
 class Point
 {
public:
    Point( double , double , double , double , double , double , double , double );
    //Declare a contructor function for the coordinate of Rectangle's angle
    //set function
    void setPointX1( double );
    void setPointX2( double );
    void setPointX3( double );
    void setPointX4( double );
    void setPointY1( double );
    void setPointY2( double );
    void setPointY3( double );
    void setPointY4( double );
    //get function
    double getPointX1();
    double getPointX2();
    double getPointX3();
    double getPointX4();
    double getPointY1();
    double getPointY2();
    double getPointY3();
    double getPointY4();
    double square();//detect the Rectangle weather a aquare or not
private:
     double pointX1;
     double pointX2;
     double pointX3;
     double pointX4;
     double pointY1;
     double pointY2;
     double pointY3;
     double pointY4;//Declare the member
 };
