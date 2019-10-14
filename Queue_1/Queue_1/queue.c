#define _CRT_SECURE_NO_WARNINGS 1

#include "queue.h"

void QueueInit(CircleQueue *q)//��ʼ��
{
	q->data = (Datatype*)malloc(sizeof(Datatype)*MAXSIZE);
	assert(q->data);
	q->front = 0;
	q->rear = 0;
}

int QueueEmpty(CircleQueue *q)//�жӿ�
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

int QueueFull(CircleQueue *q)//�ж���
{
	if ((q->rear + 1) % MAXSIZE == q->front)
		return 1;
	else
		return 0;
}

int QueueLength(CircleQueue *q)//�󳤶�
{
	return ((q->rear - q->front + MAXSIZE) % MAXSIZE);
}

int QueueEnter(CircleQueue *q, Datatype x)//���
{
	if (QueueFull(q))
		return 0;
	q->data[q->rear] = x;
	q->rear = (q->rear + 1) % MAXSIZE;
	return 1;
}

int QueueDelete(CircleQueue *q, Datatype *x)//����
{
	if (QueueEmpty(q))
		return 0;
	*x = q->data[q->front];
	q->front = (q->front + 1) % MAXSIZE;
	return 1;
}

int QueueGetFront(CircleQueue *q, Datatype *x)//��ȡ��ͷԪ��
{
	if (QueueEmpty(q))
		return 0;
	*x = q->data[q->front];
	return 1;
}

void QueueShow(CircleQueue *q)//��ʾ
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