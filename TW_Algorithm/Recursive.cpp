#include "Recursive.h"
#include <iostream>

// ����� ����
// 1. �ݺ� ȣ���� ������ ����(Base case)
// 2. �ݺ����� �κб���(Recursive condition)
int CRecursive::sum(int n)
{
    if ( n == 1 )
        return n;

    return n + sum(n-1);
}


int CRecursive::fibonacci(int n)
{
    if ( n <= 2 )
        return 1;

    return fibonacci(n -1) + fibonacci(n-2);
}

void CRecursive::Move(int From, int To)
{
    printf("%d => %d\n", From, To);
}

void CRecursive::hanoi(int N, int From, int Temp, int To)
{
    if ( N == 1 )
    {
        Move(From, To); // Base case
    }
    else
    {
        // ���� N-1���� Mid�� �ű� -> ���� ū ���� �ϳ��� To�� �ű� -> Mid�� �ִ� ���ݵ� To�� �ű�
        hanoi(N-1, From, To, Temp);
        Move(From, To);
        hanoi(N-1, Temp, From, To);
    }
}