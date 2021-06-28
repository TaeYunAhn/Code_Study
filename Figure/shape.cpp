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
            cout << " �߸��� ���� �Է��߽��ϴ�.(������: " << radius << ")" << endl;
            wrongFlag = true;
        }
        
        if ( size > 1 )
        {
            cout << "Circle�� �ϳ��� ��ǥ�� �Է��ϼ���.(��ǥ ����: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    case EN_REC:
        if ( radius != 0 )
        {
            cout << " �߸��� ���� �Է��߽��ϴ�.(������: " << radius << ")" << endl;
            wrongFlag = true;
        }

        if ( size != 2 )
        {
            cout << "Rec�� �ΰ��� ��ǥ�� �Է��ϼ���.(��ǥ ����: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    case EN_TRI:
        if ( radius != 0 )
        {
            cout << " �߸��� ���� �Է��߽��ϴ�.(������: " << radius << ")" << endl;
            wrongFlag = true;
        }

        if ( size != 3 )
        {
            cout << "Tri�� ������ ��ǥ�� �Է��ϼ���.(��ǥ ����: " << size << ")" << endl;
            wrongFlag = true;
        }
        break;
    default:
        cout << " �߸��� ���Դϴ�. " << endl;
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
        cout << "����� �� �����ϴ�." << endl;
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
        cout << "����� �� �����ϴ�." << endl;
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

