#define _CRT_SECURE_NO_WARNINGS 1
//不带头节点的单链表
#include "SeqList.h"

void menu()
{
	printf("           选项\n");
	printf("*   1.尾插法  2.头插法   *\n");
	printf("*   3.显示    4.求表长   *\n");
	printf("*   5.删除    6.插入     *\n");
	printf("*   5.逆置    6.修改     *\n");
	printf("*   7.排序    8.查找     *\n");
	printf("*   9.清空    0.退出     *\n");
}

void test()
{
	SListNode my_SList;
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

			break;
		case 3:
			SListShow(&my_SList);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 0:
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