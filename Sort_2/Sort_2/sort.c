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

void Insertion_1(int arr[], int len)//插入排序 直接交换
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

void Insertion_2(int arr[], int len)//插入排序 数据覆盖
{
	for (int i = 1; i < len; i++)
	{
		int key = arr[i];
		int j = 0;
		for (j = i; j > 0; j--)
		{
			if (key < arr[j - 1])
				arr[j] = arr[j - 1];
			else
				break;
		}
		arr[j] = key;
	}
}

void Shell_1(int arr[], int len)//希尔排序
{
	int h = 1;//增量
	while (h < len / 2)//确定增量初始值
		h = 2 * h + 1;
	while (h >= 1)
	{
		for (int i = h; i < len; i++)
		{
			for (int j = i; j >= h; j -= h)
			{
				if (arr[j - h]>arr[j])
					swap(&arr[j - h], &arr[j]);
				else
					break;
			}
		}
		h /= 2;//增量缩小规则
	}
}

void Shell_2(int arr[], int len)//希尔排序 数据覆盖
{
	int h = 1;//增量
	while (h < len / 2)//确定增量初始值
		h = 2 * h + 1;
	while (h >= 1)
	{
		for (int i = h; i < len; i++)
		{
			int key = arr[i];
			int j = 0;
			for (j = i; j >= h; j -= h)
			{
				if (key < arr[j - h])
					arr[j] = arr[j - h];
				else
					break;
			}
			arr[j] = key;
		}
		h /= 2;//增量缩小规则
	}
}