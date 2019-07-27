#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	char arr1[64] = { 0 };
	char arr2[64] = { 0 };
	int i = 0;
	int left = 0;
	int right = 0;
	
	printf("ÇëÊäÈëÒ»¶Î×Ö·û£º");
	gets(arr1);

	right = strlen(arr1) - 1;

	for (i = 0; i < right; i++)
		arr2[i] = '*';

	while (left <= right)
	{
		arr2[left++] = arr1[left];
		arr2[right--] = arr1[right];
		//left++;
		//right--;
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
	}

	printf("\n");
	system("pause");
	return 0;
}