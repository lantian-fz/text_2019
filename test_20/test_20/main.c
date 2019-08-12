#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int CompareBit(int x, int y)
{
	int ret = 0;
	int i = 0;
	int com = x^y;
	for (i = 0; i < 32; i++)
	{
		if (((com >> i)&1) == 1)
			ret++;
	}
	return ret;
}

int main()
{
	int x = 0;// 111111111 111111111 111111111 111111111   -1
	int y = 0;// 000000000 000000000 000000000 000000001    1

	scanf("%d %d", &x, &y);

	printf("%d 和 %d 有 %d 个二进制位不同\n", x, y, CompareBit(x, y));

	printf("\n");
	system("pause");
	return 0;
}