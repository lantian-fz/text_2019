#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SListInit(List *head)//初始化
{
	assert(head);
	*head = NULL;
}

void SListPushBack(List *head)//尾插法
{
	*head = (SListNode*)malloc(sizeof(SListNode));
	assert(*head);
	(*head)->data = 1;
	(*head)->next = NULL;

	SListNode *p = *head;
	for (int i = 2; i <= 10; i++)
	{
		SListNode *s = (SListNode*)malloc(sizeof(SListNode));
		assert(s);

	}
}

void SListShow(List *head)//显示
{
	assert(head);
	SListNode *p = head;
	while (p->next != NULL)
	{
		printf("%d ", p->data);
	}
}