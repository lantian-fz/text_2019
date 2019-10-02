#ifndef _LIST_H_
#define _LIST_H_
//双向链表
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

void DListInit(DList *list);//初始化
void DListPushBack(DList *list, DataType x);//尾插法创建双向链表
void DListPushFront(DList *list, DataType x);//头插法创建双向链表
size_t DListLen(DList *list);//求表长
void DListShow(DList *list);//显示双向链表

#endif