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

void SListInit(List *seq);//初始化
void SListPushBack(List *seq);//尾插法
void SListShow(List *seq);//显示

#endif