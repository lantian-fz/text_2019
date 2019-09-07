#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void menu()
{
	printf("            选项\n");
	printf("*   1.尾插法    2.头插法    *\n");
	printf("*   3.显示      4.求表长    *\n");
	printf("*   5.查找      6.修改      *\n");
	printf("*   7.逆置      8.排序      *\n");
	printf("*   9.插入      10.删除     *\n");
	printf("*   11.清空     0.退出      *\n");
}

void test()
{
	int input = 0;
	SeqList my_list;
	//先进行初始化
	ListInit(&my_list,MAX);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ListPushBack(&my_list);
			break;
		case 2:
			ListPushFront(&my_list);
			break;
		case 3:
			ListShow(&my_list);
			break;
		case 4:
			ListLength(&my_list);
			break;
		case 5:
			ListFind(&my_list);
			break;
		case 6:
			ListChange(&my_list);
			break;
		case 7:
			ListReverse(&my_list);
			break;
		case 8:
			ListSort(&my_list);
			break;
		case 9:
			ListInsert(&my_list);
			break;
		case 10:
			ListDelete(&my_list);
			break;
		case 11:
			ListFree(&my_list);
			break;
		case 0:
			ListExit(&my_list);
			printf("程序运行结束！\n");
			break;
		default:
			printf("没有这个选项\n");
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