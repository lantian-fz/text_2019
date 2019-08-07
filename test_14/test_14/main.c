#define _CRT_SECURE_NO_WARNINGS 1

#include "my_strlen.h"

int main()
{
	char str[20] = { 0 };

	printf("请输入一串字符：");
	scanf("%s", str);

	printf("长度 = %d\n", my_strlen(str));

	printf("\n");
	system("pause");
	return 0;
}