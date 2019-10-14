#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

void QueueInit(CircleQueue *q)//初始化
{
	q->data = (Datatype*)malloc(sizeof(Datatype)*MAXSIZE);
	assert(q->data);
	q->front = 0;
	q->rear = 0;
}

int QueueEmpty(CircleQueue *q)//判队空
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

int QueueFull(CircleQueue *q)//判队满
{
	if ((q->rear + 1) % MAXSIZE == q->front)
		return 1;
	else
		return 0;
}

int QueueLength(CircleQueue *q)//求长度
{
	return ((q->rear - q->front + MAXSIZE) % MAXSIZE);
}

int QueueEnter(CircleQueue *q, Datatype x)//入队
{
	if (QueueFull(q))
		return 0;
	q->data[q->rear] = x;
	q->rear = (q->rear + 1) % MAXSIZE;
	return 1;
}

int QueueDelete(CircleQueue *q, Datatype *x)//出队
{
	if (QueueEmpty(q))
		return 0;
	*x = q->data[q->front];
	q->front = (q->front + 1) % MAXSIZE;
	return 1;
}

int QueueGetFront(CircleQueue *q, Datatype *x)//读取队头元素
{
	if (QueueEmpty(q))
		return 0;
	*x = q->data[q->front];
	return 1;
}

void QueueShow(CircleQueue *q)//显示
{
	int n = QueueLength(q);
	int i = q->front;
	while (n--)
	{
		printf("%d ", q->data[i]);
		i = (i + 1) % MAXSIZE;
	}
	printf("\n");
}