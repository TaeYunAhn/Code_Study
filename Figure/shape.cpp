#include <iostream>
#include "shape.h"

using namespace std;

shape::shape(EN_CATEGORY _category, std::vector<point> _points, int _radius) 
    : category(_category), points(_points), radius(_radius), wrongFlag(false)
{
    const int size = points.size();
    switch ( category )
    {
    case EN_CIR:
        if ( radius == 0 )
        {
            cout << " 잘못된 값을 입력했습니다.(반지름: " << radius << ")" << endl;
            wrongFlag = true;
        }
        
        if ( size > 1 )
        {
            cout << "Circle은 하나의 좌표만 입력하세요.(좌표 갯수: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    case EN_REC:
        if ( radius != 0 )
        {
            cout << " 잘못된 값을 입력했습니다.(반지름: " << radius << ")" << endl;
            wrongFlag = true;
        }

        if ( size != 2 )
        {
            cout << "Rec은 두개의 좌표만 입력하세요.(좌표 갯수: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    case EN_TRI:
        if ( radius != 0 )
        {
            cout << " 잘못된 값을 입력했습니다.(반지름: " << radius << ")" << endl;
            wrongFlag = true;
        }

        if ( size != 3 )
        {
            cout << "Tri은 세개의 좌표만 입력하세요.(좌표 갯수: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    default:
        cout << " 잘못된 값입니다. " << endl;
        wrongFlag = true;
        break;
    }
}

shape::~shape()
{
}

double shape::getArea()
{
    if ( wrongFlag )
    {
        cout << "계산할 수 없습니다." << endl;
        return 0.0;
    }

    switch ( category )
    {
    case EN_CIR:
        cout << "Cir getArea" << endl;
        break;
    case EN_REC:
        cout << "Rec getArea" << endl;
        break;
    case EN_TRI:
        cout << "Tri getArea" << endl;
        break;
    default:
        break;
    }
    
    return 1.0;
}

double shape::getRound()
{
    if ( wrongFlag )
    {
        cout << "계산할 수 없습니다." << endl;
        return 0;
    }

    switch ( category )
    {
    case EN_CIR:
        break;
    case EN_REC:
        break;
    case EN_TRI:
        break;
    default:
        break;
    }

    return 0.0;
}

