#include <iostream>
#include "Circle.h"

using namespace std;


Circle::Circle(int x, int y, int r) : center(x, y), radius(r)
{

}

Circle::~Circle()
{

}

//void Circle::Init(int x, int y, int r)
//{
//    center.Init(x,y);
//    radius = r;
//}
void Circle::ShowCircleInfo()
{
    cout<<"radius: "<<radius<<endl;
    center.ShowPointInfo();
}