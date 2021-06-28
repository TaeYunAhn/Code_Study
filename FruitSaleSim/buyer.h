#pragma once
#include "FruitSeller.h"

class buyer
{
    int myMoney;
    int numOfApples;
public:
    buyer();
    ~buyer();
    void InitMembers(int money);
    void BuyApples(FruitSeller &seller, int money);
    void ShowBuyResult();
};

