#include <iostream>
#include "quick_sort.h"



int main() 
{
	Cquick_sort sort;

	const int size = 6;
	int arr[size] = { 8,1,3,7,4,5};

	
	sort.print_arr(arr, size);
	sort.quick_sort(arr, 0, size - 1);
	sort.print_arr(arr, size);

	return 0;
}


