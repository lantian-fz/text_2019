#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

DListNode *Node(DataType x)
{
	DListNode *s = (DListNode*)malloc(sizeof(DataType));
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