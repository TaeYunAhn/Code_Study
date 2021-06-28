#pragma once
#include "Point.h"

class Circle
{
public:
    Circle(int x, int y, int r);
    void copy(const Circle& d)
    {
        center = d.center;
        radius = d.radius;
        d.radius1 = new int;
        radius1 = d.radius1;
    }
    ~Circle();
   // void Init(int x, int y, int r);
    void ShowCircleInfo();
private:
    int radius;
    int* radius1;
    Point center;

};


Circle c;
c.radius = 5;

Circle d;
d.copy(c);

