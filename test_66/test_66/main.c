#define _CRT_SECURE_NO_WARNINGS 1
//给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。
//示例 1：输入：[-4, -1, 0, 3, 10]     输出：[0, 1, 9, 16, 100]
//
//示例 2：输入：[-7, -3, 2, 3, 11]     输出：[4, 9, 9, 49, 121]
//
//提示：1 <= A.length <= 10000     - 10000 <= A[i] <= 10000     A 已按非递减顺序排序。
#include <stdio.h>
#include <stdlib.h>

int Swap(const void* x, const void* y)
{
	return *((int*)x) - *((int*)y);
}

int* sortedSquares(int* A, int ASize, int* returnSize)
{
	*returnSize = ASize;
	for (int i = 0; i < ASize; i++)
		A[i] = A[i] * A[i];
	qsort(A, ASize, sizeof(int), Swap);
	
	return A;
}

void main()
{
	int arr[] = { -4, -1, 0, 3, 10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	int sz2 = 0;
	//int *p = (int*)malloc(sizeof(int)*sz1);
	int *p = sortedSquares(arr, sz1, &sz2);
	for (int i = 0; i < sz2; i++)
	{
		printf("%d ", *(p+i));
	}
}