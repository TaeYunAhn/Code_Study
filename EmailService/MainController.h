#pragma once
#include <string>
#include <iostream>
using namespace std;

struct s_mail
{
    string To;
    string Title;
    string Contents;
} t_mail;

class AccController;
class MainController
{
public:
    MainController();
    ~MainController();

    void start();

    //void SignUpID(string &ID, string &PW);

    //void ShowMail();
    //void SendMail();

private:
    AccController *accController;
};