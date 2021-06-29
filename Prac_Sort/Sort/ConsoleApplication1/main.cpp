#include <iostream>
#include "quick_sort.h"



int main() 
{
	Cquick_sort sort;

	const int size = 10;
	int arr[size] = { 6, 5, 7, 9, 8, 4, 3, 2, 10, 1 };

	
	sort.print_arr(arr, size);
	sort.quick_sort(arr, 0, arr[size - 1], size);
	sort.print_arr(arr, size);

	return 0;
}


