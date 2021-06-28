#include <iostream>
#include "quick_sort.h"

int main() {
	const int SIZE = 10;
	int data[SIZE] = { 6, 5, 7, 9, 8, 4, 3, 2, 1, 10 };

	printf("Original Data.......................\n");
	print(data, SIZE);
	printf("....................................\n");

	quick_sort(data, 0, SIZE - 1);

	printf("After sorting........................\n");
	print(data, SIZE);
	return 0;
}


