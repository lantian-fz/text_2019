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
void SListDel(List *head);//删除节点
void SListPushSite(List *head);//往指定位置插入节点
void SListReverse(List *head);//逆置链表
//void SListSort(List *head);//排序
void SListEnter(List *head);//清空链表
void SListEnterHead(List *head);//销毁


void SListDelBack(List *head);//删除后继节点
void SListDelSelf(List *head);//删除指定节点
void SListDelSite(List *head);//删除指定位置的节点

#endif