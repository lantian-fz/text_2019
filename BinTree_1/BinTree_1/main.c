#define _CRT_SECURE_NO_WARNINGS 1

#include "bintree.h"
//测试数据  ABC..DE..F..G.H..
int main()
{
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeRoot(&bt);

	printf("先序遍历：");
	PreOrderRoot(&bt);

	printf("\n中序遍历：");
	InOrderRoot(&bt);

	printf("\n后序遍历：");
	PostOrderRoot(&bt);
	printf("\n");

	//printf("\n层次遍历：");
	//LevelOrderRoot(&bt);
	//printf("\n");

	system("pause");
	return 0;
}