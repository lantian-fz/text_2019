#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void ModName(Contact *con, int ret)
{
	assert(con);
	char name[NAME_MAX] = { 0 };
	printf("�������޸ĺ��������");
	scanf("%s", name);
	strcpy(con->data[ret].name, name);
	printf("�޸ĳɹ���\n");
}

void ModAge(Contact *con, int ret)
{
	assert(con);
	int age = 0;
	printf("�������޸ĺ�����䣺");
	scanf("%s", &age);
	con->data[ret].age = age;
	printf("�޸ĳɹ���\n");
}

void ModSex(Contact *con, int ret)
{
	assert(con);
	char sex[SEX_MAX] = { 0 };
	printf("�������޸ĺ���Ա�");
	scanf("%s", sex);
	strcpy(con->data[ret].sex, sex);
	printf("�޸ĳɹ���\n");
}

void ModPhone(Contact *con, int ret)
{
	assert(con);
	char phone[PHONE_MAX] = { 0 };
	printf("�������޸ĺ�ĵ绰��");
	scanf("%s", phone);
	strcpy(con->data[ret].phone, phone);
	printf("�޸ĳɹ���\n");
}

void ModAddr(Contact *con, int ret)
{
	assert(con);
	char addr[ADDR_MAX] = { 0 };
	printf("�������޸ĺ�ĵ绰��");
	scanf("%s", addr);
	strcpy(con->data[ret].addr, addr);
	printf("�޸ĳɹ���\n");
}