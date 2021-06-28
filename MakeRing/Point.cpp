#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int x, int y) : xpos(x), ypos(y)
{

}

Point::~Point()
{

}

//void Point::Init(int x, int y)
//{
//    xpos = x;
//    ypos = y;
//}

void Point::ShowPointInfo()
{
    cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
}