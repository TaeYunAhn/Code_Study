#include <iostream>
#include "MainController.h"

MainController::MainController()
{
}

MainController::~MainController()
{
}

void MainController::start()
{
    while ( 1 )
    {
        int sel = 0;
        std::cout << "MENU\n";
        std::cin >> sel;
        std::cout << "\n";

        switch ( sel )
        {
            case 1:
            {
                int Acc = 0;
                std::string Name;
                int Money;
                InputAccInfo(Acc, Name, Money);
                const EN_RESULT res = accController.CreateAcc(Acc, Name, Money);
                PrintResult(res);
            }
        default:
            break;
        }


    }
}

void MainController::InputAccInfo(int& Acc, std::string& Name, int& Balance)
{
    Acc = 0;
    Name.clear();
    Balance = 0;


}