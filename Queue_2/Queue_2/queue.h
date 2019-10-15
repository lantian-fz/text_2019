#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Datatype;

typedef struct Queue
{
	Datatype data;
	struct Queue *next;
}Queue;

typedef struct LQueue
{
	size_t sz;
	Queue *front;
	Queue *rear;
}LinkQueue;

void LQueueInit(LinkQueue *q);//��ʼ��
void LQueueEnter(LinkQueue *q, Datatype x);//���
int LQueueDelete(LinkQueue *q, Datatype *x);//����
void LQueueShow(LinkQueue *q);//��ʾ����Ԫ��
size_t LQueueLength(LinkQueue *q);//����г���
int LQueueGetFront(LinkQueue *q, Datatype *x);//��ȡ��ͷԪ��

#endif