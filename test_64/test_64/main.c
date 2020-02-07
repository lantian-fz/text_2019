#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
//ʾ�� 1:����: [1,2,3,1]     ���: true
//ʾ�� 2:����: [1,2,3,4]     ���: false
//ʾ�� 3:����: [1,1,1,3,3,4,3,2,4,2]     ���: true
#include <stdio.h>
#include <stdlib.h>
//��һ�������������Ƽ�
int containsDuplicate1(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if (nums[i] == nums[j])
				return 1;
		}
	}
	return 0;
}
//�������������ĸĽ�����n��Ԫ����ǰn-1��Ԫ�رȽ�
int containsDuplicate2(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (nums[j] == nums[i])
				return 1;
		}
	}
	return 0;
}

//�������������ٱȽ������Ƿ�����ͬԪ��
int Compare(const void *x, const void *y)
{
	return *((int*)x) - *((int*)y);
}

void BubbleSort(int* nums,int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (nums[j]>nums[j + 1])
			{
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
}

int containsDuplicate3(int* nums, int numsSize)
{
	//qsort(nums, numsSize, sizeof(int), Compare);
	BubbleSort(nums, numsSize);
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
			return 1;
	}
	return 0;
}

void main()
{
	int arr[] = { 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", containsDuplicate3(arr,sz));
}