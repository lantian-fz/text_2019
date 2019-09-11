#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SListNode
{
	int data;
	struct SListNode *next;
}SListNode;

typedef SListNode *List;

void SListInit(List *head);//��ʼ��
void SListPushBack(List *head);//β�巨
void SListShow(List *head);//��ʾ

#endif