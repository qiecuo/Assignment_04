#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Point.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	cout<<"Please enter coordinate values of four points:\n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	
	Point po(x1,y1,x2,y2,x3,y3,x4,y4);
	double c=po.Length(x1,x2);
	double k=po.Width(y1,y4);
	po.Square();
	
	Rectangle rec(c,k);
	rec.setRectangle(c,k);
	cout <<"the perimeter is:";
	rec.PrintPerimeter();
	cout<< "the area is:";
	rec.PrintArea();
	
	return 0;
}
