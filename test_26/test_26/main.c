#define _CRT_SECURE_NO_WARNINGS 1
//输入两个字符串，从第一个字符串中删除第二个字符串中所有的字符。
//例如：输入"They are students."和"aeiou"，则删除之后的第一个字符串变成"Thy r stdnts."
#include <stdio.h>
#include <stdlib.h>

#define STR_MAX 30

void KnockoutChar(char str1[], char str2[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] == str2[j])
			{
				for (k = i; str1[k] != '\0'; k++)
					str1[k] = str1[k + 1];
			}
		}

	}
}

int main()
{
	char str1[STR_MAX] = { 0 };
	char str2[STR_MAX] = { 0 };

	printf("str1 = ");
	gets(str1);
	printf("str2 = ");
	gets(str2);
	
	KnockoutChar(str1, str2);
	printf("%s\n", str1);

	printf("\n");
	system("pause");
	return 0;
}