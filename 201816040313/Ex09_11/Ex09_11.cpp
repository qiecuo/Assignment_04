#include <iostream>
#include "Rectangle.h"
#include <iomanip>
using namespace std;

int main()
{
    Rectangle data;//Object of declaration Rectangle class
    double number1;//free input length and width
    double number2;
    cout<<" please input the length and width:" <<endl;
    cin>>number1;
    cin>>number2;
    data.setlength(number1);
    data.setwidth(number2);
    data.getlength();
    data.getwidth();
    double r1, r2;
    cout << "perimeter is:" << data.calperimeter(r1) <<setw(10)<<    "area is:" <<   data.calarea(r2) <<endl;//Calculate the length and width
    return 0;
}
