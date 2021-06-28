#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Name.h"

using namespace std;

Name::Name(const char *name, const char *company, const char* phone_num, int comp_pos)
{
    _name = new char(strlen(name)+1);
    _company = new char(strlen(company)+1);
    _phone_num = new char(strlen(phone_num)+1);
    _comp_pos = comp_pos;

    strcpy(_name, name);
    strcpy(_company, company);
    strcpy(_phone_num, phone_num);

}
Name::~Name()
{
    delete _name;
    delete _company;
    delete _phone_num;
}

void Name::ShowNameCardInfo()
{
    cout<<"�̸�: "<<_name<<endl;
    cout<<"ȸ��: "<<_company<<endl;
    cout<<"��ȭ��ȣ: "<<_phone_num<<endl;
    cout<<"����: "<<_comp_pos<<endl;

}