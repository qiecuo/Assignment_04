class Rectangle
{
public:
    Rectangle( double l=1.0,double w=1.0 ); // constructor initializes balance
    void setwidth(double);
    void setlength(double);
    double getlength();
    double getwidth();
    double getsquare();
    double getcircumference();
private:
  double width;
  double length;
  bool  verifydate(double l,double w)
  {
      if(l>0&&l<20)
      {
          if(w>0&&w<20)
            return true;
      }
      else
        return false;
  }
};
