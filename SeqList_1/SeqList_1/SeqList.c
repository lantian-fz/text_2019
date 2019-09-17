#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

SListNode* SListPush(int x)
{
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s);
	s->data = x;
	s->next = NULL;
	return s;
}
void SListInit(List *head)//初始化
{
	*head = SListPush(0);
}

void SListPushBack(List *head)//尾插法
{
	int x = 0;
	SListNode *p = *head; 
	printf("请输入整数（以-1结束）：");
	while(x != -1)
	{
		scanf("%d", &x);
		if (x == -1)
			break;
		SListNode *s = SListPush(x);
		assert(s);
		p->next = s;
		p = s;
	} 
}

void SListPushFront(List *head)//头插法
{
	int x = 0;
	int i = 0;
	assert(head);
	SListNode *p = *head;
	printf("请输入整数（以-1结束）：");
	while (i++,x != -1)
	{
		scanf("%d", &x);
		if (x == -1)
			break;
		if (i == 1)
		{
			SListNode *s = SListPush(x);
			assert(s);
			p->next = s;
			p = s;
		}
		else
		{
			SListNode *s = SListPush(x);
			assert(s);
			s->next = (*head)->next;
			(*head)->next = s;
		}
	}
}

void SListShow(List *head)//显示
{
	assert(head);
	SListNode *p = (*head)->next;
	while (p!= NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

void SListLenth(List *head)//求表长
{
	assert(head);
	SListNode *p = (*head)->next;
	int x = 0;
	while (p != NULL)
	{
		p = p->next;
		x++;
	}
	printf("表长 = %d\n", x);
}