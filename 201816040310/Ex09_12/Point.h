class Point
{
public:
    Point();
    Point(double, double);
    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);

private:
    double x, y;
};
