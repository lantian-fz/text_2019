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
static void DelMenu()
{
	printf("           选项\n");
	printf("*      1.删除后继节点       *\n");
	printf("*      2.删除指定节点       *\n");
	printf("*      3.删除指定位置节点   *\n");
	printf("*      0.退出               *\n");
}

void SListDel(List *head)//删除节点
{
	assert(head);
	int input = 0;
	do
	{
		DelMenu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			SListDelBack(head);
			break;
		case 2:
			SListDelSelf(head);
			break;
		case 3:
			SListDelSite(head);
			break;
		case 0:
			break;
		default:
			printf("没有这个选项！\n");
			break;
		}
	} while (input);
}

void SListPushSite(List *head)//往指定位置插入节点
{
	assert(head);
	SListNode *p = *head;
	int count = 0;
	int num = 0;
	printf("请输入要插入节点的位置和要插入的节点：");
	scanf("%d %d", &count, &num);
	count--;
	while (count--)
	{
		p = p->next;
	}
	SListNode *s = (SListNode*)malloc(sizeof(SListNode));
	assert(s);
	s->data = num;
	s->next = p->next;
	p->next = s;
}

void SListReverse(List *head)//逆置链表
{
	assert(head);
	int n = 0;
	SListNode *p = (*head)->next;
	SListNode *q = (*head)->next;
	if (p == NULL)
		return;

	while (q != NULL)
	{
		q = q->next;
		n++;
		if (n == 1)
			p->next = NULL;
		else
			p->next = (*head)->next;
		(*head)->next = p;
		p = q;
	}
}