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

void SListShow(List *head)//��ʾ
{
	//assert(head);
	SListNode *p = (*head)->next;
	while (p!= NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}