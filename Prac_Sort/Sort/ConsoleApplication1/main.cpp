#include <iostream>
#include "quick_sort.h"



int main() 
{
	Cquick_sort sort;

	const int size = 10;
	int arr[size] = { 6, 5, 7, 9, 8, 4, 3, 2, 1, 10 };

	
	sort.print_arr(arr, arr[0], arr[size - 1]);
	sort.quick_sort(arr, 0, arr[size - 1]);
	sort.print_arr(arr, arr[0], arr[size - 1]);

	return 0;
}


