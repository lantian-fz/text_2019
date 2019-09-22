#define _CRT_SECURE_NO_WARNINGS 1
//带头节点的单链表
#include "SeqList.h"

void menu()
{
	printf("           选项\n");
	printf("*   1.尾插法  2.头插法   *\n");
	printf("*   3.显示    4.求表长   *\n");
	printf("*   5.删除    6.插入     *\n");
	printf("*   7.逆置    8.清空     *\n");
	printf("*        0.退出          *\n");
}

void test()
{
	SListNode *my_SList;
	int input = 0;
	SListInit(&my_SList);

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			SListPushBack(&my_SList);
			break;
		case 2:
			SListPushFront(&my_SList);
			break;
		case 3:
			SListShow(&my_SList);
			break;
		case 4:
			SListLenth(&my_SList);
			break;
		case 5:
			SListDel(&my_SList);
			break;
		case 6:
			SListPushSite(&my_SList);
			break;
		case 7:
			SListReverse(&my_SList);
			break;
		case 9:
			SListEnter(&my_SList);
			break;
		case 0:
			SListEnter(&my_SList);
			SListEnterHead(&my_SList);
			break;
		default:
			printf("没有这个选项！\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	printf("\n");
	system("pause");
	return 0;
}