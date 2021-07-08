#pragma once
#include <vector>
#include "BankAccount.h"

enum EN_RESULT
{
    EN_MONEY_SUCCESS,
    EN_CREATE_SUCCESS,
    EN_NOT_EXIT_ACC,
    EN_NO_BALANCE,
    EN_EXIST_ALREADY,
};

class AccController
{
public:
    AccController();
    ~AccController();

    EN_RESULT CreateAcc(const int& Acc, const std::string& Name, const int& Balance);
    EN_RESULT Deposit(const int& Acc, const int& Balance);
    EN_RESULT Withdraw(const int& Acc, const int& Money);
    std::vector<BankAccount> GetTotalAcc();
    int GetA() { return a; }
    int SetA(int val) { a = val; }

private:
    std::vector<BankAccount> bankAccounts;
    int a;
};

