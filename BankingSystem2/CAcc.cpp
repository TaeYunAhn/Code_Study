#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "MainController.h"

using namespace::std;

int main(void)
{
    AccController asd;
    MainController controller(asd);
    controller.start();

    process();
}

//
//int Menu(void); //�޴�
//void MakeBankAccount(void); //���� ����
//void Deposit(int money); //�Ա�
//void Withdraw(int money); //���
//void ShowAccountInfo(void); //��ü�� �ܾ���ȸ
//
//class BankAccount
//{
//private:
//    int AccountNumber; //���� ��ȣ
//    char *Name; //�� �̸�
//    int Money; //���� �ܾ�
//public:
//    BankAccount(int num, char *name, int money) :AccountNumber(num), Money(money) //������
//    {
//        Name = new char[strlen(name) + 1];
//        strcpy(Name, name);
//    }
//   
//    int GetNumber()
//    {
//        return AccountNumber;
//    }
//    
//    void Deposit(int money)
//    {        
//        Money += money;
//        cout << "\n";
//    }
//    
//    int Withdraw(int money)
//    {
//        if (Money < money)
//            return 0;
//                      
//        Money -= money;
//        return money;
//    }
//
//    void ShowAccountInfo()
//    {
//        cout << "�̸�:" << Name << endl;
//        cout << "���¹�ȣ:" << AccountNumber << endl;
//        cout << "�ܰ�:" << Money << endl;
//        cout << "\n";
//    }
//
//    ~BankAccount() //�Ҹ���
//    {
//        delete[]Name;
//    }
//};
//
//BankAccount *Arr[10]; //���� ������ �迭
//int AccountNum = 0; //���� ����
//
//int Menu(void)
//{
//    int sel;
//    cout << "-----Menu-----" << endl;
//    cout << "1.���°���" << endl << "2.�Ա�" << endl << "3.���" << endl << "4.�������� ��ü ���" << endl << "5.���α׷� ����" << endl;
//    cout << "����: ";
//    cin >> sel;
//    cout << "\n";
//
//    return sel;
//}
//
//
//
//void MakeBankAccount()
//{
//    int accountNumber;
//    char name[30];
//    int money;
//    cout << "\n";
//    cout << AccountNum + 1 << "��� ���� �Է�" << endl;
//    cout << "���¹�ȣ �Է�:";
//    cin >> accountNumber;
//    cout << "�̸� �Է�:";
//    cin >> name;
//    cout << "�ܾ� �Է�:";
//    cin >> money;
//    cout << endl;
//
//    Arr[AccountNum++] = new BankAccount(accountNumber, name, money);
//}
//
//void Deposit(int money)
//{
//    int number;
//    cout << "������ ���¹�ȣ�� �Է����ּ���:";
//    cin >> number;
//    
//    for (int i = 0; i <= AccountNum; i++)
//    {
//        if (Arr[i]->GetNumber()==number) 
//        {
//            Arr[i]->Deposit(money);
//            cout << "�Ա��� �Ϸ�Ǿ����ϴ�" << endl;
//
//            return;
//        }
//    }
//    cout << "���� ���¹�ȣ�Դϴ�" << endl;
//}
//
//void Withdraw(int money)
//{
//    int number;
//    cout << "���¹�ȣ�� �Է����ּ���:";
//    cin >> number;
//    for (int i = 0; i <= AccountNum; i++)
//    {
//        if (Arr[i]->GetNumber() == number)
//        {
//            if (Arr[i]->Withdraw(money) == 0)
//            {
//                cout << "�ܾ��� �����մϴ�" << endl;
//
//                return;
//            }
//            cout << "����� �Ϸ�Ǿ����ϴ�" << endl;
//
//            return;
//        }
//    }
//    cout << "���� ���¹�ȣ�Դϴ�" << endl;
//}
//
//void ShowAccountInfo(void)
//{
//    for (int i = 0; i < AccountNum; i++)
//    {
//        Arr[i]->ShowAccountInfo();
//        cout << endl;
//    }
//}