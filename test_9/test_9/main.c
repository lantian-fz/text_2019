#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 9, 11, 5, 4, 5, 3, 2, 1 };
	int i = 0;
	int ret = 0;
	int x = 0;
	int y = 0;
	int n = 0;//��¼ret�д��������һ��1��λ��
	//  0100  4
	//  0110  6
	//  0010  4^6 

	//2:0010 2:0010 3:0011 3:0011 6:0110   �ڶ�λΪ1��
	//1:0001 1:0001               4:0100   �ڶ�λΪ0��
	//�������ٷֱ���򣬵ó������ּ�Ϊ���
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
		ret ^= arr[i];
	for (i = 0; i < 31; i++)
	{
		if (((ret >> i) & 1) == 1)
			n = i;
	}

	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (((arr[i] >> n) & 1) == 0)
			x ^= arr[i];
		else
			y ^= arr[i];
	}

	printf("�����������ֱ���%d��%d\n", x, y);

	printf("\n");
	system("pause");
	return 0;
}