#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SListInit(List *seq)//��ʼ��
{
	assert(seq);
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	if (s == NULL)
		return;
	s->data = 1;
	s->data = 1;
	s->next = NULL;
}

void SListPushBack(List *seq)//β�巨
{
	assert(seq);
	SListNode *p = seq;
	for (int i = 1; i <= 10; i++)
	{
		SListNode *tmp = (SListNode*)malloc(sizeof(SListNode));
		if (tmp == NULL)
			return;
		tmp->data = i;
		tmp->next = NULL;
		p->next = tmp;

		p = tmp;
	}
}

void SListShow(List *seq)//��ʾ
{
	assert(seq);
	SListNode *p = seq;
	while (p->next != NULL)
	{
		printf("%d ", p->data);
	}
}