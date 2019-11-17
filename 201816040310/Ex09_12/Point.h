class Point
{
public:
    Point();  
    Point(double, double); // use (x,y)to construct a Point 
    double getX() const; 
    double getY() const;
    void setX(double); 
    void setY(double);

private:
    double x, y; // x,y are the posation of the point
};
