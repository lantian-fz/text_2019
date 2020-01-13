#define _CRT_SECURE_NO_WARNINGS 1
//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
//示例 1:给定 nums = [3, 2, 2, 3], val = 3,
//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
//
//示例 2:给定 nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,   0 1 2 3 0 4 2 2
//函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
#include <stdio.h>

int removeElement(int nums[], int numsSize, int val)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == val)
		{
			for (int j = i + 1; j < numsSize; j++)
			{
				nums[j - 1] = nums[j];
			}
			numsSize--;
			i--;
		}
	}
	return numsSize;
}

void main()
{
	int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int val = 2;
	int newsz = removeElement(nums, sz, val);
	printf("新的长度 = %d\n",newsz);
	printf("nums中前%d个元素为：", newsz);
	for (int i = 0; i < newsz; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}