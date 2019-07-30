#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

void BubbleSort(void* base,
	int sz,
	int width,
	int(*cmp)(const void*e1, const void*e2));

int cmp_int(const void*e1, const void*e2);
int cmp_Stu_nmae(const void*e1, const void*e2);
int cmp_Stu_int(const void*e1, const void*e2);
