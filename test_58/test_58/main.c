#define _CRT_SECURE_NO_WARNINGS 1
//����n���á�����123���321��1234���4321
#include <stdio.h>
#include <math.h>

void Reverse(int *n)
{
	int tmp = *n;
	int count = 1;//������n��λ����n��СΪһλ
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
	printf("����n��");
	scanf("%d", &n);

	Reverse(&n);
	printf("���ú�n = %d\n",n);
}