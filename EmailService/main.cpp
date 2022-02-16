#include "AccController.h"
#include "MainController.h"
#include <iostream>
using namespace std;

/*oid startEmail()
{
    int num;
    cout << "프로그램 실행" << endl;
    cout << "1. 회원가입" << endl;
    cout << "2. 로그인" << endl;
    cout << "3. 프로그램 종료" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
    {
        while (1)
        {
            string ID;
            string PW;

            cout << "아이디를 입력하세요 : " << endl;
            cin >> ID;
            cout << endl;

            cout << "비밀번호를 입력하세요 : " << endl;
            cin >> PW;
            cout << endl;

            if (sizeof(ID) == 0 || sizeof(PW) == 0)
            {
                cout << "잘못 입력하셨습니다." << endl;
                return startEmail();
            }

            cout << "회원가입 완료" << endl;
            return startEmail();
        }
    }
    case 2:
    }
    string ID;
    string PW;

    cout << "아이디를 입력하세요 : " << endl;
    cin >> ID;
    cout << endl;

    cout << "비밀번호를 입력하세요 : " << endl;
    cin >> PW;
    cout << endl;
*/
int main()
{
    MainController MAcc;
    MAcc.start();

    //startEmail()
    /* 프로그램 실행
    1. 회원가입 -> ID, PW, Back
    2. 로그인 -> 맞는지 확인 -> Show -> All
    3. 종료
    
    // 회원가입 or 로그인 선택

    // 로그인 체크 ->
    // 기능 선택 
    */

    //SignUP(email, password);
}