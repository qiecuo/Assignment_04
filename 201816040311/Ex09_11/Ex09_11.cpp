#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    cout <<"(10.0,15.0)"<<endl;
    Rectangle temp(10.0, 15.0);//create an object named temp and Attribute value is (10.0,15.0);
    cout << "This Rectangle's length is:"<<temp.getLength()<<endl;//get Rectangle's length
    cout << "This Rectangle's width is:"<<temp.getWidth()<<endl;//get Rectangle's width
    cout << endl;
    cout << "This Rectangle's perimeter is:"<<temp.perimeter()<<endl;//get Rectangle's perimeter
    cout << "This Rectangle's area is:"<<temp.area()<<endl;//get Rectangle's area
    cout << endl;
    cout <<"(33.0,25.0)"<<endl;
    Rectangle temp2(33.0, 25.0);//create an object named temp2 and Attribute value is (33.0,25.0);
    cout << "This Rectangle's length is:"<<temp2.getLength()<<endl;//get Rectangle's length
    cout << "This Rectangle's width is:"<<temp2.getWidth()<<endl;//get Rectangle's width
    cout << endl;
    cout << "This Rectangle's perimeter is:"<<temp2.perimeter()<<endl;//get Rectangle's perimeter
    cout << "This Rectangle's area is:"<<temp2.area()<<endl;//get Rectangle's area

    return 0;
}
