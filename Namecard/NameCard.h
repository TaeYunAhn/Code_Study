#pragma once
#include <string>

enum COMP_POS
{
    CLERK,
};

class NameCard
{
private:
    char *Name;
    char *Company;
    char *Phone_Number;
    int Pos;

public:
    NameCard(const char *name, const char *company, const char *phone_number, int comp_pos);
    ~NameCard();

    void ShowNAmeCardInfo();
    
    
};



