#include <iostream>
#include "FruitSeller.h"
#include "buyer.h"

using namespace std;

int main()
{
    FruitSeller FruitSeller;
    FruitSeller.InitMembers(1000, 20, 0);
    buyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(FruitSeller, 2000);

    cout<<"과일 판매자의 현황"<<endl;
    FruitSeller.ShowSalesResult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.ShowBuyResult();
    return 0;

}