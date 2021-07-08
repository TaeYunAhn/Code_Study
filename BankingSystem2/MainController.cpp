#include <iostream>
#include "AccController.h"
#include "MainController.h"

MainController::MainController()
{
    accController = new AccController();
}

MainController::~MainController()
{
    delete accController;
}

void MainController::start()
{
    while (1)
    {
        int sel = 0;
        std::cout << "-----Menu-----" << std::endl;
        std::cout << "1.계좌개설" << std::endl;
        std::cout << "2.입금" << std::endl;
        std::cout << "3.출금" << std::endl;
        std::cout  << "4.계좌정보 전체 출력" << std::endl;
        std::cout  << "5.프로그램 종료" << std::endl;
        std::cout << "선택: ";
        std::cin >> sel;
        std::cout << "\n";

        switch (sel)
        {
        case 1:
        {
            int Acc = 0;
            std::string Name;
            int Money;
            InputAccInfo(Acc, Name, Money);
            const EN_RESULT res = accController->CreateAcc(Acc, Name, Money);
            PrintResult(res);
        }
        break;
        case 2:
        {
            int Acc = 0;
            int Money = 0;
            InputMoneyInfo(Acc, Money);
            const EN_RESULT res = accController->Deposit(Acc, Money);
            PrintResult(res, true);
        }
        break;
        case 3:
        {
            int Acc = 0;
            int Money = 0;
            InputMoneyInfo(Acc, Money, false);
            const EN_RESULT res = accController->Withdraw(Acc, Money);
            PrintResult(res);
        }
        break;
        case 4:
            ShowAccInfo();
            break;
        case 5:
            return;
        default:
            std::cout << "잘못된 번호를 입력하셨습니다 \n" << std::endl;
            break;
        }
    }
}

void MainController::InputAccInfo(int& Acc, std::string& Name, int& Balance)
{
    Acc = 0;
    Name.clear();
    Balance = 0;

    std::cout << "\n";
    std::cout << "--신규고객 정보입력--" << std::endl;
    std::cout << "계좌번호 4자리 입력:";
    std::cin >> Acc;

    std::cout << "이름 입력:";
    std::cin >> Name;

    std::cout << "잔액 입력:";
    std::cin >> Balance;

    std::cout << std::endl;
}

void MainController::InputMoneyInfo(int& Acc, int& Money, bool bDeposit)
{
    std::cout << "고객님의 계좌번호를 입력해주세요:";
    std::cin >> Acc;

    if ( bDeposit )
        std::cout << "입금할 금액:";
    else
        std::cout << "출금할 금액:";

    std::cin >> Money;
}

void MainController::ShowAccInfo()
{
    std::vector<BankAccount> vData = accController->GetTotalAcc();
    
    for ( int i = 0; i < vData.size(); i++)
    {
        BankAccount temp = vData[i];
        std::cout << "계좌번호 :";
        std::cout << temp.Acc << std::endl;
        std::cout << "잔액     :";
        std::cout << temp.Balance << std::endl;
        std::cout << "이름     :";
        std::cout << temp.Name << std::endl << std::endl;
    }
}

void MainController::PrintResult(EN_RESULT res, bool bDeposit )
{
    switch ( res )
    {
    case EN_MONEY_SUCCESS:
        bDeposit ? std::cout << "입금되었습니다.\n \n" : std::cout << "출금되었습니다.\n \n"; 
        break;
    case EN_CREATE_SUCCESS:
        std::cout << "계좌가 생성되었습니다. \n \n";
        break;
    case EN_NOT_EXIT_ACC:
        std::cout << "맞는 계좌가 없습니다.\n \n";
        break;
    case EN_NO_BALANCE:
        std::cout << "잔액이 부족합니다.\n \n";
        break;
    case EN_EXIST_ALREADY:
        std::cout << "이미 존재하는 계좌번호 입니다. \n \n";
        break;
    default:
        std::cout << "잘못된 번호입니다.\n \n";
        break;
    }
     
}