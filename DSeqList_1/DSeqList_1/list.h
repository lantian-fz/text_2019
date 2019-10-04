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
DListNode *DListFindData(DList *list, DataType x);//��Ԫ�ز���
DListNode *DListFindSite(DList *list, size_t x);//��λ�ò���
int DListPushRear(DList *list, DListNode *s,DataType key);//�������
int DListPushFormer(DList *list, DListNode *s, DataType key);//ǰ������
int DListPushSite(DList *list, size_t x, DataType key);//��λ�ò���
int DListSiteAlter(DList *list, size_t x, DataType key);//��λ���޸�
int DListDataAlter(DList *list, DataType x, DataType key);//��Ԫ���޸ģ�������x�޸�Ϊkey,�����޸�x�ĸ���
int DListSiteDelete(DList *list, size_t x);//��λ��ɾ��
int DListDataDelete(DList *list, DataType key);//��Ԫ��ɾ��������ɾ��x�ĸ���
void DListEmpty(DList *list);//�������Ԫ��
void DListReverse(DList *list);//����
void DListEmptyPlus(DList *list);//����
void DListSort(DList *list);//����

#endif