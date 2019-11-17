#ifndef POINT_H
#define POINT_H
class Point
{
    public:
        Point(double,double);
        setx(double);
        sety(double);
        double getx();
        double gety();
    private:
        double x;
        double y;

};
#endif // POINT_H
