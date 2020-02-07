#define _CRT_SECURE_NO_WARNINGS 1
//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
//示例 1:输入: [1,2,3,1]     输出: true
//示例 2:输入: [1,2,3,4]     输出: false
//示例 3:输入: [1,1,1,3,3,4,3,2,4,2]     输出: true
#include <stdio.h>
#include <stdlib.h>
//法一：暴力法，不推荐
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
//法二：暴力法的改进，第n个元素与前n-1个元素比较
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

//法三：先排序，再比较相邻是否有相同元素
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