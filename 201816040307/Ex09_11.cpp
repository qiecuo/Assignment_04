

class Rectangle
{
private:
    double length;//define the length of the object's length
    double width;//define the width of the object's width
public:
    Rectangle(double = 1.0, double = 1.0);//the constructor to set the value of length and width as 1
    //define the set and get function for length and width
    void setLength(const double );
    void setWidth(const double );

    double  getLength()const;
    double  getWidth()const;

    //the function to calcu the perimeter and the area of the rectangle
    double  Perimeter();
    double  Area();

    //set function to verify that length and width is legal
    void setFuction(double , double );
};
