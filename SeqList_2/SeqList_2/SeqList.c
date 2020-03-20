#define _CRT_SECURE_NO_WARNINGS 1
#include "seqlist.h"

SeqList* NewNode(Type x)
{
	SeqList *s = (SeqList*)malloc(sizeof(SeqList));
	assert(s);
	s->data = x;
	s->next = NULL;
	return s;
}

void Init(SList* head)
{
	*head = NULL;
}

void PushBack(SList *head, Type x)//尾插法
{
	if (*head==NULL)
		*head = NewNode(x);
	else
	{
		SeqList *p = *head;
		while (p->next)
			p = p->next;
		p->next = NewNode(x);
	}
}

void PushFront(SList *head, Type x)//头插法
{
	if (*head == NULL)
		*head = NewNode(x);
	else
	{
		SeqList *s = NewNode(x);
		s->next = *head;
		*head = s;
	}
}

void DelSelf(SList *head, Type val)//删除指定节点
{
	SeqList* p = *head;
	SeqList* q = NULL;
	while (p)
	{
		if (p->data==val)
		{
			if (q == NULL)
				*head = p->next;
			else
				q->next = p->next;
		}
		else
			q = p;
		p = p->next;
	}
}