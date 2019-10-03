#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

DListNode *Node(DataType x)
{
	DListNode *s = (DListNode*)malloc(sizeof(DListNode));
	assert(s);
	s->data = x;
	s->prev = NULL;
	s->next = NULL;
	return s;
}

void DListInit(DList *list)//��ʼ��
{
	DListNode *s = Node(0);//��ʼ��Ϊ0
	list->first = s;
	list->last = s;
	list->last->next = NULL;
	list->size = 0;
}

void DListPushBack(DList *list, DataType x)//β�巨����˫������
{
	assert(list);
	DListNode *s = Node(x);
	list->last->next = s;
	//s->next = NULL;
	s->prev = list->last;
	list->last = s;
	list->size++;
}

void DListPushFront(DList *list, DataType x)//ͷ�巨����˫������
{
	assert(list);
	DListNode *s = Node(x);
	s->next = list->first->next;
	if (s->next!=NULL)
		s->next->prev = s;
	list->first->next = s;
	s->prev = list->first;
	if (list->size == 0)
		list->last = s;
	list->size++;
}

void DListShow(DList *list)//��ʾ˫������
{
	assert(list);
	DListNode *p = list->first->next;
	while (p)
	{
		printf("%u ", p->data);
		p = p->next;
	}
	printf("\n");
}

size_t DListLen(DList *list)//���
{
	return list->size;
}

DListNode *DListFindData(DList *list, DataType x)//��ֵ����Ԫ��
{
	assert(list);
	DListNode *p = list->first->next;
	while (p!=NULL)
	{
		if (p->data == x)
			return p;
		p = p->next;
	}
	return p;
}

DListNode *DListFindSite(DList *list, size_t x)//��λ�ò���
{
	assert(list);
	DListNode *p = list->first;
	if (x > list->size)
		return NULL;
	while (x--)
		p = p->next;
	return p;
}

int DListPushRear(DList *list, DListNode *s, DataType key)//�������
{
	DListNode *p = Node(key);
	if (s == NULL)
		return 0;
	if (s->next != NULL)
	{
		p->next = s->next;
		s->next->prev = p;
		s->next = p;
		p->prev = s;
		list->size++;
	}
	else
		DListPushBack(list, key);
	return 1;
}

int DListPushFormer(DList *list, DListNode *s, DataType key)//ǰ������
{
	DListNode *p = Node(key);
	if (s == NULL)
		return 0;
	s->prev->next = p;
	p->prev = s->prev;
	s->prev = p;
	p->next = s;
	list->size++;
	return 1;
}

int DListPushSite(DList *list, size_t x, DataType key)//��λ�ò���
{
	if (x == list->size + 1)
		DListPushBack(list, key);
	else
	{
		DListNode *q = DListFindSite(list, x);
		if (q == NULL)
			return 0;
		else
			DListPushFormer(list, q, key);
	}
	return 1;
}