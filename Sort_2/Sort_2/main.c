#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void test1()
{
	int arr[] = { 5, 3, 1, 4, 7, 2, 6, 9, 8, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort_1(arr, len);
	//Selection_1(arr, len);
	//Insertion_1(arr, len);
	//Insertion_2(arr, len);
	Shell_2(arr, len);
	Print(arr, len);
}

int main()
{
	test1();

	return 0;
}