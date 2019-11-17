#include <iostream>

using namespace std;

#include "Rectangle.h"

int main()
{
    Rectangle rectangle1(2,3); // 创建一个对象

    // 输出对象内容
    cout << "Length=" << rectangle1.getLength() << " " << "Width=" << rectangle1.getWidth() << endl;
    cout << "Perimeter=" << rectangle1.calculatePerimeter() << " "
     << "Area=" << rectangle1.calculateArea();

    return 0;
}
