#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest<src)
//	{
//		while (count--)
//		{
//			*((char*)dest)++ = *((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(((char*)dest) + count) = *(((char*)src) + count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	my_memmove(arr1, arr1 + 3, 16);
//
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int my_memcmp(const void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);

	while (count--)
	{
		if (*(char*)dest == *(char*)src)
			((char*)dest)++, ((char*)src)++;
		else
			return *(char*)dest - *(char*)src;
	}
	return 0;
}

int main()
{
	int arr1[20] = { 1, 2, 3, 4 };
	int arr2[] = { 1, 2, 3, 4};
	int ret = my_memcmp(arr1, arr2, sizeof(arr2));
	
	//printf("ret = %d\n", ret);
	if (ret > 0)
	{
		printf("arr1 > arr2\n");
	}
	else if (ret < 0)
	{
		printf("arr1 < arr2\n");
	}
	else
		printf("arr1 = arr2\n");

	printf("\n");
	system("pause");
	return 0;
}