#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int Fabio_for(int n)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
		return f3;
}
int main()
{
	printf("%d\n", Fabio_for(9));

	printf("\n");
	system("pause");
	return 0;
}