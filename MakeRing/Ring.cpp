#include <iostream>
#include "Ring.h"

using namespace std;

Ring::Ring(int x1, int y1, int r1, int x2, int y2, int r2) :  Circle_1(x1, y1, r1),  Circle_2(x2, y2, r2)
{

}

Ring::~Ring()
{

}

//void Ring::Init(int x1, int y1, int r1, int x2, int y2, int r2)
//{
//    Circle_1.Init(x1, y1, r1);
//    Circle_2.Init(x2, y2, r2);
//}

void Ring::ShowRingInfo()
{
   // if (!(Circle_2 - Circle_1 < Circle.r2 - Circle.r1)
    cout<<"Inner Circle Info..."<<endl;
    Circle_1.ShowCircleInfo();
    cout<<"Outter Circle Info..."<<endl;
    Circle_2.ShowCircleInfo();

}