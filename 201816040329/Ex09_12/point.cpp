#include"point.h"

point::point(double cooX,double cooY)
{
    setX(cooX);
    setY(cooY);
}
void point::setX(double cooX)
{
    x=(cooX<=20.0&&cooX>=0.0)?cooX:0.0;

}
double point::getX()
{
    return x;
}
void point::setY(double cooY)
{
    y=(cooY<=20.0&&cooY>=0.0)?cooY:0.0;
}
double point::getY()
{
    return y;
}
