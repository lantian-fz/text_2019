#define _CRT_SECURE_NO_WARNINGS 1
//输出一个整数的每一位
#include <stdio.h>
#include <stdlib.h>

void Count(int n)
{
	if (n <9)
	{
		printf("%d ", n);
	}
	else
	{
		Count(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;

	scanf("%d", &n);

	Count(n);

	printf("\n");
	system("pause");
	return 0;
}
