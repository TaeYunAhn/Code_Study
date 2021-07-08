#include <iostream>
#include "Person.h"

// cpp에서는 클래스 구현
// 멤버 변수 초기화 및 멤버 함수 구현

CPerson::CPerson() // 생성자
{
    // 생성자는 보통 멤버 변수의 초기화를 담당
    // 객체가 생성되자마자 할 일을 담당
    std::cout << "생성자가 호출되었습니다" << std::endl;

    weight = 0.0;
    height = 0.0;
    IQ = 100.0;
    name = "철수";

}

CPerson::~CPerson() // 소멸자
{
    // 객체가 소멸될때 할 일을 담당
    // 동적 할당된 멤버 변수를 소멸해야 함
    std::cout << "소멸자가 호출되었습니다" << std::endl;
}

void CPerson::eat()
{
    std::cout << name << "은 먹는다." << std::endl;
}

void CPerson::walk()
{
    std::cout << name << "은 걷는다." << std::endl;
}

void CPerson::study()
{
    std::cout << name << "은 공부한다." << std::endl;
}

void CPerson::sleep()
{
    std::cout << name << "은 잔다." << std::endl;
}

void CPerson::introduce()
{
    std::cout << "내 키는 " << height << "이고, 몸무게는 " << weight << "입니다.\n";
}