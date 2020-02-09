#define _CRT_SECURE_NO_WARNINGS 1
//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
//示例 1:输入: [1,2,3]   输出: [1,2,4]
//解释: 输入数组表示数字 123。
//示例 2:输入: [4,3,2,1] 输出: [4,3,2,2]
//解释: 输入数组表示数字 4321。

#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int i = digitsSize - 1;//最后一个元素下标
	do
	{
		if (i == -1)
			break;
		digits[i]++;
		if (digits[i] == 10)
			digits[i] = 0;
	} while (digits[i--] == 0);
	if (i == -1 && digits[0]==0)
	{
		int *ret = (int*)malloc(sizeof(int)*(digitsSize + 1));
		ret[0] = 1;
		for (int i = 1; i < digitsSize + 1; i++)
		{
			ret[i] = digits[i - 1];
		}
		*returnSize = digitsSize + 1;
		return ret;
	}

	*returnSize = digitsSize;
	return digits;
}

void main()
{
	int arr[] = { 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz2 = 0;
	int *p = plusOne(arr, sz, &sz2);
	printf("%d\n", sz2);
	for (int i = 0; i < sz2; i++)
		printf("%d ", p[i]);
	printf("\n");
}