#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* my_memset(void* dest, int c, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);

	while (count--)
		*((char*)dest)++ = (char)c;

	return ret;
}

int main()
{
	char str[] = "hello world!";

	my_memset(str, '*', 4);

	printf("%s\n", str);

	printf("\n");
	system("pause");
	return 0;
}