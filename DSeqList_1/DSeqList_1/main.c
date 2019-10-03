#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void Menu()
{
	printf("              选项\n");
	printf("*   1.尾插法        2.头插法     *\n");
	printf("*   3.显示          4.求表长     *\n");
	printf("*   5.后插          6.前插       *\n");
	printf("*   7.按位置插入    8.排序       *\n");
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
		DataType key = 0;
		DListNode *p = NULL;

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
			printf("你要在哪个元素后面插入：");
			scanf("%u", &x);
			printf("请输入要插入的元素：");
			scanf("%u", &key);
			if (DListPushRear(&mylist, DListFindData(&mylist, x), key) == 0)
				printf("插入失败！\n");
			else
				printf("插入成功！\n");
			break;
		case 6:
			printf("你要在哪个元素前面插入：");
			scanf("%u", &x);
			printf("请输入要插入的元素：");
			scanf("%u", &key);
			if (DListPushFormer(&mylist, DListFindData(&mylist, x), key) == 0)
				printf("插入失败！\n");
			else
				printf("插入成功！\n");
			break;
		case 7:
			printf("请输入要插入的位置及元素：");
			scanf("%u %u", &x, &key);
			if (DListPushSite(&mylist, x, key) == 0)
				printf("输入位置有误，插入失败！\n");
			else
				printf("插入成功！\n");
			break;
		case 8:
			break;
		case 9:
			printf("请输入要查找的位置：");
			scanf("%u", &x);
			p = DListFindSite(&mylist, x);
			if (p == NULL)
				printf("你要查找的位置没有元素！\n");
			else
				printf("此位置的元素为 %u\n", p->data);
			break;
		case 10:
			break;
		case 11:
			printf("请输入要查找的元素：");
			scanf("%u", &x); 
			p = DListFindData(&mylist, x);
			if (p == NULL)
				printf("你要查找的元素不存在！\n");
			else
				printf("找到元素 %u\n", p->data);
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 0:
			break;
		default:
			printf("输入有误，请重新输入！\n");
		}
	} while (input);
 
	printf("\n");
	//system("pause");
	return 0;
}