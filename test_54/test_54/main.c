#define _CRT_SECURE_NO_WARNINGS 1
//求一个矩阵的鞍点(该点的值在其所在行上最小且在其所在列上最大)
//例：
//1   2   3   4
//5   6   7   8
//9   10  11  12

//1   8   2   5
//8   7   6   11
//3   4   5   12
#include <stdio.h>

void main()
{
	int arr[3][4] = { 0 };
	int count = 0;
	printf("输入12个整数：");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("矩阵：\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		int min = arr[i][0];//设第i行的第一个元素就是最小的
		int input = 0;//判断是否为鞍点
		int col = 0;
		for (int j = 0; j < 4; j++)
		{
			if (min > arr[i][j])//找到i行最小的元素
			{
				min = arr[i][j];
				col = j;
			}
		}
		for (int tmp = 0; tmp < 3; tmp++)//此时，最小元素所在列为col
		{
			if (arr[i][col] < arr[tmp][col])//比较i行最小的元素在col列中是否为最大元素
			{
				input = 1;//不是最大元素，这个点不是鞍点
				break;
			}
		}
		if (input == 0)
		{
			printf("鞍点是%d,下标为(%d,%d)\n", arr[i][col], i, col);
			count = 1;
		}
	}
	if (count == 0)
		printf("此矩阵没有鞍点\n");
}