#define _CRT_SECURE_NO_WARNINGS 1
//��ʵ��һ���㷨��ȷ��һ���ַ����������ַ��Ƿ�ȫ����ͬ��
//����һ���������뷵��һ��ֵ, 1���������ַ�ȫ����ͬ��0���������ͬ���ַ���
//��������������"aeiou" ���أ�1������"BarackObama"���أ�0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 3000

int SameStr(char str[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = strlen(str);
	int arr[NUM] = { 0 };

	for (i = 0; i < len; i++)
	{
		k = 0;
		for (j = 0; j < len; j++)
		{
			if (str[i] == str[j])
				k++;
		}
		arr[i] = k;
	}

	for (i = 0; i < len; i++)
	{
		if (arr[i]>1)
			return 0;
	}
	return 1;
}

int main()
{
	char str[NUM] = { 0 };

	gets(str);

	printf("%d\n", SameStr(str));

	printf("\n");
	system("pause");
	return 0;
}