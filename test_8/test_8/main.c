#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//void Reverse(char* left, char* right)
//{
//	assert(left&&right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left++ = *right;
//		*right-- = tmp;
//	}
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	int k = 2;
//	int len = strlen(str);
//	
//	Reverse(str, str + len - 1);
//	Reverse(str, str + k - 1);
//	Reverse(str + k, str + len - 1);
//
//	return 0;
//}
//
//#include <assert.h>
//#include <string.h>
//
//int Move(char* str1,const char* str2)
//{
//	assert(str1&&str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	if (len1 != len2)
//		return 0;
//
//	strncat(str1, str1, len1);
//
//	if (strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char str1[20] = "abcdefg";
//	char str2[] = "abcdefg";
//
//	if (Move(str1, str2) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	system("pause");
//	return 0;
//}
//
void test(int arr[], int sz, int* x, int* y)
{
	int i = 0;
	int ret = 0;
	int pos = 0;
	
	for (i = 0; i < sz; i++)
		ret ^= arr[i];

	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
			*x ^= arr[i];
		//else
		//	*y ^= arr[i];
	}
	*y = *x^ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 8, 10, 1, 2, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;

	test(arr, sz, &x, &y);

	printf("x = %d y = %d\n", x, y);

	printf("\n");
	system("pause");
	return 0;
}