#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

Queue *Node(int x)//申请新节点
{
	Queue *s = (Queue*)malloc(sizeof(Queue));
	assert(s);
	s->data = x;
	s->next = NULL;
	return s;
}

void LQueueInit(LinkQueue *q)//初始化
{
	Queue *s = Node(0);
	q->front = s;
	q->rear = s;
	q->sz = 0;
}

void LQueueEnter(LinkQueue *q, Datatype x)//入队
{
	Queue *s = Node(x);
	q->rear->next = s;
	q->rear = s;
	q->sz++;
}

int LQueueDelete(LinkQueue *q, Datatype *x)//出队
{
	if (q->front->next == NULL)
		return 0;
	else
	{
		Queue *r = q->front->next;
		*x = r->data;
		q->front->next = r->next;
		q->sz--;
		free(r);
		r = NULL;
		return 1;
	}
}

void LQueueShow(LinkQueue *q)//显示队列元素
{
	Queue *p = q->front->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

size_t LQueueLength(LinkQueue *q)//求队列长度
{
	return q->sz;
}

int LQueueGetFront(LinkQueue *q, Datatype *x)//读取队头元素
{
	if (q->front->next == NULL)
		return 0;
	else
	{
		*x = q->front->next->data;
		return 1;
	}
}