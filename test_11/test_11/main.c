#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char *my_strncpy(char *Dest, const char *src, size_t count)
{
	char* ret = Dest;
	assert(Dest&&src);
	int len = strlen(src);
	
	while (count && (*Dest++=*src++))
	{
		count--;
	}

	if (count>0)
	{
		while (--count)
			*Dest++ = '\0';
	}

	return ret;
}

int main()
{
	char str1[20] = "abcdefgh";
	char str2[] = "zz";
	int n = 6;

	my_strncpy(str1, str2, n);

	printf("str1 = %s\n", str1);

	printf("\n");
	system("pause");
	return 0;
}
