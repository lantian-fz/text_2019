#define _CRT_SECURE_NO_WARNINGS 1
//��һ������İ���(�õ��ֵ��������������С�����������������)
//����
//1   2   3   4
//5   6   7   8
//9   10  11  12

//1   8   2   5
//8   7   6   11
//3   4   5   12
#include <stdio.h>

void main()
{
	int arr[3][4] = { 0 };
	int count = 0;
	printf("����12��������");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("����\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		int min = arr[i][0];//���i�еĵ�һ��Ԫ�ؾ�����С��
		int input = 0;//�ж��Ƿ�Ϊ����
		int col = 0;
		for (int j = 0; j < 4; j++)
		{
			if (min > arr[i][j])//�ҵ�i����С��Ԫ��
			{
				min = arr[i][j];
				col = j;
			}
		}
		for (int tmp = 0; tmp < 3; tmp++)//��ʱ����СԪ��������Ϊcol
		{
			if (arr[i][col] < arr[tmp][col])//�Ƚ�i����С��Ԫ����col�����Ƿ�Ϊ���Ԫ��
			{
				input = 1;//�������Ԫ�أ�����㲻�ǰ���
				break;
			}
		}
		if (input == 0)
		{
			printf("������%d,�±�Ϊ(%d,%d)\n", arr[i][col], i, col);
			count = 1;
		}
	}
	if (count == 0)
		printf("�˾���û�а���\n");
}