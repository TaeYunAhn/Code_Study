#pragma once


class Cquick_sort
{

public:
	Cquick_sort();
	~Cquick_sort();

	
	void quick_sort(int arr[], int start, int end);
	void swap(int* start, int* end);
	int partition(int arr[], int start, int end);
	void quick_sort(int arr[]); // ���̻� ���� �� ���� ��
	void print_arr(int arr[], int start, int end);





	//�迭, �迭�� �ű� �迭, ������, ����;

};

