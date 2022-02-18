#include "MainController.h"
#include "AccController.h"

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
        cout << "-----Menu-----" << endl;
        cout << "1.회원가입" << endl;
        cout << "2.로그인" << endl;
        cout << "3.종료" << endl;
        cout << "선택: ";
        cin >> sel;
        cout << "\n";

        switch (sel)
        {
        case 1:
        {

            string ID;
            string PW;
            cout << "ID : " << endl;
            cin >> ID;
            cout << "PW : " << endl;
            cin >> PW;
            const EN_RESULT res = accController->SignUP(ID, PW);
        }
        break;
        case 2:
        {
            string ID;
            string PW;
            cout << "ID : " << endl;
            cin >> ID;
            cout << "PW : " << endl;
            cin >> PW;
            const EN_RESULT res = accController->Login(ID, PW);
        }
        break;
        case 3:
        {
            return;
        }
        break;
        }
    }
}

void MainController::MailStart()
{
    while (1)
    {
        int sel = 0;
        cout << "-----Menu-----" << endl;
        cout << "1.보관함" << endl;
        cout << "2.메일 쓰기" << endl;
        cout << "3.로그아웃" << endl;
        cout << "4.종료" << endl;
        cout << "선택: ";
        cin >> sel;
        cout << "\n";

        switch (sel)
        {
        case 1:
        {

            string ID;
            string PW;
            cout << "ID : " << endl;
            cin >> ID;
            cout << "PW : " << endl;
            cin >> PW;
            const EN_RESULT res = accController->SignUP(ID, PW);
        }
        break;
        case 2:
        {
            string ID;
            string PW;
            cout << "ID : " << endl;
            cin >> ID;
            cout << "PW : " << endl;
            cin >> PW;
            const EN_RESULT res = accController->Login(ID, PW);
        }
        break;
        case 3:
        {
            return;
        }
        break;
        }
    }
}
