#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED


class Rectangle
{
  public:
      Rectangle(double=1.0,double=1.0);//Constructor function
      double calperimeter(double);//calculate  perimeter
      double calarea(double);//calculate area
      void setlength(double);//set length
      void setwidth(double);//set length
      double getlength();//get length
      double getwidth();//get width
  private:
    double length;
    double width;
};


#endif // RECTANGLE_H_INCLUDED
