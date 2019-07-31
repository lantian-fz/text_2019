#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//自己写的strcpy函数
char* my_strcpy(char* str1, const char* str2)
{
	char* ret = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);

	while (*str1++ = *str2++);

	return ret;
}

int main()
{
	char str1[20] = "abcdef";
	char str2[] = "hello world!";

	my_strcpy(str1, str2);

	printf("str1 = %s\n", str1);

	printf("\n");
	system("pause");
	return 0;
}