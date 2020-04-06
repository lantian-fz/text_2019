#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void Print(int arr[],int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void BubbleSort_1(int arr[],int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j]>arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

void Selection_1(int arr[], int len)//选择排序
{
	for (int i = 0; i < len - 1; i++)//len-1最后一个元素不需要比较
	{
		int minindex = i;//最小索引的下标
		for (int j = i + 1; j < len;j++)
		if (arr[minindex]>arr[j])
			minindex = j;
		swap(&arr[i], &arr[minindex]);
	}
}

void Insertion_1(int arr[], int len)//插入排序
{
	for (int i = 1; i < len; i++)
	{ 
		for (int j = i; j > 0; j--)
		{
			if (arr[j-1] > arr[j])
				swap(&arr[j-1], &arr[j]);
			else
				break;
		}
	}
}