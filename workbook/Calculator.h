#pragma once
class Calculator
{
public:
    Calculator();
    ~Calculator();
    void Init();
    const double Add(const double n1, const double n2);
    const double Min(const double n1, const double n2);
    const double Mul(const double n1, const double n2);
    const double Div(const double n1, const double n2);
    void ShowOpCount();
  
private:
    int numOfAdd;
    int numOfMin;
    int numOfMul;
    int numOfDiv;

};



