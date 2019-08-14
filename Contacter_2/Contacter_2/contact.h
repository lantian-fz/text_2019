#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <Windows.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define PHONE_MAX 15
#define ADDR_MAX 30
#define MAX 1000
#define CAP 3

typedef struct Person
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char phone[PHONE_MAX];
	char addr[ADDR_MAX];
}Person;

typedef struct Contact
{
	Person* data;
	int sz;
	int capacity;
}Contact;

void Initdata(Contact *con);
void AddContact(Contact *con);
void ShowContact(Contact *con);
void DelContact(Contact *con);
void SearchContact(Contact *con);
void ModifyContact(Contact *con);
void SortContact(Contact *con);
void EmptyContact(Contact *con);
void EmptyCapacity(Contact *con);

void ModName(Contact *con, int ret);
void ModAge(Contact *con, int ret);
void ModSex(Contact *con, int ret);
void ModPhone(Contact *con, int ret);
void ModAddr(Contact *con, int ret);

void SortName(Contact *con);
void SortAge(Contact *con);
void SortPhone(Contact *con);
void BubbleSort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2));