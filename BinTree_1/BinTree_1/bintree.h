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


void BinTreeInit(BinTree *pbt);//初始化
void BinTreeRoot(BinTree *pbt);
void BinTreeCreate(BinTreeNode **t);//创建二叉树

void PreOrderRoot(BinTree *pbt);//先序遍历
void InOrderRoot(BinTree *pbt);//中序遍历
void PostOrderRoot(BinTree *pbt);//后序遍历

#endif