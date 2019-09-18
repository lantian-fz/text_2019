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
void SListInit(List *head)//��ʼ��
{
	*head = SListPush(0);
}

void SListPushBack(List *head)//β�巨
{
	int x = 0;
	SListNode *p = *head; 
	printf("��������������-1��������");
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

void SListPushFront(List *head)//ͷ�巨
{
	int x = 0;
	int i = 0;
	assert(head);
	SListNode *p = *head;
	printf("��������������-1��������");
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

void SListShow(List *head)//��ʾ
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

void SListLenth(List *head)//���
{
	assert(head);
	SListNode *p = (*head)->next;
	int x = 0;
	while (p != NULL)
	{
		p = p->next;
		x++;
	}
	printf("�� = %d\n", x);
}
static void DelMenu()
{
	printf("           ѡ��\n");
	printf("*      1.ɾ����̽ڵ�       *\n");
	printf("*      2.ɾ��ָ���ڵ�       *\n");
	printf("*      3.ɾ��ָ��λ�ýڵ�   *\n");
	printf("*      0.�˳�               *\n");
}

void SListDel(List *head)//ɾ���ڵ�
{
	assert(head);
	int input = 0;
	do
	{
		DelMenu();
		printf("��ѡ��");
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
			printf("û�����ѡ�\n");
			break;
		}
	} while (input);
}

void SListPushSite(List *head)//��ָ��λ�ò���ڵ�
{
	assert(head);
	SListNode *p = *head;
	int count = 0;
	int num = 0;
	printf("������Ҫ����ڵ��λ�ú�Ҫ����Ľڵ㣺");
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

void SListReverse(List *head)//��������
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