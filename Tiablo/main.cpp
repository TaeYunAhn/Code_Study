#include "Fac_select_job.h"
#include "Character.h"
/*
int select_menu()
{

    while (1)
    {
        int sel = 0;

        cout << "-------------------" << endl;
        cout << "1.캐릭터 생성" << endl;
        cout << "2.캐릭터 능력치 보기" << endl;
        cout << "3.생성된 캐릭터 리스트" << endl;
        cin >> sel;
        cout << "\n";

        switch (sel)
        {
        case 1:
        {
            string name;
            bool gender;
            int job;

            cout << "이름을 입력하세요 : " << endl;
            cin >> name;
            cout << endl;

            cout << "성별을 고르세요 1.남자, 2.여자" << endl;
            cin >> gender;
            cout << endl;

            cout << "직업을 고르세요" << endl;
            cout << "1.네크로멘서" << endl;
            cout << "2.부두술사" << endl;
            cout << "3.데몬헌터" << endl;
            cin >> job;
        }
        }
    }
}
*/

int main()
{
    //select_menu();

    //ch.Make_Character(new character.Make_Demon_Hunter);
    //ch.Make_Character(new character.Make_Demon_Hunter);
    //ch.Make_Character(new character.Make_Demon_Hunter);

    Fac_select_job fac;
    Character *nec = fac.makeJob(enNecromancer, "Nec1", true);
    Character *wi = fac.makeJob(enWitch_doctor, "Witch1", true);
    Character *dem = fac.makeJob(enDemon_Hunter, "Dem1", true);

    for (int i = 0; i < enJob_Total; ++i)
    {
        fac.makeJob(i, to_string(i), true)->process();
    }

    nec->setStauts(Status(10, 5, 10.5, 7, 500.0, 300.0));
    nec->plus_agi(10000);
    nec->plus_HP(40);
    printf("----------nec print------------\n");
    nec->print();

    wi->plus_agi(10);
    printf("----------wi print------------\n");
    wi->print();

    dem->plus_HP(40);
    printf("----------dem print------------\n");
    dem->print();

    delete nec;
    delete wi;
    delete dem;
    return 0;
}