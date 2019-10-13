#define _CRT_SECURE_NO_WARNINGS 1

#include "hash.h"

int main()
{
	//Init(&hash_table,P);
	int arr[] = { 12, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 52, 31, 12, 4, 5, 7, 2, 3 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		insert_new_element(arr[i]);
	}


	printf("\n");
	system("pause");
	return 0;
}