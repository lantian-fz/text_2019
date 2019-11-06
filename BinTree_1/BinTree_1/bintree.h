#ifndef _BINTREE_H_
#define _BINTREE_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct BinTreeNode
{
	char data;
	struct BinTreeNode *leftChild;
	struct BinTreeNode *rightChild;
}BinTreeNode;

typedef struct BinTree
{
	BinTreeNode *root;
}BinTree;

typedef struct Queue
{
	BinTreeNode *date_q;
	struct Queue *next;
}Queue;

typedef struct LQueue
{
	size_t sz;
	Queue *front;
	Queue *rear;
}LinkQueue;

void BinTreeInit(BinTree *pbt);//��ʼ��
void BinTreeRoot(BinTree *pbt);
void BinTreeCreate(BinTreeNode **t);//����������

void PreOrderRoot(BinTree *pbt);//�������
void InOrderRoot(BinTree *pbt);//�������
void PostOrderRoot(BinTree *pbt);//�������
void LevelOrderRoot(BinTree *pbt);//��α���


void LQueueInit(LinkQueue *q);//��ʼ��
void LQueueEnter(LinkQueue *q, char x);//���
int LQueueDelete(LinkQueue *q, char *x);//����
char* LQueueFront(LinkQueue *q);//��ȡ��ͷԪ��

#endif