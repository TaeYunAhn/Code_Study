#include <iostream>
#include "Person.h"

// cpp������ Ŭ���� ����
// ��� ���� �ʱ�ȭ �� ��� �Լ� ����

CPerson::CPerson() // ������
{
    // �����ڴ� ���� ��� ������ �ʱ�ȭ�� ���
    // ��ü�� �������ڸ��� �� ���� ���
    std::cout << "�����ڰ� ȣ��Ǿ����ϴ�" << std::endl;

    weight = 0.0;
    height = 0.0;
    IQ = 100.0;
    name = "ö��";

}

CPerson::~CPerson() // �Ҹ���
{
    // ��ü�� �Ҹ�ɶ� �� ���� ���
    // ���� �Ҵ�� ��� ������ �Ҹ��ؾ� ��
    std::cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�" << std::endl;
}

void CPerson::eat()
{
    std::cout << name << "�� �Դ´�." << std::endl;
}

void CPerson::walk()
{
    std::cout << name << "�� �ȴ´�." << std::endl;
}

void CPerson::study()
{
    std::cout << name << "�� �����Ѵ�." << std::endl;
}

void CPerson::sleep()
{
    std::cout << name << "�� �ܴ�." << std::endl;
}

void CPerson::introduce()
{
    std::cout << "�� Ű�� " << height << "�̰�, �����Դ� " << weight << "�Դϴ�.\n";
}