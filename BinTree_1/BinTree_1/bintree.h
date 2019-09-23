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


void BinTreeInit(BinTree *pbt);//��ʼ��
void BinTreeRoot(BinTree *pbt);
void BinTreeCreate(BinTreeNode **t);//����������

void PreOrderRoot(BinTree *pbt);//�������
void InOrderRoot(BinTree *pbt);//�������
void PostOrderRoot(BinTree *pbt);//�������

#endif