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
        std::cout << "1.���°���" << std::endl;
        std::cout << "2.�Ա�" << std::endl;
        std::cout << "3.���" << std::endl;
        std::cout  << "4.�������� ��ü ���" << std::endl;
        std::cout  << "5.���α׷� ����" << std::endl;
        std::cout << "����: ";
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
            std::cout << "�߸��� ��ȣ�� �Է��ϼ̽��ϴ� \n" << std::endl;
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
    std::cout << "--�ű԰� �����Է�--" << std::endl;
    std::cout << "���¹�ȣ 4�ڸ� �Է�:";
    std::cin >> Acc;

    std::cout << "�̸� �Է�:";
    std::cin >> Name;

    std::cout << "�ܾ� �Է�:";
    std::cin >> Balance;

    std::cout << std::endl;
}

void MainController::InputMoneyInfo(int& Acc, int& Money, bool bDeposit)
{
    std::cout << "������ ���¹�ȣ�� �Է����ּ���:";
    std::cin >> Acc;

    if ( bDeposit )
        std::cout << "�Ա��� �ݾ�:";
    else
        std::cout << "����� �ݾ�:";

    std::cin >> Money;
}

void MainController::ShowAccInfo()
{
    std::vector<BankAccount> vData = accController->GetTotalAcc();
    
    for ( int i = 0; i < vData.size(); i++)
    {
        BankAccount temp = vData[i];
        std::cout << "���¹�ȣ :";
        std::cout << temp.Acc << std::endl;
        std::cout << "�ܾ�     :";
        std::cout << temp.Balance << std::endl;
        std::cout << "�̸�     :";
        std::cout << temp.Name << std::endl << std::endl;
    }
}

void MainController::PrintResult(EN_RESULT res, bool bDeposit )
{
    switch ( res )
    {
    case EN_MONEY_SUCCESS:
        bDeposit ? std::cout << "�ԱݵǾ����ϴ�.\n \n" : std::cout << "��ݵǾ����ϴ�.\n \n"; 
        break;
    case EN_CREATE_SUCCESS:
        std::cout << "���°� �����Ǿ����ϴ�. \n \n";
        break;
    case EN_NOT_EXIT_ACC:
        std::cout << "�´� ���°� �����ϴ�.\n \n";
        break;
    case EN_NO_BALANCE:
        std::cout << "�ܾ��� �����մϴ�.\n \n";
        break;
    case EN_EXIST_ALREADY:
        std::cout << "�̹� �����ϴ� ���¹�ȣ �Դϴ�. \n \n";
        break;
    default:
        std::cout << "�߸��� ��ȣ�Դϴ�.\n \n";
        break;
    }
     
}