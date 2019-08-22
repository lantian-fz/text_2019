#define _CRT_SECURE_NO_WARNINGS 1
//在字符串中找出第一个只出现一次的字符。
//例如：输入 "abaccdef" 输出 b
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char OnceStr(char str[])//比较差的方法
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = strlen(str);
	int tmp[30] = { 0 };

	for (i = 0; i < len; k=0,i++)
	{
		//k = 0;
		for (j = 0; j < len; j++)
		{
			if (str[i] == str[j])
				k++;
		}
		tmp[i] = k;
	}

	for (i = 0; i < len; i++)
	{
		if (tmp[i] == 1)
			return str[i];
	}
	return -1;
}

int main()
{
	char str[30] = { 0 };

	printf("请输入字符串：");
	gets(str);

	if (OnceStr(str) == -1)
		printf("没有只出现一次的字符\n");
	else
		printf("%c\n", OnceStr(str));

	printf("\n");
	system("pause");
	return 0;
}

//char OnceStr(char str[])//如果相同的字符连在一起就会出错
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		for (j = i + 1; str[j] != '\0'; j++)
//		{
//			if (str[i] == str[j])
//				break;
//		}
//		if (str[j] == '\0')
//			return str[i];
//	}
//	return -1;
//}
//
//int main()
//{
//	char str[30] = { 0 };
//
//	printf("请输入字符串：");
//	gets(str);
//
//	if (OnceStr(str) == -1)
//		printf("没有只出现一次的字符\n");
//	else
//		printf("%c\n", OnceStr(str));
//
//	printf("\n");
//	system("pause");
//	return 0;
//}