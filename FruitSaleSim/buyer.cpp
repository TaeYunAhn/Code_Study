
#include <iostream>
#include "buyer.h"

using namespace std;

buyer::buyer()
{

}
buyer::~buyer()
{

}

void buyer::InitMembers(int money)
{
    myMoney = money;
    numOfApples = 0;
}
void buyer::BuyApples(FruitSeller& seller, int money) 
{
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
}
void buyer::ShowBuyResult()
{
    cout<<"현재 잔액 "<<myMoney<<endl;
    cout<<"사과 개수 "<<numOfApples<<endl;

}