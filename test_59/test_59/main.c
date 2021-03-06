#define _CRT_SECURE_NO_WARNINGS 1
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
//你可以假设数组中无重复元素。
//示例 1:输入 : [1, 3, 5, 6], 5     输出 : 2
//示例 2 :输入 : [1, 3, 5, 6], 2    输出 : 1
//示例 3 :输入 : [1, 3, 5, 6], 7    输出 : 4
#include <stdio.h>

int searchInsert(int nums[], int numsSize, int target)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= target)
			break;
	}
	return i;
}

void main()
{
	int nums[] = { 1, 3, 5, 6 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int target = 7;

	printf("%d\n",searchInsert(nums,sz,target));
}