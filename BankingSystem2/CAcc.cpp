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
//int Menu(void); //메뉴
//void MakeBankAccount(void); //계좌 개설
//void Deposit(int money); //입금
//void Withdraw(int money); //출금
//void ShowAccountInfo(void); //전체고객 잔액조회
//
//class BankAccount
//{
//private:
//    int AccountNumber; //계좌 번호
//    char *Name; //고객 이름
//    int Money; //고객의 잔액
//public:
//    BankAccount(int num, char *name, int money) :AccountNumber(num), Money(money) //생성자
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
//        cout << "이름:" << Name << endl;
//        cout << "계좌번호:" << AccountNumber << endl;
//        cout << "잔고:" << Money << endl;
//        cout << "\n";
//    }
//
//    ~BankAccount() //소멸자
//    {
//        delete[]Name;
//    }
//};
//
//BankAccount *Arr[10]; //계좌 포인터 배열
//int AccountNum = 0; //계좌 개수
//
//int Menu(void)
//{
//    int sel;
//    cout << "-----Menu-----" << endl;
//    cout << "1.계좌개설" << endl << "2.입금" << endl << "3.출금" << endl << "4.계좌정보 전체 출력" << endl << "5.프로그램 종료" << endl;
//    cout << "선택: ";
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
//    cout << AccountNum + 1 << "사람 정보 입력" << endl;
//    cout << "계좌번호 입력:";
//    cin >> accountNumber;
//    cout << "이름 입력:";
//    cin >> name;
//    cout << "잔액 입력:";
//    cin >> money;
//    cout << endl;
//
//    Arr[AccountNum++] = new BankAccount(accountNumber, name, money);
//}
//
//void Deposit(int money)
//{
//    int number;
//    cout << "고객님의 계좌번호를 입력해주세요:";
//    cin >> number;
//    
//    for (int i = 0; i <= AccountNum; i++)
//    {
//        if (Arr[i]->GetNumber()==number) 
//        {
//            Arr[i]->Deposit(money);
//            cout << "입금이 완료되었습니다" << endl;
//
//            return;
//        }
//    }
//    cout << "없는 계좌번호입니다" << endl;
//}
//
//void Withdraw(int money)
//{
//    int number;
//    cout << "계좌번호를 입력해주세요:";
//    cin >> number;
//    for (int i = 0; i <= AccountNum; i++)
//    {
//        if (Arr[i]->GetNumber() == number)
//        {
//            if (Arr[i]->Withdraw(money) == 0)
//            {
//                cout << "잔액이 부족합니다" << endl;
//
//                return;
//            }
//            cout << "출금이 완료되었습니다" << endl;
//
//            return;
//        }
//    }
//    cout << "없는 계좌번호입니다" << endl;
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