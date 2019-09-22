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

void SListInit(List *head);//��ʼ��
void SListPushBack(List *head);//β�巨
void SListPushFront(List *head);//ͷ�巨
void SListShow(List *head);//��ʾ
void SListLenth(List *head);//���
void SListDel(List *head);//ɾ���ڵ�
void SListPushSite(List *head);//��ָ��λ�ò���ڵ�
void SListReverse(List *head);//��������
//void SListSort(List *head);//����
void SListEnter(List *head);//�������
void SListEnterHead(List *head);//����


void SListDelBack(List *head);//ɾ����̽ڵ�
void SListDelSelf(List *head);//ɾ��ָ���ڵ�
void SListDelSite(List *head);//ɾ��ָ��λ�õĽڵ�

#endif