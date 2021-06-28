#include "Recursive.h"
#include <iostream>

// 재귀의 조건
// 1. 반복 호출이 끝나는 시점(Base case)
// 2. 반복적인 부분구조(Recursive condition)
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
        // 원반 N-1개는 Mid로 옮김 -> 가장 큰 원반 하나를 To로 옮김 -> Mid에 있는 원반들 To로 옮김
        hanoi(N-1, From, To, Temp);
        Move(From, To);
        hanoi(N-1, Temp, From, To);
    }
}