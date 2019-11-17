class Rectangle{
    private:
        double length;
        double width;
    public:
        Rectangle(double=1,double=1);
        void setLength(double);
        double getLength();
        void setWidth(double);
        double getWidth();
        double area();
        double perimeter();
};
