#include <iostream>
#include <vector>
#include "shape.h"

using namespace std;

int main()
{
    std::vector<point> points;
    point p1(1,2);
    point p2(3,4);
    points.push_back(p1);
    points.push_back(p2);

    shape shape1(EN_REC, points, 1);
    double area = shape1.getArea();
    //double round = shape1.getRound();
    //string aasd = shape1.getInfo();

    cout << "area : " << area << endl;
}
