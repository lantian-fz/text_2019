#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX 8

typedef struct SeqList
{
	int* base;
	int capcacity;
	int sz;
}SeqList;

void ListInit(SeqList* seq, int cap);
void ListPushBack(SeqList* seq);//β�巨
void ListPushFront(SeqList* seq);//ͷ�巨
void ListShow(SeqList* seq);//��ʾ
void ListLength(SeqList* seq);//���
void ListFind(SeqList* seq);//����
void ListChange(SeqList* seq);//�޸�
void ListReverse(SeqList* seq);//����
void ListSort(SeqList* seq);//����
void ListInsert(SeqList* seq);//����
void ListDelete(SeqList* seq);//ɾ��
void ListFree(SeqList* seq);//���
void ListExit(SeqList* seq);//�˳�

void ListFindPos(SeqList* seq);//��λ�ò���
void ListFindVal(SeqList* seq);//��Ԫ�ز���

void ListDeletePos(SeqList* seq);//��λ��ɾ��
void ListDeleteVal(SeqList* seq);//��Ԫ��ɾ��

#endif