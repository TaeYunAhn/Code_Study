#pragma once


class Cquick_sort
{

public:
	Cquick_sort();
	~Cquick_sort();

	
	void quick_sort(int arr[], int start, int end, int size);
	void swap(int* start, int* end);
	int partition(int arr[], int start, int end);
	void quick_sort(int arr[], int size); // ���̻� ���� �� ���� ��
	void print_arr(int arr[], int size);





	//�迭, �迭�� �ű� �迭, ������, ����;

};

