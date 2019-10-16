#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
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