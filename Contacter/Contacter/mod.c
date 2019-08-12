#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void ModName(Contact *con, int ret)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	printf("请输入修改后的姓名：");
	scanf("%s", name);
	strcpy(con->data[ret].name, name);
	printf("修改成功！\n\n");
}

void ModAge(Contact *con, int ret)
{
	assert(con);
	int age = 0;
	printf("请输入修改后的年龄：");
	scanf("%s", &age);
	con->data[ret].age = age;
	printf("修改成功！\n\n");
}

void ModSex(Contact *con, int ret)
{
	assert(con);
	char sex[SEX_MAX] = { 0 };
	printf("请输入修改后的性别：");
	scanf("%s", sex);
	strcpy(con->data[ret].sex, sex);
	printf("修改成功！\n\n");
}

void ModPhone(Contact *con, int ret)
{
	assert(con);
	char phone[PHONE_MAX] = { 0 };
	printf("请输入修改后的电话：");
	scanf("%s", phone);
	strcpy(con->data[ret].phone, phone);
	printf("修改成功！\n\n");
}

void ModAddr(Contact *con, int ret)
{
	assert(con);
	char addr[ADDR_MAX] = { 0 };
	printf("请输入修改后的地址：");
	scanf("%s", addr);
	strcpy(con->data[ret].addr, addr);
	printf("修改成功！\n\n");
}