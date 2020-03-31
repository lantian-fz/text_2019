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
void PushBack(SList *head, Type x);//β�巨
void PushFront(SList *head, Type x);//ͷ�巨
void DelSelf(SList *head, Type val);//ɾ��ָ���ڵ�
SeqList* reverseList_1(SList *head);//��ת
SeqList* reverseList_2(SList *head, int m, int n);//��ת
SeqList* DelNthFromEnd(SList *head, int n);//ɾ��������n���ڵ㣬������ͷ�ڵ�

#endif