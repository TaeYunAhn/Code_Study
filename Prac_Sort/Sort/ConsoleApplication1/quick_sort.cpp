#include <iostream>
#include "quick_sort.h"

using namespace std;

Cquick_sort::Cquick_sort()
{

}
Cquick_sort::~Cquick_sort()
{

}


void Cquick_sort::quick_sort(int arr[], int start, int end)
{
	if (start == end || !arr[start])
		return;

	int temp_arr = partition(arr, start, end);
	if (start < temp_arr - 1)
	{
		quick_sort(arr, start, temp_arr - 1);
	}
	if (temp_arr < end)
	{
		quick_sort(arr, temp_arr, end);
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
				start++;
				end++;
			}
		}
	}
	return (start);
}

void Cquick_sort::quick_sort(int arr[])
{
	quick_sort(arr, 0, sizeof(arr));
}

void Cquick_sort::print_arr(int arr[], int start, int end)
{
	while (arr[start] != arr[end])
	{
		cout << arr[start] << endl;
		start++;
	}
	

}