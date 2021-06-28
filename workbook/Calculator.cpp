#include <iostream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}

void Calculator::Init()
{
    numOfAdd = 0;
    numOfMin = 0;
    numOfMul = 0;
    numOfDiv = 0;
}

const double Calculator::Add(const double n1, const double n2)
{
    double res;
    
    res = n1 + n2;
    numOfAdd++;
    return res;
}

const double Calculator::Min(const double n1, const double n2)
{
    double res;

    res = n1 - n2;
    numOfMin++;
    return res;
}

const double Calculator::Mul(const double n1, const double n2)
{
    double res;

    res = n1 * n2;
    numOfMul++;
    return res;
}

const double Calculator::Div(const double n1, const double n2)
{
    double res;

    res = n1 / n2;
    numOfDiv++;
    return res;
}

void Calculator::ShowOpCount()
{
    cout<<"µ¡¼À: "<<numOfAdd<<"¹ø ";
    cout<<"»¬¼À: "<<numOfMin<<"¹ø ";
    cout<<"°ö¼À: "<<numOfMul<<"¹ø ";
    cout<<"³ª´°¼À: "<<numOfDiv<<"¹ø "<<endl;
}