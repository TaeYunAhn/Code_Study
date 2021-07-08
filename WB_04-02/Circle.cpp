#include <iostream>
#include "Circle.h"

using namespace std;

void Circle::ShowRingInfo()
{
    cout<<"radius : "<<radius<<endl;
}

void Point::Init(int x, int y)
{
    xpos = x;
    ypos = y;
}
void Point::ShowPointInfo() const
{
    cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
}

double PiinPoint(int x, int y);

void Ring::ShowRingInfo()
{
    cout<<"Inner Circle Info..."<<
}

