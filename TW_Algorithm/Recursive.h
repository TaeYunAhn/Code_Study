#pragma once

class CRecursive
{
public:
	CRecursive() = default;
	~CRecursive() = default;

	int sum(int n);
	int fibonacci(int n);
	void hanoi(int N, int From, int Temp, int To);

private:
	void Move(int From, int To);
};