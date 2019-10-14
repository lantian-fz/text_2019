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

void QueueInit(CircleQueue *q);//初始化
int QueueEmpty(CircleQueue *q);//判队空
int QueueFull(CircleQueue *q);//判队满
int QueueLength(CircleQueue *q);//求长度
int QueueEnter(CircleQueue *q, Datatype x);//入队
int QueueDelete(CircleQueue *q, Datatype *x);//出队
int QueueGetFront(CircleQueue *q, Datatype *x);//读取队头元素
void QueueShow(CircleQueue *q);//显示

#endif 