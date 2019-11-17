
using namespace std;

class Rectangle
{
    public:
        Rectangle(double,double);
        void setLength(double );
        double getLength();
        void setWidth(double);
        double getWidth();
        double circumference();
        double area();
    private:
        double length;
        double width;
};
