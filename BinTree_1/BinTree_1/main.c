#define _CRT_SECURE_NO_WARNINGS 1

#include "bintree.h"

int main()
{
	BinTree bt;
	BinTreeInit(&bt);
	BinTreeRoot(&bt);

	printf("���������");
	PreOrderRoot(&bt);

	printf("\n���������");
	InOrderRoot(&bt);

	printf("\n���������");
	PostOrderRoot(&bt);
	printf("\n");
	system("pause");
	return 0;
}