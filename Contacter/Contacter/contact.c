#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Initdata(Contact *con)
{
	assert(con);

	con->sz = 0;
	memset(con->data, 0, MAX*sizeof(Person));
}

void AddContact(Contact *con)
{
	assert(con);
	if (con->sz == MAX)
		printf("通讯录已满，无法添加！\n");
	else
	{
		printf("请输入姓名：");
		scanf("%s", con->data[con->sz].name);
		printf("请输入年龄：");
		scanf("%d", &(con->data[con->sz].age));
		printf("请输入性别：");
		scanf("%s", con->data[con->sz].sex);
		printf("请输入电话：");
		scanf("%s", con->data[con->sz].phone);
		printf("请输入住址：");
		scanf("%s", con->data[con->sz].addr);
		con->sz++;
	}
}

void ShowContact(Contact *con)
{
	assert(con);
	int i = 0;
	printf("%10s %10s %10s %15s %20s\n", "姓名", "年龄", "性别", "电话", "住址");
	for (i = 0; i < con->sz; i++)
	{
		printf("%10s %10d %10s %15s %20s\n", con->data[i].name, con->data[i].age,
			con->data[i].sex, con->data[i].phone, con->data[i].addr);
	}
}

static int FindData(Contact *con, char name[])
{
	assert(con);
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void DelContact(Contact *con)
{
	assert(con);
	if (con->sz == 0)
		printf("通讯录已空！\n");
	else
	{
		char name[NAME_MAX] = { 0 };
		int ret = 0;
		printf("请输入要删除联系人的姓名：");
		scanf("%s", name);
		//遍历通讯录，查看有无此联系人
		ret = FindData(con, name);
		if (ret == -1)
			printf("没有这个联系人！\n");
		else
		{
			int i = 0;
			for (i = ret; i < con->sz-1; i++)
			{
				con->data[i] = con->data[i + 1];
			}
			con->sz--;
			printf("删除成功！\n");
		}
	}
}

void SearchContact(Contact *con)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	printf("请输入要查找联系人的姓名：");
	scanf("%s", name);
	ret = FindData(con, name);
	if (ret == -1)
		printf("没有这个联系人！\n");
	else
	{
		printf("%10s %10s %10s %15s %20s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%10s %10d %10s %15s %20s\n", con->data[ret].name, con->data[ret].age,
			con->data[ret].sex, con->data[ret].phone, con->data[ret].addr);
	}
}

void ModMenu()
{
	printf("*           修改菜单           *\n");
	printf("*   1.修改姓名   2.修改年龄    *\n");
	printf("*   3.修改性别   4.修改电话    *\n");
	printf("*   5.修改地址   0.退出修改    *\n");
}

void ModifyContact(Contact *con)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	printf("请输入要修改联系人的姓名：");
	scanf("%s", name);
	ret = FindData(con, name);
	if (ret == -1)
		printf("没有这个联系人！\n");
	else
	{
		int input = 0;
		do
		{
			ModMenu();
			printf("请选择：");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				ModName(con, ret);
				break;
			case 2:
				ModAge(con, ret);
				break;
			case 3:
				ModSex(con, ret);
				break;
			case 4:
				ModPhone(con, ret);
				break;
			case 5:
				ModAddr(con, ret);
				break;
			case 0:
				break;
			default:
				printf("你的选择有误，请重新选择！\n");
				break;
			}
		} while (input);
	}
}

void SortMenu()
{
	printf("*             排序菜单             *\n");
	printf("*   1.按姓名排序   2.按年龄排序    *\n");
	printf("*   3.按电话排序   0.退出排序      *\n");
}

void SortContact(Contact *con)
{
	int input = 0;
	do
	{
		SortMenu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			SortName(con);
			break;
		case 2:
			SortAge(con);
			break;
		case 3:
			SortPhone(con);
			break;
		case 0:
			break;
		default:
			printf("你的选择有误，请重新选择！\n");
			break;
		}
	}while (input);
}