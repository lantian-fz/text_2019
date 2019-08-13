#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stu
{
	char name[20];
	char sex[5];
	int age;
	float avg;
}Stu;

//int main()
//{
//	Stu s = { "ÕÅÈý", "ÄÐ", 20, 65.0f };
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fprintf(pf, "%s %s %d %.2f\n", s.name, s.sex, s.age, s.avg);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	Stu s = { 0 };

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	fscanf(pf, "%s %s %d %f", s.name, s.sex, &(s.age), &(s.avg));

	printf("%s %s %d %.2f\n", s.name, s.sex, s.age, s.avg);

	printf("\n");
	system("pause");
	return 0;
}