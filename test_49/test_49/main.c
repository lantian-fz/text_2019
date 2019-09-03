#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[50][50] = { 0 };
	int i = 0;
	int j = 0;
	int n = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
	}

	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%-4d ", arr[i][j]);
		printf("\n");
	}

	printf("\n");
	system("pause");
	return 0;
}