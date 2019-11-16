//头文件
using namespace std;

class Rectangle
{
public:
    Rectangle();//构造函数
    Rectangle(double,double);
    void setlength(double);//读取长方形的长
    double getlength();//返回长方形的长
    void setwidth(double);//读取长方形的宽
    double getwidth(); //返回长方形的宽
    double perimeter();//计算长方形的周长
    double area();//计算长方形的面积
private:
    double width,length;//创建长和宽两个变量
};
