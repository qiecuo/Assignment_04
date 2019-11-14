#include<bits/stdc++.h>
#include"Rectangle.h"
using namespace std;
int main()
{
     Rectangle first(-1.0,-2.0);///非法输入
     cout<<"length and width is"<<endl;
     cout<<first.getlength()<<" "<<first.getwidth()<<endl;
   first.setlength(5.0);///修改
   first.setwidth(6.0);
    cout<<"after change length and width is"<<endl;
      cout<<first.getlength()<<" "<<first.getwidth()<<endl;///显示
      cout<<"area and perimeter is"<<endl;

cout<<first.area()<<" "<<first.perimeter()<<endl;///面积和周长
}
