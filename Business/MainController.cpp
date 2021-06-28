#include <string>
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
        std::cout << "-----Menu-----" << std::endl;
        std::cout << "1.신규채용" << std::endl;
        std::cout << "2.성과평가" << std::endl;
        std::cout << "3.개인 사원정보 출력" << std::endl;
        std::cout  << "4.전체 사원정보 출력" << std::endl;
        std::cout  << "5.프로그램 종료" << std::endl;
        std::cout << "선택: ";
        std::cin >> sel;
        std::cout << "\n";

        switch ( sel )
        {
        case 1:
        {
            std::string Name;
            std::string Position;
            InputInfo(Name, Position);

        }
        break;
        case 2:
        {
            std::string Name;
            char Grade;
            InputPerformance(Name, Grade);

        }
        break;
        case 3:
        {
            std::string Name;
            ShowPersonalInfo(Name);
        }
        break;
        case 4:
        {
            ShowInfo();
        }
        break;
        case 5:
            return ;
        default:
            std::cout << "잘못된 번호를 입력하셨습니다 \n" << std::endl;
            break;
        }
    }
}
