#define _CRT_SECURE_NO_WARNINGS 1
//对于一个字符串，请设计一个高效算法，找到第一次重复出现的字符
//例如 "qywyer23tdd",返回 y
#include <stdio.h>
#include <stdlib.h>

char RepeatStr(char str[])
{
	int i = 0;
	int j = 0;
	char tmp = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = str[i];
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[j] == tmp)
				return tmp;
		}
	}
	return -1;
}

int main()
{
	char str[30] = { 0 };

	printf("请输入字符串：");
	gets(str);

	if (RepeatStr(str) == -1)
		printf("没有重复的字符！\n");
	else
		printf("%c\n", RepeatStr(str));

	printf("\n");
	system("pause");
	return 0;
}