#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//求n的k次方
int Exp(int n, int k)
{
	int i = n;
	if (k > 0)
	{
		k--;
		i *= Exp(n, k);
	}
	else
		return 1;
	return i;
}

int main()
{
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);

	printf("%d^%d = %d\n", n, k, Exp(n, k));

	printf("\n");
	system("pause");
	return 0;
}