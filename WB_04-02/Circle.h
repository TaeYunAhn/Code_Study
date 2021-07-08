#pragma once
#include <iostream>

using namespace std;

class Circle
{
private:
    const double radius;
    Point center;
    
public:
    Circle(double x, double y, double r) : center(x, y), radius(r) { }
    void ShowRingInfo();
};

class Point
{
private:
    int xpos, ypos;

public:
    Point(int x, int y): xpos(x), ypos(y) { };
    ~Point();
    void Init(int x, int y);
    void ShowPointInfo() const;
};

class Ring
{
public:
    Circle Circle1;
    Circle Circle2;

    Ring(double x1, double y1, double r1, double x2, double y2, double r2): Circle1(x1, y1, r1), Circle2(x2, y2, r2) { }
    void ShowRingInfo();
    
};