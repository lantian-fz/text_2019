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
		printf("ͨѶ¼�������޷���ӣ�\n");
	else
	{
		printf("������������");
		scanf("%s", con->data[con->sz].name);
		printf("���������䣺");
		scanf("%d", &(con->data[con->sz].age));
		printf("�������Ա�");
		scanf("%s", con->data[con->sz].sex);
		printf("������绰��");
		scanf("%s", con->data[con->sz].phone);
		printf("������סַ��");
		scanf("%s", con->data[con->sz].addr);
		con->sz++;
	}
}

void ShowContact(Contact *con)
{
	assert(con);
	int i = 0;
	printf("%10s %10s %10s %15s %20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
		printf("ͨѶ¼�ѿգ�\n");
	else
	{
		char name[NAME_MAX] = { 0 };
		int ret = 0;
		printf("������Ҫɾ����ϵ�˵�������");
		scanf("%s", name);
		//����ͨѶ¼���鿴���޴���ϵ��
		ret = FindData(con, name);
		if (ret == -1)
			printf("û�������ϵ�ˣ�\n");
		else
		{
			int i = 0;
			for (i = ret; i < con->sz-1; i++)
			{
				con->data[i] = con->data[i + 1];
			}
			con->sz--;
			printf("ɾ���ɹ���\n");
		}
	}
}

void SearchContact(Contact *con)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	printf("������Ҫ������ϵ�˵�������");
	scanf("%s", name);
	ret = FindData(con, name);
	if (ret == -1)
		printf("û�������ϵ�ˣ�\n");
	else
	{
		printf("%10s %10s %10s %15s %20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%10s %10d %10s %15s %20s\n", con->data[ret].name, con->data[ret].age,
			con->data[ret].sex, con->data[ret].phone, con->data[ret].addr);
	}
}

void ModMenu()
{
	printf("*           �޸Ĳ˵�           *\n");
	printf("*   1.�޸�����   2.�޸�����    *\n");
	printf("*   3.�޸��Ա�   4.�޸ĵ绰    *\n");
	printf("*   5.�޸ĵ�ַ   0.�˳��޸�    *\n");
}

void ModifyContact(Contact *con)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	int ret = 0;
	printf("������Ҫ�޸���ϵ�˵�������");
	scanf("%s", name);
	ret = FindData(con, name);
	if (ret == -1)
		printf("û�������ϵ�ˣ�\n");
	else
	{
		int input = 0;
		do
		{
			ModMenu();
			printf("��ѡ��");
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
				printf("���ѡ������������ѡ��\n");
				break;
			}
		} while (input);
	}
}

void SortMenu()
{
	printf("*             ����˵�             *\n");
	printf("*   1.����������   2.����������    *\n");
	printf("*   3.���绰����   0.�˳�����      *\n");
}

void SortContact(Contact *con)
{
	int input = 0;
	do
	{
		SortMenu();
		printf("��ѡ��");
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
			printf("���ѡ������������ѡ��\n");
			break;
		}
	}while (input);
}