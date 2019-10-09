#define _CRT_SECURE_NO_WARNINGS 1

#include "LinkedStack.h"

LinkedStackNode *Node(Datatype x)
{
	LinkedStackNode *s = (LinkedStackNode*)malloc(sizeof(LinkedStackNode));
	assert(s);
	s->data = x;
	s->next = NULL;
	return s;
}

void LinkedStackInit(LinkedStackNode **top)//初始化
{
	(*top) = Node(0);
}

void LinkedStackPush(LinkedStackNode **top,Datatype x)//入栈
{
	LinkedStackNode *s = Node(x);
	s->next = (*top)->next;
	(*top)->next = s;
}

int LinkedStackPop(LinkedStackNode **top, Datatype *x)//出栈
{
	if ((*top)->next == NULL)
		return 0;
	else
	{
		LinkedStackNode *tmp = (*top)->next;
		*x = tmp->data;
		(*top)->next = tmp->next;
		free(tmp);
		tmp = NULL;
		return 1;
	}
}

void LinkedStackShow(LinkedStackNode *top)//显示
{
	LinkedStackNode *p = top->next;
	while (p)
	{
		printf("%u ", p->data);
		p = p->next;
	}
	printf("\n");
}

int LinkedStackLength(LinkedStackNode *top)//求长度
{
	LinkedStackNode *p = top->next;
	int count = 0;
	while (p)
	{
		p = p->next;
		count++;
	}
	return count;
}

int LinkedStackGetTop(LinkedStackNode *top, Datatype *x)//读取栈顶元素
{
	if (top->next == NULL)
		return 0;
	*x = top->next->data;
	return 1;
}

int LinkedStackEmpty(LinkedStackNode *top)//判断栈是否为空
{
	if (top->next == NULL)
		return 1;
	else
		return 0;
}