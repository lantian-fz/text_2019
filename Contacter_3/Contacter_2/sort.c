#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

static int Name(const void* e1, const void* e2)
{
	return strcmp(((Person *)e1)->name, ((Person *)e2)->name);
}

void SortName(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Name);
	printf("排序成功！\n\n");
}

static int Age(const void* e1, const void* e2)
{
	return ((Person*)e1)->age - ((Person*)e2)->age;
}

void SortAge(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Age);
	printf("排序成功！\n\n");
}

static int Phone(const void* e1, const void* e2)
{
	return strcmp(((Person*)e1)->phone, ((Person*)e2)->phone);
}

void SortPhone(Contact *con)
{
	assert(con);
	BubbleSort(con->data, con->sz, sizeof(Person), Phone);
	printf("排序成功！\n\n");
}