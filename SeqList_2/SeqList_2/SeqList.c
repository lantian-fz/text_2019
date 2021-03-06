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

SeqList* reverseList(SList *head)//翻转
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

SeqList* reverseList_2(SList *head, int m, int n)//翻转
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

SeqList* DelNthFromEnd(SList *head, int n)//删除倒数第n个节点，并返回头节点
{
	SeqList *p = *head;
	SeqList *q = NULL;
	while (n--)
		p = p->next;
	if (p != NULL)
	{
		p = p->next;
		q = *head;
		while (p)
		{
			p = p->next;
			q = q->next;
		}
		q->next = q->next->next;
	}
	else
	{
		(*head) = (*head)->next;
	}

	return *head;
}