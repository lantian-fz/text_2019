#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	//int sz;//节点个数
	struct Node *next;
}Node,*PerNode;

Node *Push(int x)//创建节点
{
	Node *s = (Node*)malloc(sizeof(Node));
	if (s == NULL)
		return NULL;
	s->data = x;
	s->next = NULL;
	return s;
}

void InitNode(PerNode *head)//初始化
{
	*head = Push(0);
}

void PushBackNode(PerNode *head, int arr[],int sz)//建立单向循环链表
{
	Node *p = *head;
	for (int i = 0; i < sz; i++)
	{
		Node *s = Push(arr[i]);
		p->next = s;
		p = s;
	}
	p->next = (*head)->next;
}

Node *DelNode(PerNode *head, int x)//删除节点
{
	Node *p = *head;
	Node *r = p->next;

	while (r != NULL &&r->data != x)
	{
		p = r;
		r = r->next;
	}
	if (r->data == r->next->data&&r->data == x)
	{
		r = r->next;
		p = p->next;
	}
	if (r == NULL)
		return NULL;
	else if ((*head)->next == r)
	{
		p = p->next;
		while (p->next != (*head)->next)
			p = p->next;
		(*head)->next = r->next;
		if (p->next == p)
		{
			free(r);
			r = NULL;
			(*head)->next = NULL;
			p = (*head)->next;
			return p;
		}
		p->next = r->next;
		free(r);
		r = NULL;
		return p;
	}
	else
	{
		p->next = r->next;
		free(r);
		r = NULL;
		return p;
	}
}

void ComeNode(PerNode *head,int m1)//出列
{
	Node *p = (*head)->next;
	int m2 = 0;
	int count = 0;
	while (p)
	{
		count++;
		if (count == m1)
		{
			printf("%d ", p->data);
			m2 = p->data;
			p = DelNode(head, p->data);
			count = 0;
		}
		if (count == m2)
		{
			printf("%d ", p->data);
			m2 = p->data;
			p = DelNode(head, p->data);
			count = 0;
		}
		if (p == NULL)
			break;
		p = p->next;
	}
}

int main()
{
	Node *per;
	int arr[7] = { 3, 1, 7, 2, 4, 8, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int m = 20;
	InitNode(&per);
	PushBackNode(&per, arr, sz);

	ComeNode(&per, m);//8 3 2 4 1 7 4

	printf("\n");
	system("pause");
	return 0;
}