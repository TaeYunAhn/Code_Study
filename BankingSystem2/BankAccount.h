#pragma once
#include <string>

struct BankAccount
{
    BankAccount(int _Acc, std::string _Name, int _Balance) : Acc(_Acc), Name(_Name), Balance(_Balance)
    {
        // Acc = _Acc;
        // Name = _Name;
        // Balance = _Balance;
    }

    ~BankAccount() {}
    int Acc;
    std::string Name;
    int Balance;
};