#include <iostream>
#include "quick_sort.h"

using namespace std;

Cquick_sort::Cquick_sort()
{

}
Cquick_sort::~Cquick_sort()
{

}

void Cquick_sort::quick_sort(int arr[], int size)
{
	quick_sort(arr, 0, arr[size - 1], size);
}

void Cquick_sort::quick_sort(int arr[], int start, int end, int size)
{
	if (start == end || !arr[start])
		return;

	int temp_arr = partition(arr, start, end);
	if (start < temp_arr - 1)
	{
		quick_sort(arr, start, temp_arr - 1, size);
	}
	if (temp_arr < end)
	{
		quick_sort(arr, temp_arr, end, size);
	}

}

void Cquick_sort::swap(int *start, int *end)
{
	int temp = *start;
	*start = *end;
	*end = temp;
}

int Cquick_sort::partition(int arr[], int start, int end)
{
	int pivot = arr[(end - start) / 2];
	while (start <= end)
	{
		while (arr[start] < pivot || arr[end] > pivot)
		{
			if (arr[start] > arr[end])
			{
				swap(&arr[start], &arr[end]);
			}
			start++;
			end++;
		}
	}
	return start;
}



void Cquick_sort::print_arr(int arr[], int size)
{
	int i = 0;
	while (arr[i] != arr[size - 1])
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}