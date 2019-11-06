#define _CRT_SECURE_NO_WARNINGS 1
#include "bintree.h"

void BinTreeInit(BinTree *pbt)//初始化
{
	pbt->root = NULL;
}

void BinTreeRoot(BinTree *pbt)
{
	BinTreeCreate(&pbt->root);
}
void BinTreeCreate(BinTreeNode **t)
{
	char str = 0;
	scanf("%c", &str);
	if (str == '.')
		*t = NULL;
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(*t);
		(*t)->data = str;
		BinTreeCreate(&(*t)->leftChild);
		BinTreeCreate(&(*t)->rightChild);
	}
}

void PreOrder(BinTreeNode **t)//先序遍历
{
	if (*t != NULL)
	{
		printf("%c ", (*t)->data);
		PreOrder(&(*t)->leftChild);
		PreOrder(&(*t)->rightChild);
	}
}

void PreOrderRoot(BinTree *pbt)//先序遍历
{
	PreOrder(&pbt->root);
}

void InOrder(BinTreeNode **t)//中序遍历
{
	if (*t != NULL)
	{
		InOrder(&(*t)->leftChild);
		printf("%c ", (*t)->data);
		InOrder(&(*t)->rightChild);
	}
}

void InOrderRoot(BinTree *pbt)//中序遍历
{
	InOrder(&pbt->root);
}

void PostOrder(BinTreeNode **t)//后序遍历
{
	if (*t != NULL)
	{
		PostOrder(&(*t)->leftChild);
		PostOrder(&(*t)->rightChild);
		printf("%c ", (*t)->data);
	}
}

void PostOrderRoot(BinTree *pbt)//后序遍历
{
	PostOrder(&pbt->root);
}

void LevelOrder(BinTreeNode **t)//层次遍历
{
	BinTreeNode *rt = *t;
	LinkQueue qu;
	char x = 0;
	LinkQueue *q = &qu;
	LQueueInit(&qu);//初始化队列
	if (rt == NULL)
		return;
	LQueueEnter(&qu, rt->data);//根节点入队
	while (q->front->next)
	{
		if (LQueueDelete(&qu, &x))
			printf("%c ", x);

		if (rt->leftChild)
			LQueueEnter(&qu, rt->leftChild->data);
		if (rt->rightChild)
			LQueueEnter(&qu, rt->rightChild->data);
	}
}

void LevelOrderRoot(BinTree *pbt)//层次遍历
{
	LevelOrder(&pbt->root);
}