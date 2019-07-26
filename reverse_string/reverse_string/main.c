#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

void reverse_string(char* str)
{
	int len = my_strlen(str) - 1;
	char tem = 0;

	if (len>0)
	{
		tem = *str;
		*str = *(str + len);
		*(str + len) = '\0';
		reverse_string(str + 1);
		*(str + len) = tem;
	}
}

int main()
{
	char str[30] = { 0 };
	int i = 0;
	printf("ÇëÊäÈëÒ»´®×Ö·û´®£º");
	gets(str);

	reverse_string(str);

	puts(str);

	printf("\n");
	system("pause");
	return 0;
}