#define _CRT_SECURE_NO_WARNINGS 1

#include "my_strlen.h"

int main()
{
	char str[20] = { 0 };

	printf("������һ���ַ���");
	scanf("%s", str);

	printf("���� = %d\n", my_strlen(str));

	printf("\n");
	system("pause");
	return 0;
}