#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	while (*str1 && *str1 == *str2)
		str1++, str2++;

	if (!*str1&&!*str2)
		return 0;
	return *str1 - *str2;
}

static int Name(const void* e1, const void* e2)
{
	return my_strcmp((char*)e1, (char*)e2);
}

void SortName(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Name);
	printf("排序成功！\n\n");
}

static int Age(const void* e1, const void* e2)
{
	return ((Contact*)e1)->data->age - ((Contact*)e2)->data->age;
}

void SortAge(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Age);
	printf("排序成功！\n\n");
}

static int Phone(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}

void SortPhone(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Phone);
	printf("排序成功！\n\n");
}