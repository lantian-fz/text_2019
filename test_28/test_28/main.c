#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	if (dest<src)
	{
		while (count--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		while (count--)
		{
			*(((char*)dest) + count) = *(((char*)src) + count);
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	my_memmove(arr1 + 5, arr1, 16);

	printf("\n");
	system("pause");
	return 0;
}