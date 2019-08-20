#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	int tem = 0;
	int z = 0;

	printf("输入两个整数：");
	scanf("%d %d", &x, &y);

	printf("%d的二进制位 = ", x);
	for (i = 31; i >= 0; i--)
	{
		tem = x >> i;
		printf("%d", tem & 1);
	}
	printf("\n");
	printf("%d的二进制位 = ", y);
	for (i = 31; i >= 0; i--)
	{
		tem = y >> i;
		printf("%d", tem & 1);
	}
	z = x^y;
	tem = 0;
	printf("\n");
	for (i = 31; i >= 0; i--)
	{
		if ((z >> i) & 1)
			tem++;
	}
	printf("不同比特位有 %d 个\n", tem);

	printf("\n");
	system("pause");
	return 0;
}
