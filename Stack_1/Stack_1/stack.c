#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

void SeqStackInit(SeqStack *st)//��ʼ��ջ
{
	assert(st);
	st->base = (Datatype*)malloc(sizeof(Datatype)*MAXCAP);
	assert(st->base);
	st->top = 0;
}

int SeqStackPush(SeqStack *st, Datatype x)//��ջ
{
	if (st->top == MAXCAP)
		return 0;
	st->base[st->top++] = x;
	return 1;
}

int SeqStackPop(SeqStack *st, Datatype *x)//��ջ
{
	if (st->top == 0)
		return 0;
	*x = st->base[st->top-1];
	st->top--;
	return 1;
}

void SeqStackShow(SeqStack *st)//��ʾջ��Ԫ��
{
	for (int i = st->top - 1; i >= 0; i--)
		printf("%u ", st->base[i]);
	printf("\n");
}

int SeqStackGetTop(SeqStack *st, Datatype *x)//ȡջ��Ԫ��
{
	if (st->top == 0)
		return 0;
	*x = st->base[st->top - 1];
	return 1;
}

int SeqStackEmpty(SeqStack *st)//�ж�ջ�Ƿ�Ϊ��
{
	if (st->top == 0)
		return 1;
	else
		return 0;
}

int SeqStackFull(SeqStack *st)//�ж�ջ�Ƿ���
{
	if (st->top == MAXCAP)
		return 1;
	else
		return 0;
}

int SeqStackLength(SeqStack *st)//��ջ��
{
	return st->top;
}