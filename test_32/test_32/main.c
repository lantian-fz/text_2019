#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，将字符串中的空格替换为%20.
//例如："abc defgx yz" 转换成 "abc%20defgx%20yz"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SkewingStr(char str[], int sub, int len)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < len - 1; i++)
	{
		int right = strlen(str) - 1;
		int count = right;
		for (j = sub; j < right; j++)
		{
			str[count + 1] = str[count];
			count--;
		}
	}
}

void InsertStr(char str[], char tmp[])
{
	int len = strlen(tmp);
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			//把str空格后的字符往后移动len-1个
			SkewingStr(str, i,len);
			//int count = i;
			//for (j = 0; j < len; j++)
			//{
			//	int right = strlen(str) - 1;//str最后一个字符的下标
			//	for (k = right; k>count; k--)
			//	{
			//		str[right + 1] = str[right];
			//		right--;
			//	}
			//	count++;
			//}

			//把tmp里面的字符串接上
			int count = i;
			for (j = 0; j < len; j++)
			{
				str[count] = tmp[j];
				count++;
			}
		}
	}
}

int main()
{
	char str[50] = { 0 };

	printf("输入字符串：");
	gets(str);

	InsertStr(str, "%20");

	printf("str = %s\n", str);

	printf("\n");
	system("pause");
	return 0;
}