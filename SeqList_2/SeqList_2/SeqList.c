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

void PushBack(SList *head, Type x)//β�巨
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

void PushFront(SList *head, Type x)//ͷ�巨
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

void DelSelf(SList *head, Type val)//ɾ��ָ���ڵ�
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

SeqList* reverseList(SList *head)//��ת
{
	SeqList *p = *head;
	SeqList *q = NULL;
	if (*head == NULL || (*head)->next == NULL)
		return *head;
	while (p)
	{
		if (q == NULL)
		{
			q = NewNode(p->data);
			q->next = NULL;
		}
		else
		{
			SeqList *tmp = q;
			q = NewNode(p->data);
			q->next = tmp;
		}
		p = p->next;
	}
	return q;
}

SeqList* reverseList_2(SList *head, int m, int n)//��ת
{
	SeqList *p = *head;
	SeqList *q = NULL;
	int i = 0;
	if (*head == NULL || (*head)->next == NULL)
		return *head;
	while (p)
	{
		i++;
		if (i >= m&&i <= n)
		{
			if (q == NULL)
			{
				q = NewNode(p->data);
				q->next = NULL;
			}
			else
			{
				SeqList *tmp = q;
				q = NewNode(p->data);
				q->next = tmp;
			}
		}
		else
		{
			if (q == NULL)
			{
				q = NewNode(p->data);
				q->next = NULL;
			}
			else
			{
				SeqList *tmp = NewNode(p->data);
				tmp->next = NULL;
				q->next = tmp;
			}
		}
		p = p->next;
	}
	return q;
}