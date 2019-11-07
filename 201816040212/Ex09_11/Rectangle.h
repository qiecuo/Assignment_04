//
//  Rectangle.hpp
//  ass4-11
//
//  Created by MacBook on 2019/11/4.
//  Copyright © 2019 MacBook. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
typedef struct{
    double x;
    double y;
}point;
class Rectangle{
public:
    Rectangle();
    Rectangle(double,double);
    Rectangle(point,point,point,point);
    void setPoint(point,point,point,point);
    void setLenth(double);
    void setWidth(double);
    double getPerimeter();
    double getArea();
    bool isSquare();
private:
    point p1,p2,p3,p4;
    double lenth;
    double width;
};
#endif /* Rectangle_hpp */
