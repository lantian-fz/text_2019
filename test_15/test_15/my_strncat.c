#define _CRT_SECURE_NO_WARNINGS 1

#include "my_strncat.h"

char* my_strncat(char* dest, const char* src, size_t count)
{
	char* ret = dest;

	assert(dest&&src);

	while (*dest)
		dest++;

	while (count--&&*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}