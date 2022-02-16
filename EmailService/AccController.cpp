#include "AccController.h"
#include <string>

AccController::AccController()
{
}
AccController::~AccController()
{
}

EN_RESULT AccController::SignUP(const string &ID, const string &PW)
{
    for (int i = 0; i < emailAccounts.size(); i++)
    {
        if (emailAccounts[i].ID == ID)
            return EN_EXIST_ALREADY;
    }
    EmailAcc emailAcc(ID, PW);
    emailAccounts.push_back(emailAcc);
    return EN_SIGNUP_SUCCESS;
}

EN_RESULT AccController::Login(const string &ID, const string &PW)
{
    for (int i = 0; i < emailAccounts.size(); i++)
    {
        if (emailAccounts[i].ID != ID)
            return EN_NOT_EXIST_ACC;
        else if (emailAccounts[i].ID == ID && emailAccounts[i].PW == PW)
            return EN_LOGIN_SUCCESS;
        else if (emailAccounts[i].ID == ID && emailAccounts[i].PW != PW)
            return EN_WRONG_PW;
    }
}

vector<EmailAcc> AccController::GetTotalAcc()
{
    return emailAccounts;
}