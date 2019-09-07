#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListDeletePos(SeqList* seq)//按位置删除
{
	assert(seq);
	int count = 0;

	printf("请输入要删除的位置：");
	scanf("%d", &count);
	if (count >= 1 && count <= MAX)
	{
		if (count <= seq->sz)
		{
			int i = 0;
			for (i = count - 1; i < seq->sz; i++)
			{
				seq->base[i] = seq->base[i + 1];
			}
			seq->sz--;
			printf("删除成功！\n");
		}
		else
			printf("这个位置没有数据！\n");
	}
	else
		printf("输入位置越界！\n");
}

void ListDeleteVal(SeqList* seq)//按元素删除
{
	assert(seq);
	int i = 0;
	int count = 0;
	printf("请输入要删除的元素：");
	scanf("%d", &count);

	for (i = 0; i < seq->sz; i++)
	{
		if (seq->base[i] == count)
		{
			int j = 0;
			for (j = i; j < seq->sz; j++)
				seq->base[j] = seq->base[j + 1];
			seq->sz--;
		}
	}
	printf("删除成功！\n");
}