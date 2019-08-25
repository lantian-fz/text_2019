#define _CRT_SECURE_NO_WARNINGS 1
//输入一个整型数组，数组里有正数也有负数，数组中一个或连续多个整数组成一个子数组。
//求所有子数组的和的最大值，要求时间复杂度为O(n)。
//例如输入{1,-2,3,10,-4,7,2,-5},其最大子数组为{3,10,-4,7,2},输出为该数组的和18
#include <stdio.h>
#include <stdlib.h>

int MAX_Arry(int* arr, int sz)
{
	int MAX = arr[0];
	int sum = arr[0];

		int i = 1;
	if (arr == NULL || sz <= 1)
		return 0;
	for (i = 1; i < sz; i++)
	{
		if (sum < 0)  //如果前一个子数组和小于0，则从这里开始新的子数组
			sum = arr[i];
		else
		{
			sum += arr[i];//子数组和
		}
		if (sum > MAX)//记录下每次子数组中和最大时的值
			MAX = sum;
	}
	return MAX;
}
int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", MAX_Arry(arr, len));

	printf("\n");
	system("pause");
	return 0;
}