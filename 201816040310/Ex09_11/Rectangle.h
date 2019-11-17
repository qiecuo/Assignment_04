class Rectangle{
    public:
        Rectangle(double,double); // (length,width)
        void setLength(double);
        double getLength();
        void setWidth(double);
        double getWidth();
        double getPerimeter(); // calculate perimeter and return  
        double getArea(); // calculate area and return
    private:
        double length; // store length 
        double width; // store width
};
