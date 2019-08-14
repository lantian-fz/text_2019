#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void Initdata(Contact *con)
{
	assert(con);

	con->sz = 0;
	con->data = (Person*)calloc(CAP,sizeof(Person));
	con->capacity = CAP;
	if (con->data == NULL)
	{
		return;
	}
}

static void AddCapacity(Contact *con)
{
	if (con->sz == con->capacity)
	{
		//增容
		Person* tmp = (Person*)realloc(con->data, (con->capacity + 2)*sizeof(Person));
		if (tmp != NULL)
		{
			con->data = tmp;
			con->capacity += 2;
			printf("增容成功！\n\n");
		}
	}
}

void AddContact(Contact *con)
{
	assert(con);

	AddCapacity(con);

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

	system("cls");
	printf("添加联系人成功！\n");
	Sleep(1500);
	system("cls");
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
	printf("\n");
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
			system("cls");
			printf("删除成功！\n");
			Sleep(1500);
			system("cls");
		}
	}
	printf("\n");
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
	printf("\n");
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
	printf("\n");
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
	printf("\n");
}

void EmptyContact(Contact *con)
{
	assert(con);
	con->sz = 0;
	memset(con->data, 0, con->sz*sizeof(Person));
	printf("已清空！\n\n");
}

void EmptyCapacity(Contact *con)
{
	assert(con);

	if (con->data != NULL)
	{
		free(con->data);
		con->data = NULL;
	}
}