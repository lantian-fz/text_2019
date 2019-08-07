#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//Sn = a + aa + aaa + aaaa + aaaaa
int main()
{
	int a = 0;
	int n = 0;//¼¸¸öa
	int i = 0;
	int sum = 0;
	int tem = 0;

	scanf("%d %d", &a,&n);
	tem = a;

	for (i = 0; i < n; i++)
	{
		sum += a ;
		a = tem + a * 10;
	}

	printf("sum = %d\n", sum);


	printf("\n");
	system("pause");
	return 0;
}