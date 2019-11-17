#ifndef COORDINATE_H
#define COORDINATE_H
class  Coordinate
{
public:
    Coordinate(double,double);
    Coordinate();
    void setx(double);
    void sety(double);
    double getx();
    double gety();
private:
    double x;
    double y;
};
#endif
