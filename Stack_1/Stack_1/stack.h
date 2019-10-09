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

void SeqStackInit(SeqStack *st);//初始化栈
int SeqStackPush(SeqStack *st, Datatype x);//入栈
int SeqStackPop(SeqStack *st, Datatype *x);//出栈
void SeqStackShow(SeqStack *st);//显示栈中元素
int SeqStackGetTop(SeqStack *st, Datatype *x);//取栈顶元素
int SeqStackEmpty(SeqStack *st);//判断栈是否为空
int SeqStackFull(SeqStack *st);//判断栈是否满
int SeqStackLength(SeqStack *st);//求栈长

#endif