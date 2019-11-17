//Ex09_11.cpp
#include <iostream>
using namespace std;

#include "Rectangle.h"

//function main
int main()
{
    Rectangle square(2.5,5.5);//initialize length and width
    cout<<"The rectangle perimeter is: "<<square.gainPerimeter()<<endl;
    cout<<"The rectangle area is:      "<<square.gainArea()<<endl;
    cout<<endl;

    square.setLength( 35.0 );
    cout<<endl;
    cout<<"The rectangle perimeter is: "<<square.gainPerimeter()<<endl;
    cout<<"The rectangle area is:      "<<square.gainArea()<<endl;
}
