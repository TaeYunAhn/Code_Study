#pragma once
#include <string>

// ��������� Ŭ���� �� ��� ����
class CPerson
{

public:

    //��� ����(Ư¡)
    double weight; // ������
    double height; // Ű
    double IQ;
    std::string name;


    // ��� �Լ�(�ൿ) == �޼ҵ�
    CPerson(); // ������
    ~CPerson(); // �Ҹ���

    void eat();
    void walk();
    void study();
    void sleep();
    void introduce();
};

