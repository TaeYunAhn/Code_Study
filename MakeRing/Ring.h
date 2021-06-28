#pragma once
#include "Circle.h"

class Ring
{
public:
    Ring(int x1, int y1, int r1, int x2, int y2, int r2);
    ~Ring();

    //void Init(int x1, int y1, int r1, int x2, int y2, int r2);
    void ShowRingInfo();

private:
    Circle Circle_1;
    Circle Circle_2;

};

