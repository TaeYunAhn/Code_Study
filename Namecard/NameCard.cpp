#include <iostream>
#include "NameCard.h"

using namespace std;


NameCard::NameCard(const char *name, const char *company, const char* phone_number, int comp_pos) 
{

    Name = (char*)(malloc(sizeof(char) * (strlen(name) + 1)));
    Company = (char*)(malloc(sizeof(char) * (strlen(company) + 1)));
    Phone_Number = (char*)(malloc(sizeof(char) * (strlen(phone_number) + 1)));
    Pos = comp_pos; 
}

NameCard::~NameCard()
{
    free(Name);
    free(Company);
    free(Phone_Number);
}

void NameCard::ShowNAmeCardInfo()
{
    cout<<"이름: "<<Name<<endl;
    cout<<"회사: "<<Company<<endl;
    cout<<"전화번호: "<<Phone_Number<<endl;
    cout<<"직급: "<<Pos<<endl;


}
