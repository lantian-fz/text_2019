#define _CRT_SECURE_NO_WARNINGS 1
//有一个数组arr，编写函数，求数组中前k个最小的数字
#include <stdio.h>
#include <stdlib.h>

int MinArr(int arr[], int sz, int k)
{
	int min = arr[0];
	int i = 0;
	if (k <= sz)
	{
		for (i = 0; i < k; i++)
		{
			if (arr[i] < min)
				min = arr[i];
		}
	}
	else
	{
		for (i = 0; i < sz; i++)
		{
			if (arr[i] < min)
				min = arr[i];
		}
	}
	return min;
}

int main()
{
	int arr[] = { 6, 3, 12, 4, 2, 9, 32, 1, 54, 42, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	int min = 0;

	printf("arr: ");
	for (int i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("k = ");
	scanf("%d", &k);

	min = MinArr(arr, sz, k);

	printf("前 %d 个元素中最小的数字是 %d\n", k, min);

	printf("\n");
	system("pause");
	return 0;
}