#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Print(int arr[], int left, int right)
{
	for (int i = left; i <= right; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void InsertionSort1(int *arr, int left, int right)//直接插入排序 直接交换
{
	for (int i = left + 1; i <= right; i++)
	{
		int end = i - 1;
		while (end >= left&&arr[end + 1] < arr[end])
		{
			Swap(&arr[end], &arr[end + 1]);
			end--;
		}
	}
}

void InsertionSort2(int *arr, int left, int right)//直接插入排序 数据覆盖
{
	for (int i = left + 1; i <= right; i++)
	{
		int end = i - 1;
		int key = arr[i];
		while (end >= left&&key < arr[end])
		{
			arr[end + 1] = arr[end];
			end--;
		}
		arr[end + 1] = key;
	}
}

void InsertionSort3(int *arr, int left, int right)//直接插入排序 加哨兵位
{
	for (int i = left + 1; i <= right; i++)
	{
		int end = i - 1;
		arr[0] = arr[i];
		while (arr[0] < arr[end])
		{
			arr[end + 1] = arr[end];
			end--;
		}
		arr[end+1] = arr[0];
	}
}

void BinInsertSort(int *arr, int left, int right)//二分插入排序
{
	int low = 0;//低位置
	int high = 0;//高位置
	for (int i = left + 1; i <= right; i++)
	{
		int tmp = arr[i];
		low = left;
		high = i - 1;
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (tmp < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		for (int j = i; j>low; j--)
			arr[j] = arr[j - 1];
		arr[low] = tmp;
	}
}

void TestSort()//排序速度比较
{
	int n = 10000;
	int *a1 = (int *)malloc(sizeof(int)*n);
	int *a2 = (int *)malloc(sizeof(int)*n);
	int *a3 = (int *)malloc(sizeof(int)*n);
	int *a4 = (int *)malloc(sizeof(int)*n);
	int *a5 = (int *)malloc(sizeof(int)*n);
	size_t begin1 = 0;
	size_t begin2 = 0;
	size_t begin3 = 0;
	size_t begin4 = 0;
	size_t end1 = 0;
	size_t end2 = 0;
	size_t end3 = 0;
	size_t end4 = 0;

	srand((unsigned)time(0));
	for (int i = 0; i < n; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		//a5[i] = a1[i];
	}

	begin1 = clock();
	InsertionSort1(a1, 0, n - 1);
	end1 = clock();
	printf("InsertionSort1: %u\n", end1 - begin1);

	begin2 = clock();
	InsertionSort2(a2, 0, n - 1);
	end2 = clock();
	printf("InsertionSort2: %u\n", end2 - begin2);

	begin3 = clock();
	InsertionSort3(a3, 0, n - 1);
	end3 = clock();
	printf("InsertionSort3: %u\n", end3 - begin3);

	begin4 = clock();
	BinInsertSort(a4, 0, n - 1);
	end4 = clock();
	printf("BinInsertSort: %u\n", end4 - begin4);
}