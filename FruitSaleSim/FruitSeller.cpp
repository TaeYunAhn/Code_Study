#include <iostream>
#include "FruitSeller.h"

using namespace std;


FruitSeller::FruitSeller()
{

}
FruitSeller::~FruitSeller()
{

}
void FruitSeller::InitMembers(int price, int num, int money)
{
    Apple_price = price;
    numOfApples = num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
    int num= money/Apple_price;
    numOfApples -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSalesResult()
{
    cout<<"남은 사과 "<<numOfApples<<endl;
    cout<<"판매 수익 "<<myMoney<<endl;
}
