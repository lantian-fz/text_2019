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

void SListInit(List *seq);//��ʼ��
void SListPushBack(List *seq);//β�巨
void SListShow(List *seq);//��ʾ

#endif