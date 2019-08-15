#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

static void Swap(char* e1, char* e2, int width)
{
	while (width--)
	{
		char tmp = *e1;
		*e1++ = *e2;
		*e2++ = tmp;
	}
}

void BubbleSort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	int j = 0;

	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char *)base + j*width, (char *)base + (j + 1)*width)>0)
			{
				Swap((char *)base + j*width, (char *)base + (j + 1)*width, width);
			}
		}
	}
}