#define _CRT_SECURE_NO_WARNINGS 1

#include "BubbleSort.h"

void test1()
{
	int arr[10] = { 5, 7, 9, 4, 2, 1, 3, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

void test2()
{
	struct Stu arr[] = { { "zhangsan", 15 }, { "lisi", 20 }, { "wangwu", 18 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_Stu_nmae);
	for (i = 0; i < sz; i++)
		printf("%s\n", arr[i].name);
}

void test3()
{
	struct Stu arr[] = { { "zhangsan", 15 }, { "lisi", 20 }, { "wangwu", 18 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_Stu_int);
	for (i = 0; i < sz; i++)
		printf("%d\n", arr[i].age);
}

int main()
{
	//test1();
	test2();
	//test3();

	printf("\n");
	system("pause");
	return 0;
}