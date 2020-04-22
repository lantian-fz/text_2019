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

int *tmp = NULL;

void merge(int arr[], int lo, int mid, int hi)
{
	int i = lo;
	int p1 = lo;//前半组数据的第一项
	int p2 = mid + 1;//后半组数据的第一项
	//对两组数据比较后赋值到辅助数组
	while (p1 <= mid&&p2 <= hi)
	{
		if (arr[p1] < arr[p2])
			tmp[i++] = arr[p1++];
		else
			tmp[i++] = arr[p2++];
	}
	//余下部分接到辅助数据后面（余下部分已排好序）
	while (p1 <= mid)
		tmp[i++] = arr[p1++];
	while (p2 <= hi)
		tmp[i++] = arr[p2++];
	//将辅助数组中排好序的数据拷贝到原数组
	for (int j = lo; j <= hi; j++)
		arr[j] = tmp[j];
}

void MergeSort(int arr[], int lo, int hi)
{
	if (hi <= lo)
		return;
	int mid = (hi - lo) / 2 + lo;
	MergeSort(arr, lo, mid);
	MergeSort(arr, mid + 1, hi);
	merge(arr, lo, mid, hi);
}

void Merge_1(int arr[], int len)//归并排序
{
	int lo = 0;
	tmp = (int*)malloc(sizeof(int)*len);//辅助数组
	int hi = len - 1;
	MergeSort(arr, lo, hi);
}

int quick(int arr[], int lo, int hi)
{
	//确定分界值
	int key = arr[lo];
	//定义两个指针，分别指向待切分数组的最小索引处和最大索引处的下一个位置
	int left = lo;
	int right = hi + 1;

	//切分
	while (1)
	{
		//先从右往左扫描，移动right指针，找到一个比分界值小的元素停止
		while (key < arr[--right])
		{
			if (right == lo)
				break;
		}
		//再从左往右扫描，移动left指针，找到一个比分界值大的元素停止
		while (key > arr[++left])
		{
			if (left == hi)
				break;
		}
		//判断left>=right,如果是，则证明扫描完毕，结束循环，否则交换元素
		if (left >= right)
			break;
		else
			swap(&arr[left], &arr[right]);
	}
	//交换分界值
	swap(&arr[lo], &arr[right]);
	return right;
}

void QuickSort(int arr[], int lo, int hi)
{
	if (hi <= lo)
		return;
	int index = quick(arr, lo, hi);//返回分界值所在索引
	QuickSort(arr, lo, index - 1);
	QuickSort(arr, index + 1, hi);
}

void Quick_1(int arr[], int len)//快速排序
{
	int lo = 0;
	int hi = len - 1;
	QuickSort(arr, lo, hi);
}