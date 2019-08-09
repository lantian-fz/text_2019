#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strncmp(const char* str1, const char* str2,size_t count)
{
	assert(str1&&str2);
	if (!count)
		return 0;
	while (count--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else
			return (int)(*str1 - *str2);
	}
	return (int)(*str1 - *str2);
}

int main()
{
	char str1[] = "abcdef";
	char str2[] = "bcde";
	int ret = my_strncmp(str1, str2, 0);

	if (ret > 0)
		printf("str1 >  str2\n");
	else if (ret < 0)
		printf("str1 < str2\n");
	else
		printf("str1 = str2\n");

	printf("\n");
	system("pause");
	return 0;
}