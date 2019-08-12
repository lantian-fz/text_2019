#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

static int Name(const void* e1, const void* e2)
{
	return strcmp((((struct Contact*)e1)->data)->name, (((struct Contact*)e2)->data)->name);
}

void SortName(Contact *con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(con->data[0]), Name);
	printf("排序成功！\n\n");
}

static int Age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->data->age - ((struct Contact*)e2)->data->age;
}

void SortAge(Contact *con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(con->data[0]), Age);
	printf("排序成功！\n\n");
}

static int Phone(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->phone, ((struct Contact*)e2)->data->phone);
}

void SortPhone(Contact *con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(con->data[0]), Phone);
	printf("排序成功！\n\n");
}