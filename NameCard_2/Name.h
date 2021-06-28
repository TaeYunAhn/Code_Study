#pragma once

enum comp_pos{
    CLERK,
    SENIOR,
    ASSIT,
    MANAGER,
};


class Name
{
public:

    Name(const char *name, const char *company, const char* phone_num, int comp_pos);
    ~Name();

    void ShowNameCardInfo();

private:
    char *_name;
    char *_company;
    char *_phone_num;
    int _comp_pos;

};

