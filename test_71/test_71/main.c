#define _CRT_SECURE_NO_WARNINGS 1
//Լɪ������
//41������һȦ����һ���˱��Ϊ1���ڶ����˱��Ϊ2����n���˱��Ϊn
//���Ϊ1���Ǹ���ʼ������������󣬱���Ϊ3���Ǹ����˳�Ȧ��
//���˳��Ǹ��˿�ʼ����һ�����ٴδ�1�������������ƣ�������˳����Ǹ��˵ı��
#include <stdio.h>
#include <stdlib.h>
#include <vld.h>
//�ȹ���һ������ѭ������
typedef struct Josephus
{
	int data;
	struct Josephus *next;
}Josephus,*JNode;

void Print(JNode *first)
{
	int count = 0;//������
	JNode n = *first;
	JNode before = NULL;
	while (n != n->next)//�ж�n�Ƿ�Ϊ���һ���ڵ㣬������ǽ���ѭ��
	{
		count++;
		if (count == 3)
		{
			before->next = n->next;
			//printf("%d ", n->data);
			count = 0;
			n = n->next;
		}
		else
		{
			before = n;
			n = n->next;
		}
	}
	printf("%d\n", n->data);
}

int main()
{
	JNode first = NULL;
	JNode pre = NULL;
	for (int i = 1; i <= 41; i++)//��������
	{
		//����ǵ�һ���ڵ�
		if (i == 1)
		{
			first = (JNode)malloc(sizeof(Josephus));
			first->data = i;
			first->next = NULL;
			pre = first;
			continue;
		}

		//������ǵ�һ���ڵ�
		JNode newNode = (JNode)malloc(sizeof(Josephus));
		newNode->data = i;
		newNode->next = NULL;
		pre->next = newNode;
		pre = newNode;

		//��������һ���ڵ㣬��Ҫ�����һ���ڵ����һ���ڵ��Ϊfirst
		if (i == 41)
			pre->next = first;
	}
	Print(&first);

	return 0;
}
