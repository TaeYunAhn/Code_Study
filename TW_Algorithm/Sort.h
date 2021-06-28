#pragma once
#include <vector>
class CSort
{
public:
	CSort() = default;
	~CSort() = default;

	void merge_sort(std::vector<int>& list, int start, int end);
private:
	void merge(std::vector<int>& list, int start, int mid, int end);

};