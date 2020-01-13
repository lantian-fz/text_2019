#define _CRT_SECURE_NO_WARNINGS 1
//实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
//示例：
//输入 : "Hello"      输出 : "hello"
//输入 : "here"       输出 : "here"
//输入 : "LOVELY"     输出 : "lovely"
#include <stdio.h>
#include <string.h>

char* ToLowerCase(char* str)
{
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return str;
}

void main()
{
	char str[64] = { 0 };
	printf("输入str：");
	scanf("%s", str);
	printf("%s\n", ToLowerCase(str));
}