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

	printf("��������������");
	scanf("%d %d", &x, &y);

	printf("%d�Ķ�����λ = ", x);
	for (i = 31; i >= 0; i--)
	{
		tem = x >> i;
		printf("%d", tem & 1);
	}
	printf("\n");
	printf("%d�Ķ�����λ = ", y);
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
	printf("��ͬ����λ�� %d ��\n", tem);

	printf("\n");
	system("pause");
	return 0;
}
