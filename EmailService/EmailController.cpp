#include "EmailController.h"

EmailController::EmailController()
{
}
EmailController::EmailController()
{
}

void EmailController::Show_All(string &ID)
{
    cout << "From : " << t_mail.From << endl;
    cout << "To : " << t_mail.To << endl;
    cout << "Title : " << t_mail.Title << endl;
    cout << "Contents : " << t_mail.Contents << endl;
}

/*EN_RESULT AccController::SignUP(const string &ID, const string &PW)
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
} */