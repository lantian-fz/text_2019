#define _CRT_SECURE_NO_WARNINGS 1
//����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��
//ʾ�� 1:����: [1,2,3]   ���: [1,2,4]
//����: ���������ʾ���� 123��
//ʾ�� 2:����: [4,3,2,1] ���: [4,3,2,2]
//����: ���������ʾ���� 4321��

#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int i = digitsSize - 1;//���һ��Ԫ���±�
	do
	{
		if (i == -1)
			break;
		digits[i]++;
		if (digits[i] == 10)
			digits[i] = 0;
	} while (digits[i--] == 0);
	if (i == -1 && digits[0]==0)
	{
		int *ret = (int*)malloc(sizeof(int)*(digitsSize + 1));
		ret[0] = 1;
		for (int i = 1; i < digitsSize + 1; i++)
		{
			ret[i] = digits[i - 1];
		}
		*returnSize = digitsSize + 1;
		return ret;
	}

	*returnSize = digitsSize;
	return digits;
}

void main()
{
	int arr[] = { 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz2 = 0;
	int *p = plusOne(arr, sz, &sz2);
	printf("%d\n", sz2);
	for (int i = 0; i < sz2; i++)
		printf("%d ", p[i]);
	printf("\n");
}