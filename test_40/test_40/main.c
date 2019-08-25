#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 4

int SeekArr(int arr[ROW][COL], int row, int col, int n)
{
	int row_left = 0;//��һ��
	int col_right = col - 1;//��col-1��

	while (row_left<row||col_right>0)
	{
		if (arr[row_left][col_right] == n)
			return 1;
		if (arr[row_left][col_right] > n)
			col_right--;
		else
			row_left++;
	}
	return 0;
}

int main()
{
	int arr[ROW][COL] = { 1, 2, 8, 9,
		              2, 4, 9, 12,
		              4, 7, 10, 13,
		              6, 8, 11, 15 };
	int n = 0;
	int tmp = 0;

	printf("������Ҫ���ҵ�����");
	scanf("%d", &n);

	tmp = SeekArr(arr, ROW, COL, n);

	if (tmp == 1)
		printf("�ҵ�������ˣ�\n");
	else
		printf("û���������\n");

	printf("\n");
	system("pause");
	return 0;
}