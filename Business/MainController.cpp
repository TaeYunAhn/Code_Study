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
        std::cout << "1.�ű�ä��" << std::endl;
        std::cout << "2.������" << std::endl;
        std::cout << "3.���� ������� ���" << std::endl;
        std::cout  << "4.��ü ������� ���" << std::endl;
        std::cout  << "5.���α׷� ����" << std::endl;
        std::cout << "����: ";
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
            std::cout << "�߸��� ��ȣ�� �Է��ϼ̽��ϴ� \n" << std::endl;
            break;
        }
    }
}
