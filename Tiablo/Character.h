#pragma once
#include <string>
using namespace std;

//직업의 종류
enum enJob
{
    enNecromancer,  // 0
    enWitch_doctor, // 1
    enDemon_Hunter, // 2
    enJob_Total,
    //Wizard,     // 3
    //Crusader    // 4
};

// 캐릭터 상태
struct Status
{
    Status() {}
    Status(int _str, int _agi, double _intel, int _luck, double _HP, double _MP)
        : str(_str), agi(_agi), intel(_intel), luck(_luck), HP(_HP), MP(_MP) {}

    int str;
    int agi;
    double intel;
    int luck;
    double HP;
    double MP;
};

class Character
{
public:
    Character();
    ~Character();
    Character(string _name, bool _gender) : name(_name), gender(_gender) {}

    virtual int plus_HP(int amount) = 0; // 순수 가상함수, 순수 가상함수가 하나라도 있으면 Character는 추상 클래스
    virtual int plus_agi(int amount) {}
    virtual void setStauts(const Status &s)
    {
        status = s;
    }

    void print()
    {
        printf("name(%s), gender(%d), status(%d, %d, %g, %d, %g, %g)\n",
               name.c_str(), gender, status.str, status.agi, status.intel, status.luck, status.HP, status.MP);
    }

private:
    string name;
    bool gender;

protected:
    Status status;
};

class Necromancer : public Character
{
public:
    Necromancer(string name, bool gender) : Character(name, gender) {}
    ~Necromancer();
    void explosion();
    virtual int plus_HP(int amount)
    {
        status.HP += (amount + 5);
    }
    virtual int plus_agi(int amount)
    {
        status.agi += amount;
    }
};

class Witch_doctor : public Character
{
public:
    Witch_doctor(string name, bool gender) : Character(name, gender) {}
    void heal();
    int plus_intel(int amount)
    {
        status.intel += amount;
    }

    virtual int plus_HP(int amount)
    {
        status.HP += (amount - 5);
    }
};

class Demon_Hunter : public Character
{
public:
    Demon_Hunter(string name, bool gender) : Character(name, gender) {}
    void hunting();
    int plus_str(int amount)
    {
        status.str += amount;
    }
    virtual int plus_HP(int amount)
    {
        status.HP += (amount + 15);
    }
};

/*class select_job
{
private:
public:
    job Necromancer();
    job Witch_doctor();
    //job Demon_Hunter();
    //job Wizard();
    //job Crusader();
}; */
