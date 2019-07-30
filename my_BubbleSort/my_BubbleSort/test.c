#define _CRT_SECURE_NO_WARNINGS 1
#include "BubbleSort.h"

int cmp_int(const void*e1, const void*e2)
{
	return *(int *)e1 - *(int *)e2;
}

int cmp_Stu_nmae(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu *)e2)->name);
}

int cmp_Stu_int(const void*e1, const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}