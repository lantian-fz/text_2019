#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void print1(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		//打印空格
		for (j = n - i - 1; j>0; j--)
			printf(" ");
		//打印 *
		for (j = 0; j < 2 * i + 1; j++)
			printf("*");
		printf("\n");
	}
}

void print2(int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		//打印空格
		for (j = 0; j < i+1; j++)
			printf(" ");
		//打印 *
		for (j = 2*(n-i)-1; j>0; j--)
			printf("*");
		printf("\n");
	}
}

int main()
{
	int n = 0;

	scanf("%d", &n);

	print1(n);//打印上半部分
	print2(n - 1);//打印下半部分

	printf("\n");
	system("pause");
	return 0;
}