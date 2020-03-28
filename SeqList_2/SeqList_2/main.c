#define _CRT_SECURE_NO_WARNINGS 1
//不带头节点的单链表
#include "seqlist.h"

void menu()
{
	printf("          选项\n");
	printf("*   1.尾插    2.头插     *\n");
	printf("*   3.显示    4.表长     *\n");
	printf("*   5.删除    6.插入     *\n");
	printf("*   7.逆置    8.清空     *\n");
	printf("*        0.退出          *\n");
}

int main()
{
	SeqList *mySList;
	Init(&mySList);
	PushBack(&mySList, 1);
	PushBack(&mySList, 2);
	PushBack(&mySList, 3);
	PushBack(&mySList, 4);
	PushBack(&mySList, 5);

	//PushFront(&mySList, 1);
	//PushFront(&mySList, 2);
	//PushFront(&mySList, 3);
	//DelSelf(&mySList, 1);
	//SeqList *p1 = reverseList_1(&mySList);
	SeqList *p2 = reverseList_2(&mySList,2,4);

	return 0;
}