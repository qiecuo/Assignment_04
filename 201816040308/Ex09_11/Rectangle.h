#ifndef INTEGER_SET_H
#define INTEGER_SET_H

class Rectangle
{
public:
   Rectangle();
   double calcperimeter();
   double calcarea();
   void setlength(double );
   double getlength();
   void setwidth(double );
   double getwidth();
   bool judge();
private:
   double length;
   double width;
};

#endif

