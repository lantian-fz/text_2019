#define _CRT_SECURE_NO_WARNINGS 1
//����ͷ�ڵ�ĵ�����
#include "seqlist.h"

void menu()
{
	printf("          ѡ��\n");
	printf("*   1.β��    2.ͷ��     *\n");
	printf("*   3.��ʾ    4.��     *\n");
	printf("*   5.ɾ��    6.����     *\n");
	printf("*   7.����    8.���     *\n");
	printf("*        0.�˳�          *\n");
}

int main()
{
	SeqList *mySList;
	Init(&mySList);
	PushBack(&mySList, 1);
	PushBack(&mySList, 1);
	//PushBack(&mySList, 6);
	//PushBack(&mySList, 7);

	//PushFront(&mySList, 1);
	//PushFront(&mySList, 2);
	//PushFront(&mySList, 3);
	DelSelf(&mySList, 1);

	return 0;
}