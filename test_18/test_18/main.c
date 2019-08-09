#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(char* x, char* y,size_t width)
{
	while (width--)
	{
		char tmp = *x;
		*x++ = *y;
		*y++ = tmp;
	}
}

//void qsort(void *base, size_t num, size_t width, int(__cdecl *compare)(const void *elem1, const void *elem2));
void BubbleSort(void *base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2))
{
	size_t i = 0;
	size_t j = 0;

	for (i = 0; i < num-1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
		}
	}
}

int int_arr(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[] = { 6, 2, 1, 3, 5, 4, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	BubbleSort(arr,sz,sizeof(arr[0]),int_arr);

	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

struct Stu
{
	char name[10];
	int age;
};

int char_s(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	struct Stu s[] = { { "cab", 18 }, { "aef", 15 }, { "bdi", 20 } };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;

	BubbleSort(s, sz, sizeof(s[0]), char_s);

	for (i = 0; i < sz; i++)
		printf("%s ", s[i].name);
	printf("\n");
}

int int_s(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s[] = { { "cab", 18 }, { "aef", 15 }, { "bdi", 20 } };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;

	BubbleSort(s, sz, sizeof(s[0]), int_s);

	for (i = 0; i < sz; i++)
		printf("%d ", s[i].age);
	printf("\n");
}

int main()
{
	test1();
	test2();
	test3();

	printf("\n");
	system("pause");
	return 0;
}