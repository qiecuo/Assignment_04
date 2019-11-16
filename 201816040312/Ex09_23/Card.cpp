#include<iostream>
#include<array>
#include<sstream>
#include"Card.h"

using namespace std;

array<string,4> Card::s1;
array<string,13> Card::s2;

Card::Card(int a,int b)//构造函数
{
    setfands(a,b);
    storage();
}
void Card::setfands(int a,int b)//face和suit的set函数
{
    face=a;
    suit=b;
}
void Card::storage()//储存两个静态数组
{
    s1[0]="Heart";
    s1[1]="Spade";
    s1[2]="Square sheet";
    s1[3]="Plum blossom";
    int i;
    for(i=0;i<13;i++)
    {
    stringstream ss;
    ss << i;
    string s = ss.str();
    s2[i]=s;
        s2[i]=s;
    }
}
void Card::tostring()//输出face和suit
{
    if(face==11)
        cout<<"J";
    if(face==12)
        cout<<"Q";
    if(face==13)
        cout<<"K";
    if(face<11&&face>0)
        cout<<face;
    if(suit==0)
        cout<<"  of  "<<s1[0]<<endl;
    if(suit==1)
        cout<<"  of  "<<s1[1]<<endl;
    if(suit==2)
        cout<<"  of  "<<s1[2]<<endl;
    if(suit==3)
        cout<<"  of  "<<s1[3]<<endl;

}
