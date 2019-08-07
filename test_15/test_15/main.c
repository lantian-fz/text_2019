#define _CRT_SECURE_NO_WARNINGS 1

#include "my_strncat.h"

int main()
{
	char str1[20] = "abcdef";
	//char str1[20] = { 'a', 'b', 'c' };
	char str2[] = "eeee";

	my_strncat(str1, str2, 8);

	printf("%s\n", str1);

	printf("\n");
	system("pause");
	return 0;
}