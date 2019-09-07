#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListFindPos(SeqList* seq)//按位置查找
{
	assert(seq);
	int count = 0;
	printf("请输入要查找的位置：");
	scanf("%d", &count);

	if (count >= 1 && count <= MAX)
	{
		if (count <= seq->sz + 1)
			printf("第%d位的元素是%d\n",count, seq->base[count - 1]);
		else
			printf("这个位置暂无数据！\n");
	}
	else
		printf("输入位置越界！\n");
}

void ListFindVal(SeqList* seq)//按元素查找
{
	assert(seq);
	int i = 0;
	int count = 0;
	printf("请输入要查找的元素：");
	scanf("%d", &count);

	for (i = 0; i < seq->sz; i++)
	{
		if (seq->base[i] == count)
		{
			printf("元素%d的位置为第%d位\n", count, i + 1);
			break;
		}
	}
	if (i == seq->sz)
		printf("没有这个元素！\n");
}