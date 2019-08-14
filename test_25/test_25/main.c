#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct Stu
//{
//	int num;
//	char name[];
//};
//
//int main()
//{
//	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + 20 * sizeof(char));
//	
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	p->num = 20;
//	strcpy(p->name, "hello world!");
//
//	printf("%d %s\n", p->num, p->name);
//
//	free(p);
//	p = NULL;
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

struct Stu
{
	int num;
	char* arr;
};

int main()
{
	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	p->num = 10;
	p->arr = (char*)malloc(20 * sizeof(char));

	strcpy(p->arr, "abcde");

	printf("%d %s\n", p->num, p->arr);

	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;

	printf("\n");
	system("pause");
	return 0;
}