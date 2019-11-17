#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double length, width, middle=0;
    //initialize four coordinates
    Rectangle horn1(1, 1);
    Rectangle horn2(3, 1);
    Rectangle horn3(1, 4);
    Rectangle horn4(3, 4);
    length = horn1.getlength(horn2);
    width = horn1.getwidth(horn3);//calculate two sides

    if(horn1.getlength(horn2) > horn1.getwidth(horn3))
    {
        length = horn1.getlength(horn2);
        width = horn1.getwidth(horn3);
    }else{
        width = horn1.getlength(horn2);
        length = horn1.getwidth(horn3);
    }//confirm length and width
    cout << "Already add 4 points.They are"<< "(" << horn1.getX() << "," << horn1.getY() << "), " 
	<< "(" << horn2.getX() << "," << horn2.getY() << "), "
	<< "(" << horn3.getX() << "," << horn3.getY() << "), "
	<< "(" << horn4.getX() << "," << horn4.getY() << ") "<< endl;//output 4 points
    cout << "output the length and width of rectangle :" << length << " " << width << endl;
    cout << "\noutput the perimeter of rectangle :" << countperimeter(length, width) << endl;
    cout << "\noutput the area of rectangle :" << countarea(length, width) << endl;
    cout << "\nIs this rectangle a square???" << endl;
    equal_square(length, width);
}

