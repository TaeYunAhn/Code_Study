
#include <iostream>
#include "Name.h"

int main()
{
    Name manClerk("Lee", "ABCEng", "010-1111-2222", comp_pos::CLERK);
    Name manSENIOR("Hong", "OrangeEng", "010-3333-4444", comp_pos::SENIOR);
    Name manAssist("Kim", "SoGoodComp", "010-5555-6666", comp_pos::ASSIT);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}

//Name
//Company
//Phone_Num
//Pos