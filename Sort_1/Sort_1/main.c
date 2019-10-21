#define _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

int main()
{
	int arr1[] = { 5, 2, 4, 6, 3, 1, 8, 7, 9, 12, 10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	
	//InsertionSort1(arr1, 0, sz - 1);
	//Print(arr1, 0, sz - 1);
	//InsertionSort2(arr1, 0, sz - 1);
	//Print(arr1, 0, sz - 1);

	//InsertionSort3(arr1, 0, sz - 1);
	//Print(arr1, 1, sz - 1);

	//BinInsertSort(arr1, 0, sz - 1);
	//Print(arr1, 0, sz - 1);

	TwoWayInsertSort(arr1, 0, sz - 1);
	Print(arr1, 0, sz - 1);

	TestSort();

	printf("\n");
	system("pause");
	return 0;
}