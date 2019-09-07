#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListInit(SeqList* seq, int cap)
{
	assert(seq);
	seq->base = (int*)malloc(sizeof(int)*cap);
	if (seq->base == NULL)
		return;
	seq->capcacity = cap;
	seq->sz = 0;
}
void ListPushBack(SeqList* seq)//尾插法
{
	assert(seq);
	int count = 0;
	printf("请输入要插入的数据（以-1结束）：");
	while (scanf("%d", &count), count != -1)
	{
		//判断顺序表是否满
		if (seq->sz >= seq->capcacity)
		{
			printf("顺序表已满，无法插入数据 %d\n",count);
			//return;
		}
		else
			seq->base[seq->sz++] = count;
	}
}

void ListPushFront(SeqList* seq)//头插法
{
	assert(seq);
	int count = 0;
	printf("请输入要插入的数据（以-1结束）：");
	while (scanf("%d", &count), count != -1)
	{
		//判断顺序表是否满
		if (seq->sz >= seq->capcacity)
		{
			printf("顺序表已满，无法插入数据 %d\n", count);
			//return;
		}
		else
		{
			int i = 0;
			for (i = seq->sz; i >= 0; i--)
			{
				seq->base[i] = seq->base[i-1];
			}
			seq->base[0] = count;
			seq->sz++;
		}
	}
}

void ListShow(SeqList* seq)//显示
{
	assert(seq);
	int i = 0;
	for (i = 0; i < seq->sz; i++)
		printf("%d ", seq->base[i]);
	printf("\n");
}

void ListLength(SeqList* seq)//求表长
{
	assert(seq);
	printf("表长 = %d\n", seq->sz);
}

static void MenuFind()
{
	printf("             选项          \n");
	printf("*     1. 按位置查找元素     *\n");
	printf("*     2. 按元素查找位置     *\n");
	printf("*     0. 退出查找           *\n");
}

void ListFind(SeqList* seq)//查找
{
	assert(seq);
	int input = 0;

	do
	{
		MenuFind();
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ListFindPos(seq);
			break;
		case 2:
			ListFindVal(seq);
			break;
		case 0:
			break;
		default:
			printf("没有这个选项\n");
			break;
		}
	} while (input);
}

void ListChange(SeqList* seq)//修改
{
	assert(seq);
	int Old = 0;
	int New = 0;
	printf("请输入要修改的位置和修改后的值：");
	scanf("%d %d", &Old, &New);

	if (Old >= 1 && Old <= MAX)
	{
		if (Old <= seq->sz)
		{
			seq->base[Old-1] = New;
			printf("修改成功！\n");
		}
		else
			printf("这个位置没有数据！修改失败！\n");
	}
	else
		printf("输入位置越界！\n");
}

void ListReverse(SeqList* seq)//逆置
{
	assert(seq);
	int left = 0;
	int right = seq->sz - 1;
	if (seq->sz == 0)
	{
		printf("没有数据！\n");
		return;
	}
	while (left < right)
	{
		int tmp = seq->base[left];
		seq->base[left++] = seq->base[right];
		seq->base[right--] = tmp;
	}
	printf("逆置成功！\n");
}

static int SortInt(const void *e1, const void *e2)
{
	return *((int*)e1) - *((int*)e2);
}

void ListSort(SeqList* seq)//排序
{
	assert(seq);
	if (seq->sz == 0)
	{
		printf("没有数据！\n");
		return;
	}
	qsort(seq->base, seq->sz, sizeof(seq->base[0]),SortInt);
	printf("排序成功！\n");
}

void ListInsert(SeqList* seq)//插入
{
	assert(seq);
	if (seq->sz == 0)
	{
		printf("没有数据！\n");
		return;
	}
	if (seq->sz < seq->capcacity)
	{
		int count = 0;
		int input = 0;
		printf("请输入要插入的位置和元素：");
		scanf("%d%d", &count, &input);
		if (count >= 1 && count <= seq->sz + 1)
		{
			int i = 0;
			for (i = seq->sz; i >= count-1; i--)
			{
				seq->base[i] = seq->base[i-1];
			}
			seq->base[count - 1] = input;
			seq->sz++;
		}
		else
			printf("输入位置越界！\n");
	}
	else
		printf("顺序表已满，无法插入！\n");
}

void MenuDelete()
{
	printf("         选项 \n");
	printf("    1.按位置删除     *\n");
	printf("    2.按元素删除     *\n");
	printf("    0.退出           *\n");
}

void ListDelete(SeqList* seq)//删除
{
	assert(seq);
	int input = 0;
	if (seq->sz == 0)
	{
		printf("没有数据！\n");
		return;
	}
	do
	{
		MenuDelete();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ListDeletePos(seq);
			break;
		case 2:
			ListDeleteVal(seq);
			break;
		case 0:
			break;
		default:
			printf("没有这个选项\n");
			break;
		}
	} while (input);
}

void ListFree(SeqList* seq)//清空
{
	assert(seq);
	if (seq->base != NULL)
	{
		free(seq->base);
		seq->base = NULL;
		ListInit(seq, MAX);
	}
	printf("清空成功！\n");
}

void ListExit(SeqList* seq)//退出
{
	assert(seq);
	if (seq->base != NULL)
	{
		free(seq->base);
		seq->base = NULL;
	}
}