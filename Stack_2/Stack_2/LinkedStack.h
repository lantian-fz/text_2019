#ifndef _LINKEDSTACK_H_
#define _LINKEDSTACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef size_t Datatype;

typedef struct LinkedStackNode
{
	Datatype data;
	struct LinkedStackNode *next;
}LinkedStackNode;

void LinkedStackInit(LinkedStackNode **top);//��ʼ��
void LinkedStackPush(LinkedStackNode **top,Datatype x);//��ջ
int LinkedStackPop(LinkedStackNode **top, Datatype *x);//��ջ
void LinkedStackShow(LinkedStackNode *top);//��ʾ
int LinkedStackLength(LinkedStackNode *top);//�󳤶�
int LinkedStackGetTop(LinkedStackNode *top, Datatype *x);//��ȡջ��Ԫ��
int LinkedStackEmpty(LinkedStackNode *top);//�ж�ջ�Ƿ�Ϊ��

#endif