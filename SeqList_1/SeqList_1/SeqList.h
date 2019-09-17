#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct SListNode
{
	int data;
	struct SListNode *next;
}SListNode,*List;

void SListInit(List *head);//初始化
void SListPushBack(List *head);//尾插法
void SListPushFront(List *head);//头插法
void SListShow(List *head);//显示
void SListLenth(List *head);//求表长


#endif