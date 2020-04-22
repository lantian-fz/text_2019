#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void test1()
{
	int arr[] = { 5, 3, 1, 4, 7, 2, 6, 9, 8, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort_1(arr, len); //稳定的排序
	//Selection_1(arr, len);//不稳定的排序
	//Insertion_1(arr, len);//稳定的排序
	//Insertion_2(arr, len);
	//Shell_2(arr, len);//不稳定排序
	//Merge_1(arr, len);//稳定的排序
	Quick_1(arr, len);//不稳定的排序
	Print(arr, len);
}

void test2()//测试速度
{
	int n = 10000;
	int *a1 = (int *)malloc(sizeof(int)*n);
	int *a2 = (int *)malloc(sizeof(int)*n);
	int *a3 = (int *)malloc(sizeof(int)*n);
	int *a4 = (int *)malloc(sizeof(int)*n);
	int *a5 = (int *)malloc(sizeof(int)*n);
	int *a6 = (int *)malloc(sizeof(int)*n);
	int *a7 = (int *)malloc(sizeof(int)*n);
	int *a8 = (int *)malloc(sizeof(int)*n);
	size_t begin = 0;
	size_t end = 0;

	srand((unsigned)time(0));
	for (int i = 0; i < n; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];
		a8[i] = a1[i];
	}

	begin = clock();
	BubbleSort_1(a1, n);
	end = clock();
	printf("BubbleSort_1: %u\n", end - begin);

	begin = clock();
	Selection_1(a2, n);
	end = clock();
	printf("Selection_1: %u\n", end - begin);

	begin = clock();
	Insertion_1(a3, n);
	end = clock();
	printf("Insertion_1: %u\n", end - begin);

	begin = clock();
	Insertion_2(a4, n);
	end = clock();
	printf("Insertion_2: %u\n", end - begin);

	begin = clock();
	Shell_1(a5, n);
	end = clock();
	printf("Shell_1: %u\n", end - begin);

	begin = clock();
	Shell_2(a6, n);
	end = clock();
	printf("Shell_2: %u\n", end - begin);

	begin = clock();
	Merge_1(a7, n);
	end = clock();
	printf("Merge_1: %u\n", end - begin);

	begin = clock();
	Quick_1(a8, n);
	end = clock();
	printf("Quick_1: %u\n", end - begin);
}

int main()
{
	test2();

	return 0;
}