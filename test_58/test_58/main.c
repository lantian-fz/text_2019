#define _CRT_SECURE_NO_WARNINGS 1
//将数n反置。例如123变成321。1234变成4321
#include <stdio.h>
#include <math.h>

void Reverse(int *n)
{
	int tmp = *n;
	int count = 1;//用来存n的位数，n最小为一位
	while (tmp /= 10)
		count++;
	tmp = *n;
	*n = 0;
	do
	{
		*n += (tmp % 10) *(int)pow(10, count - 1);
		count--;
		tmp /= 10;
	} while (count > 0);
}

void main()
{
	int n = 0;
	printf("输入n：");
	scanf("%d", &n);

	Reverse(&n);
	printf("反置后n = %d\n",n);
}