#ifndef _STACK_H_
#define _STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXCAP 8

typedef size_t Datatype;

typedef struct SeqStack
{
	Datatype *base;
	size_t top;
}SeqStack;

void SeqStackInit(SeqStack *st);//��ʼ��ջ
int SeqStackPush(SeqStack *st, Datatype x);//��ջ
int SeqStackPop(SeqStack *st, Datatype *x);//��ջ
void SeqStackShow(SeqStack *st);//��ʾջ��Ԫ��
int SeqStackGetTop(SeqStack *st, Datatype *x);//ȡջ��Ԫ��
int SeqStackEmpty(SeqStack *st);//�ж�ջ�Ƿ�Ϊ��
int SeqStackFull(SeqStack *st);//�ж�ջ�Ƿ���
int SeqStackLength(SeqStack *st);//��ջ��

#endif