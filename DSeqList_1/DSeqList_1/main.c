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
	printf("*   13.按元素删除   14.清空      *\n");
	printf("*   15.按位置修改   16.修改元素  *\n");
	printf("*   17.销毁         0.退出       *\n");
}

int main()
{
	int input = 0;
	DList mylist;
	DListInit(&mylist);
	do
	{
		int k = 0;
		size_t x = 0;
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
			DListSort(&mylist);
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
			DListReverse(&mylist);
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
			printf("请输入要删除的位置：");
			scanf("%u", &x);
			if (DListSiteDelete(&mylist, x) == 0)
				printf("删除失败，要删除的位置没有元素\n");
			else
				printf("删除成功\n");
			break;
		case 13:
			printf("请输入要删除的元素：");
			scanf("%u", &key);
			k = DListDataDelete(&mylist, key);
			if (k == 0)
				printf("删除失败，没有这个元素\n");
			else
				printf("删除成功，删除元素个数为 %d 个\n", k);
			break;
		case 14:
			DListEmpty(&mylist);
			break;
		case 15:
			printf("请输入要修改的位置及修改后的元素：");
			scanf("%u %u", &x, &key);
			if (DListSiteAlter(&mylist, x, key) == 0)
				printf("输入位置有误，修改失败！\n");
			else
				printf("修改成功！\n");
			break;
		case 16:
			printf("请输入要修改的元素及修改后的元素：");
			scanf("%u %u", &x, &key);
			k = DListDataAlter(&mylist, x, key);
			if (k == 0)
				printf("修改失败，没有找到要修改的元素\n");
			else
				printf("修改成功，修改元素个数为 %d 个\n", k);
			break;
		case 17:
			DListEmptyPlus(&mylist);
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