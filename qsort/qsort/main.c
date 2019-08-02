#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr_int(const void* e1,const void* e2)
{
	return *((int*)e1) - *((int*)e2);
}

void test1()
{
	int arr[10] = { 5, 2, 1, 7, 8, 3, 4, 9, 11, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr,sz,sizeof(arr[0]),arr_int);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int str_char(const void* e1, const void* e2)
{
	//return *(char*)e1 - *(char*)e2;
	return strcmp((char*)e1, (char*)e2);
}

void test2()
{
	char str[] = "bcadefog";
	int sz = sizeof(str) / sizeof(str[0]);
	qsort(str, sz-1, sizeof(str[0]), str_char);

	printf("%s\n", str);
}

int arr_double(const void* e1,const void* e2)
{
	return *(double*)e1 > *(double*)e2 ? 1 : -1;//返回值得是int才行
}

void test3()
{
	double arr[] = { 3.14, 2.6, 8.6, 1.7, 9.2, 3.14, 8.8, 6.4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), arr_double);

	for (i = 0; i < sz; i++)
		printf("%lf ", arr[i]);
	printf("\n");
}

typedef struct Stu
{
	char name[10];
	int age;
}Stu;

int stu_string(const void* e1, const void* e2)
{
	return strcmp(((Stu*)e1)->name, ((Stu*)e2)->name);
}

void test4()
{
	Stu stu[] = { { "zhangsan", 22 }, { "wangwu", 15 }, { "lisi", 26 }, { "liantian", 18 } };
	int sz = sizeof(stu) / sizeof(stu[0]);
	int i = 0;
	qsort(stu, sz, sizeof(stu[0]), stu_string);

	for (i = 0; i < sz; i++)
		printf("%s ", stu[i].name);
	printf("\n");
}

int stu_int(const void* e1, const void* e2)
{
	return ((Stu*)e1)->age - ((Stu*)e2)->age;
}

void test5()
{
	Stu stu[] = { { "zhangsan", 22 }, { "wangwu", 15 }, { "lisi", 26 }, { "liantian", 18 } };
	int sz = sizeof(stu) / sizeof(stu[0]);
	int i = 0;
	qsort(stu, sz, sizeof(stu[0]), stu_int);

	for (i = 0; i < sz; i++)
		printf("%d ", stu[i].age);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();

	printf("\n");
	system("pause");
	return 0;
}