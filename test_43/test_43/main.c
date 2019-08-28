#define _CRT_SECURE_NO_WARNINGS 1
//请实现一个算法，确定一个字符串的所有字符是否全都不同。
//给定一个函数，请返回一个值, 1代表所有字符全都不同，0代表存在相同的字符。
//测试样例：输入"aeiou" 返回：1，输入"BarackObama"返回：0
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