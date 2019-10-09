#ifndef _LINKEDSTACK_H_
#define _LINKEDSTACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef size_t Datatype;

typedef struct LinkedStackNode
{
	Datatype data;
	struct LinkedStackNode *next;
}LinkedStackNode;

void LinkedStackInit(LinkedStackNode **top);//初始化
void LinkedStackPush(LinkedStackNode **top,Datatype x);//入栈
int LinkedStackPop(LinkedStackNode **top, Datatype *x);//出栈
void LinkedStackShow(LinkedStackNode *top);//显示
int LinkedStackLength(LinkedStackNode *top);//求长度
int LinkedStackGetTop(LinkedStackNode *top, Datatype *x);//读取栈顶元素
int LinkedStackEmpty(LinkedStackNode *top);//判断栈是否为空

#endif