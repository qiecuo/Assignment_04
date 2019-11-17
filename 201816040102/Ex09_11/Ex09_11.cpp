#include <iostream>
using namespace std;
#include "Rectangle.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

	Rectangle rec;
	double a, b;
	cout<<"please input length and wide:\n";
	cin >> a>> b;
	rec.setRectangle(a, b);
	cout <<"the perimeter is:";
	rec.PrintPerimeter();
	cout<< "the area is:";
	rec.PrintArea();
	
	return 0;
}
