#include<bits/stdc++.h>
#include"Point.h"
#include"Rectangle.h"
using namespace std;
int main()
{
    point one(0,0),two(0,4),three(5,0),four(5,4);
    Rectangle hehe(one,two,three,four);
    if(!hehe.judge())
        cout<<"长方形"<<endl;
    else
        cout<<"正方形"<<endl;
    int length=hehe.getlength();
    int width=hehe.getwidth();
  cout<<"面积为: "<<hehe.getarea(length,width)<<endl;
  cout<<"周长为："<<hehe.getperimeter(length,width)<<endl;
    //cout<<width<<endl;



}
