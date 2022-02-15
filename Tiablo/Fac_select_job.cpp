#include "Fac_select_job.h"

Fac_select_job::Fac_select_job(/* args */)
{
}

Fac_select_job::~Fac_select_job()
{
}

Character *Fac_select_job::makeJob(enJob job, string name, bool gender)
{
    switch (job)
    {
    case enNecromancer:
        return new Necromancer(name, gender);
    case enWitch_doctor:
        return new Witch_doctor(name, gender);
    case enDemon_Hunter:
        return new Demon_Hunter(name, gender);
    default:
        return nullptr;
    }
}