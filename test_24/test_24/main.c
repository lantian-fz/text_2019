#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stu
{
	char name[20];
	int age;
	float grade;
}Stu;

//int main()
//{
//	Stu s = { "zhangsan", 20, 65.5f };
//	char str[30] = { 0 };
//
//	sprintf(str, "%s %d %f", s.name, s.age, s.grade);//将格式化的数据转化为字符串
//
//	printf("%s\n", str);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	Stu s = { 0 };
	char str[30] = "zhangsan 20 55.9f";

	sscanf(str, "%s %d %f", s.name, &(s.age),&(s.grade));//将字符串转化为格式化的数据

	printf("%s %d %f\n",s.name,s.age,s.grade);

	printf("\n");
	system("pause");
	return 0;
}