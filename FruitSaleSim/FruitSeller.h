#pragma once
class FruitSeller
{
public:
    FruitSeller(); //: Apple_price(price), numOfApples(num), myMoney(money)
    ~FruitSeller();
private:
    int Apple_price;
    int numOfApples;
    int myMoney;


public:
    void InitMembers(int price, int num, int money);
    int SaleApples(int money);
    void ShowSalesResult();
};

