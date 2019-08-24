#define _CRT_SECURE_NO_WARNINGS 1
//编写函数：求数组中元素出现次数超过数组长度一半的数字
//例如：{1,2,3,2,2,2,5,4,2} 数字2为超过数组长度一半的数字
#include <stdio.h>
#include <stdlib.h>

int HalfArr(int arr[], int sz)
{
	int tmp = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < sz; i++)
	{
		int k = 0;
		tmp = arr[i];
		for (j = 0; j < sz; j++)
		{
			if (tmp == arr[j])
				k++;
		}
		if (k >(sz / 2))
			return arr[i];
	}
	return 0;
}

int main()
{
	int arr[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int half = 0;

	printf("arr: ");
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");

	half = HalfArr(arr, sz);

	if (half == 0)
		printf("没有这个数字\n");
	else
		printf("%d\n", half);

	printf("\n");
	system("pause");
	return 0;
}