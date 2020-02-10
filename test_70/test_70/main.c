#define _CRT_SECURE_NO_WARNINGS 1
//给定一个非空数组，返回此数组中第三大的数。如果不存在，则返回数组中最大的数。要求算法时间复杂度必须是O(n)。
//示例 1:输入: [3, 2, 1]     输出: 1      解释: 第三大的数是 1.
//示例 2:输入: [1, 2]        输出: 2      解释: 第三大的数不存在, 所以返回最大的数 2 .
//示例 3:输入: [2, 2, 3, 1]  输出: 1      解释: 注意，要求返回第三大的数，是指第三大且唯一出现的数。
//存在两个值为2的数，它们都排第二。

#include <stdio.h>

int thirdMax(int* nums, int numsSize)
{
	int count = 0;
	int max = nums[0];
	int max_third = 0;
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i]>max)
			max = nums[i];
	}
	if (numsSize > 2)
	{
		max_third = max;
		for (int i = 0; i < numsSize; i++)
		{
			if (max_third>nums[i])
				count++;
			if (count == numsSize - 3)
				return nums[i];
		}
	}
	return max;
}

void main()
{
	int arr[] = { 3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", thirdMax(arr, sz));
}