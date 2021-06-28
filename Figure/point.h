#pragma once
class point
{
public:
    point(int x, int y);
    ~point() = default;

    int getX();
    int getY();

    double process(int a);
private:
    int x;
    int y;
};
