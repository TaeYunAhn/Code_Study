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
        {
            LoginService(EN_EXIST_ALREADY);
        }
    }
    EmailAcc emailAcc(ID, PW);
    emailAccounts.push_back(emailAcc);
    LoginService(EN_SIGNUP_SUCCESS);
}

int AccController::LoginService(int &error)
{
    if (error == EN_NOT_EXIST_ACC)
    {
        printf("NOT_EXIST_ACC");
        return Login;
    }
    else if (error == EN_LOGIN_SUCCESS)
    {
        printf("LOGIN_SUCCESS");
        //return 이메일 작성.보기.등등 메뉴로 감
    }
    else if (error == EN_WRONG_PW)
    {
        printf("WRONG_PW");
        return Login;
    }
    else if (error == EN_EXIST_ALREADY)
    {
        printf("EXIST_ALREADY");
        return SignUP;
    }
    else if (error == EN_SIGNUP_SUCCESS)
    {
        printf("SIGNUP_SUCCESS");
        return Login;
    }
    else
    {
        printf("error");
        return Login;
    }
}

EN_RESULT AccController::Login(const string &ID, const string &PW)
{
    for (int i = 0; i < emailAccounts.size(); i++)
    {
        if (emailAccounts[i].ID != ID)
        {
            LoginService(EN_NOT_EXIST_ACC);
            return 0;
        }
        else if (emailAccounts[i].ID == ID && emailAccounts[i].PW == PW)
        {
            LoginService(EN_LOGIN_SUCCESS);
            return 0;
        }
        else if (emailAccounts[i].ID == ID && emailAccounts[i].PW != PW)
        {
            LoginService(EN_WRONG_PW);
            return 0;
        }
    }
}

vector<EmailAcc> AccController::GetTotalAcc()
{
    return emailAccounts;
}