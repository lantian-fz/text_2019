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

void Selection_1(int arr[], int len)//ѡ������
{
	for (int i = 0; i < len - 1; i++)//len-1���һ��Ԫ�ز���Ҫ�Ƚ�
	{
		int minindex = i;//��С�������±�
		for (int j = i + 1; j < len;j++)
		if (arr[minindex]>arr[j])
			minindex = j;
		swap(&arr[i], &arr[minindex]);
	}
}

void Insertion_1(int arr[], int len)//�������� ֱ�ӽ���
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

void Insertion_2(int arr[], int len)//�������� ���ݸ���
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

void Shell_1(int arr[], int len)//ϣ������
{
	int h = 1;//����
	while (h < len / 2)//ȷ��������ʼֵ
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
		h /= 2;//������С����
	}
}

void Shell_2(int arr[], int len)//ϣ������ ���ݸ���
{
	int h = 1;//����
	while (h < len / 2)//ȷ��������ʼֵ
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
		h /= 2;//������С����
	}
}

int *tmp = NULL;

void merge(int arr[], int lo, int mid, int hi)
{
	int i = lo;
	int p1 = lo;
	int p2 = mid + 1;
	while (p1 <= mid&&p2 <= hi)
	{
		if (arr[p1] < arr[p2])
			tmp[i++] = arr[p1++];
		else
			tmp[i++] = arr[p2++];
	}
	while (p1 <= mid)
		tmp[i++] = arr[p1++];
	while (p2 <= hi)
		tmp[i++] = arr[p2++];
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

void Merge_1(int arr[], int len)//�鲢����
{
	int lo = 0;
	tmp = (int*)malloc(sizeof(int)*len);//��������
	int hi = len - 1;
	MergeSort(arr, lo, hi);
}