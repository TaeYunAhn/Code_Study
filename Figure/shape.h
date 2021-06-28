#pragma once
#include <vector>
#include "point.h"

enum EN_CATEGORY
{
    EN_CIR,
    EN_REC,
    EN_TRI,
};

class shape
{
public:
    shape(EN_CATEGORY _category, std::vector<point> _points, int _radius = 0);
    ~shape();

    double getArea();
    double getRound();

private:
    EN_CATEGORY category;
    std::vector<point> points;
    int radius;
    bool wrongFlag;
};