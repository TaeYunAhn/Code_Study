#pragma once
#include <string>

// 헤더에서는 클래스 및 멤버 선언만
class CPerson
{

public:

    //멤버 변수(특징)
    double weight; // 몸무게
    double height; // 키
    double IQ;
    std::string name;


    // 멤버 함수(행동) == 메소드
    CPerson(); // 생성자
    ~CPerson(); // 소멸자

    void eat();
    void walk();
    void study();
    void sleep();
    void introduce();
};

