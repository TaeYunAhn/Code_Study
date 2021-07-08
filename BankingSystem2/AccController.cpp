#include "AccController.h"
#include <string>

AccController::AccController()
{
}
AccController::~AccController()
{
}

EN_RESULT AccController::CreateAcc(const int& Acc, const std::string& Name, const int& Balance)
{
    for ( int i = 0; i < bankAccounts.size(); i++ )
    {
        if (bankAccounts[i].Acc == Acc)
            return EN_EXIST_ALREADY;
    }

    BankAccount bankAcc(Acc, Name, Balance);

    bankAccounts.push_back(bankAcc);
    return EN_CREATE_SUCCESS;
}

EN_RESULT AccController::Deposit(const int& Acc, const int& Money)
{
    for ( int i = 0; i < bankAccounts.size(); i++)
    {
        if ( bankAccounts[i].Acc == Acc )
        {
            bankAccounts[i].Balance += Money;
            return EN_MONEY_SUCCESS;
        }
    }

    return EN_NOT_EXIT_ACC;
    //for ( auto& asd : bankAccounts )
    //{
    //    if ( asd.Acc == Acc )
    //    {
    //        asd.Balance += Money;
    //    }
    //}

    //const auto& aa = std::find_if(bankAccounts.begin(), bankAccounts.end(), [&Acc] (const BankAccount& d)
    //{
    //    return d.Acc == Acc;
    //});

    //aa->Balance += Money;
}

EN_RESULT AccController::Withdraw(const int& Acc, const int& Money)
{
        bool bFind = false;
        for ( int i = 0; i < bankAccounts.size(); i++)
        {
            if ( bankAccounts[i].Acc == Acc )
            {
                bFind = true;
                if (bankAccounts[i].Balance >= Money )
                    bankAccounts[i].Balance -= Money;
                else
                    return EN_NO_BALANCE;
            }
        }
        
        if ( !bFind )
            return EN_NOT_EXIT_ACC;

        return EN_MONEY_SUCCESS;
}

std::vector<BankAccount> AccController::GetTotalAcc()
{
    return bankAccounts;
}