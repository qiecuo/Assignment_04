#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point
{
  public:
    explicit Point(double = 0, double = 0);//constructor function
    void setaxis(double,double);
    double getx();
    double gety();
    void output();
  private:
    double xpointdata;
    double ypointdata;
};


#endif // POINT_H_INCLUDED
