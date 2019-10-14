#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXSIZE 8

typedef int Datatype;

typedef struct CircleQueue
{
	Datatype *data;
	int front;
	int rear;
}CircleQueue;

void QueueInit(CircleQueue *q);//��ʼ��
int QueueEmpty(CircleQueue *q);//�жӿ�
int QueueFull(CircleQueue *q);//�ж���
int QueueLength(CircleQueue *q);//�󳤶�
int QueueEnter(CircleQueue *q, Datatype x);//���
int QueueDelete(CircleQueue *q, Datatype *x);//����
int QueueGetFront(CircleQueue *q, Datatype *x);//��ȡ��ͷԪ��
void QueueShow(CircleQueue *q);//��ʾ

#endif 