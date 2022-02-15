#pragma once
#include "Character.h"
class Fac_select_job
{
private:
    /* data */
public:
    Fac_select_job();
    ~Fac_select_job();

    Character *makeJob(enJob job, string name, bool gender);

    //class Make_Necromancer(string name, bool gender, Make_Character job) : Make_Character(string name, bool gender, Make_Character job); //강령술사
    //class Make_Witch_doctor();                                                                                                           //부두술사
    //class Make_Demon_Hunter();                                                                                                           //데몬헌터
};
