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

void LQueueInit(LinkQueue *q);//初始化
void LQueueEnter(LinkQueue *q, Datatype x);//入队
int LQueueDelete(LinkQueue *q, Datatype *x);//出队
void LQueueShow(LinkQueue *q);//显示队列元素
size_t LQueueLength(LinkQueue *q);//求队列长度
int LQueueGetFront(LinkQueue *q, Datatype *x);//读取队头元素

#endif