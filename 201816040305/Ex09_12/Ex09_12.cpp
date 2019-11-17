#include <iostream>
#include <math.h>
using namespace std;
#include "Rectangle.h"
//Declaration function
double setLength(double , double , double , double );
double setWeigth(double , double , double , double);
int judge(double , double );
int main()
{
    double a, b , c, d, e ,f ,g ,h ;
    int l ;
    double Weigth , Length ;
    cout << "输入第一个顶点的横纵坐标值：" << endl;
    cin >> a>>b ;
    cout << "输入第二个顶点的横纵坐标值：" << endl;
     cin >> c>>d ;
    cout << "输入第三个顶点的横纵坐标值：" << endl;
     cin >> e>>f ;
    cout << "输入第四个顶点的横纵坐标值：" << endl;
     cin >> g>>h ;
     //Determine if it is in the first quadrant
    if(a >=0 && b >= 0&& c >= 0&& d >= 0&& e >= 0&& f >= 0&& g >= 0&& h >= 0)
        cout <<"在第一象限"<<endl ;
        else
            cout<<"不在第一象限"<<endl ;
    //Rectangle I (a , b), J(c , d) , K(e , f) , L(g , h);
    Weigth = setWeigth(a , c , e , g);
    Length = setLength(b , d , f , h);
    l = judge(Weigth , Length) ;
    if(l == 1)
        cout <<"this is a square" <<endl;
    Rectangle k(Weigth , Length) ;
    k.CalculateArea() ;
    k.CalculatePerimeter() ;
    k.Display() ;

    return 0;
}
