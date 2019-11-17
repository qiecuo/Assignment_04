class Rectangle
{
public:
    //Declare functions
    Rectangle(double ,double) ;
    void setLength(double) ;
    double getLength();
    void setWeigth(double);
    double getWeigth();
    void CalculatePerimeter();
    void CalculateArea ();
    void Display();
private:// data member
    double Length, Weigth ,Perimeter , Area;
}; // end class Rectangle

