#ifndef _LIST_H_
#define _LIST_H_
//˫������
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct DListNode
{
	DataType data;
	struct DListNode *prev;
	struct DListNode *next;
}DListNode;

typedef struct DList
{
	DListNode *first;
	DListNode *last;
	size_t size;
}DList;

void DListInit(DList *list);//��ʼ��
void DListPushBack(DList *list, DataType x);//β�巨����˫������
void DListPushFront(DList *list, DataType x);//ͷ�巨����˫������
size_t DListLen(DList *list);//���
void DListShow(DList *list);//��ʾ˫������

#endif