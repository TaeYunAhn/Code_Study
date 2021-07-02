#include <iostream>
#include "quick_sort.h"

using namespace std;

Cquick_sort::Cquick_sort()
{

}
Cquick_sort::~Cquick_sort()
{

}

//void Cquick_sort::quick_sort(int arr[], int size)
//{
//	quick_sort(arr, 0, arr[size - 1], size);
//}

void Cquick_sort::quick_sort(int arr[], int start, int end)
{
	if (start >= end)
		return;


	const int pivot = start;
	int left = start+1;
	int right = end;

	while ( left <= right )
	{

		while(arr[left] < arr[pivot] )
			left++;

		while( arr[right] > arr[pivot] )
			right--;

		if ( left > right )
			swap(&arr[pivot], &arr[right]);
		else
			swap(&arr[left], &arr[right]);
	}

	quick_sort(arr, start, right-1);
	quick_sort(arr, right+1, end);


	/*const int pivot = (end + start) / 2;
	int left = start;
	int right = end;

	while ( left < right )
	{
		while(left <= pivot && arr[left] < arr[pivot] )
			left++;

		while(pivot <= right && arr[right] > arr[pivot] )
			right--;


		swap(&arr[left], &arr[right]);
	}

	quick_sort(arr, start, pivot-1);
	quick_sort(arr, pivot+1, end);*/

	/*if (start < temp_arr - 1)
		quick_sort(arr, start, temp_arr - 1);

	if (temp_arr < end)
		quick_sort(arr, temp_arr, end);*/

}

void Cquick_sort::swap(int *start, int *end)
{
	int temp = *start;
	*start = *end;
	*end = temp;
}

int Cquick_sort::partition(int arr[], int start, int end)
{
	/*const int pivot = (end + start) / 2;
	while (start <= pivot || end >= pivot)
	{
		if ( start >= end )
			break;

		if (arr[start] > arr[pivot] && arr[end] < arr[pivot])
		{
			swap(&arr[start], &arr[end]);
		}
		start++;
		end--;
	}

	return pivot;*/


	const int pivot = (end + start) / 2;
	int left = start;
	int right = end;

	if ( start >= end )
		return start;

	while ( left < pivot || right > pivot )
	{
		while(left <= pivot && arr[left] < arr[pivot] )
			left++;

		while(pivot <= right && arr[right] > arr[pivot] )
			right--;

		swap(&arr[left], &arr[right]);
	}

	return pivot;
}



void Cquick_sort::print_arr(int arr[], int size)
{
	int i = 0;
	while (arr[i] != arr[size])
	{
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}

