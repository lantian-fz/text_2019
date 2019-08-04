#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	printf("&str1 = %p\n", str1);
//	printf("&str2 = %p\n", str2);
//	printf("p1 = %p\n", p1);
//	printf("p2 = %p\n", p2);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//打印乘法口诀表

void Print(int n)
{
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d = %d ", j, i, i*j);
		printf("\n");
	}
}

int main()
{
	int n = 0;

	printf("请问您要打印几阶乘法口诀表：");
	scanf("%d", &n);
	Print(n);

	printf("\n");
	system("pause");
	return 0;
}