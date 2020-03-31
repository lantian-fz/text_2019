#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Type;

typedef struct SeqList
{
	Type data;
	struct SeqList* next;
}SeqList,*SList;

void Init(SList* head);
void PushBack(SList *head, Type x);//尾插法
void PushFront(SList *head, Type x);//头插法
void DelSelf(SList *head, Type val);//删除指定节点
SeqList* reverseList_1(SList *head);//翻转
SeqList* reverseList_2(SList *head, int m, int n);//翻转
SeqList* DelNthFromEnd(SList *head, int n);//删除倒数第n个节点，并返回头节点

#endif