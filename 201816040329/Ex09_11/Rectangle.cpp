#include"Rectangle.h"


Rectangle::Rectangle(double L,double W)
{
    setLength(L);
    setWidth(W);

}
void Rectangle::setLength(double L)
{
    length=L<20.0&&L>0.0?L:1.0;
}
double Rectangle::getLength()
{
    return length;
}
void Rectangle::setWidth(double W)
{
    width=W<20.0&&W>0.0?W:1.0;
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::S()
{
    return length*width;
}
double Rectangle::C()
{
    return 2*length+2*width;
}
