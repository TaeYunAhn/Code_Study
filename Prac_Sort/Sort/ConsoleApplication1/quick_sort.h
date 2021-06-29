#pragma once


class Cquick_sort
{

public:
	Cquick_sort();
	~Cquick_sort();

	
	void quick_sort(int arr[], int start, int end, int size);
	void swap(int* start, int* end);
	int partition(int arr[], int start, int end);
	void quick_sort(int arr[], int size); // 더이상 나눌 수 없을 때
	void print_arr(int arr[], int size);





	//배열, 배열을 옮길 배열, 시작점, 끝점;

};

