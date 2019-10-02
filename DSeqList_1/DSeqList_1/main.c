#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void Menu()
{
	printf("              选项\n");
	printf("*   1.尾插法        2.头插法     *\n");
	printf("*   3.显示          4.求表长     *\n");
	printf("*   5.后插          6.前插       *\n");
	printf("*   7.按序号插      8.排序       *\n");
	printf("*   9.按位置查找    10.逆置      *\n");
	printf("*   11.按元素查找   12.按位置删  *\n");
	printf("*   13.按元素删除   14.删除本身  *\n");
	printf("*   15.清空         0.退出       *\n");
}

int main()
{
	int input = 0;
	DList mylist;
	DListInit(&mylist);
	do
	{
		DataType x = 0;
		Menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入元素(以-1结束):");
			while (scanf("%u", &x), x != -1)
				DListPushBack(&mylist, x);
			break;
		case 2:
			printf("请输入元素(以-1结束):");
			while (scanf("%u", &x), x != -1)
				DListPushFront(&mylist, x);
			break;
		case 3:
			DListShow(&mylist);
			break;
		case 4:
			printf("表长 = %u\n",DListLen(&mylist));
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新输入！\n");
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}