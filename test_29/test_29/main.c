#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

void Swap(int arr[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <len; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("输入10个整数：");
	for (i = 0; i < len; i++)
		scanf("%d", &arr[i]);

	Swap(arr, len);

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}
