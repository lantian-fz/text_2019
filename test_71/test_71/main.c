#define _CRT_SECURE_NO_WARNINGS 1
//约瑟夫环问题
//41个人坐一圈，第一个人编号为1，第二个人编号为2，第n个人编号为n
//编号为1的那个开始报数，依次向后，报数为3的那个人退出圈，
//自退出那个人开始的下一个人再次从1报数，依次类推，求最后退出的那个人的编号
#include <stdio.h>
#include <stdlib.h>
#include <vld.h>
//先构造一个单向循环链表
typedef struct Josephus
{
	int data;
	struct Josephus *next;
}Josephus,*JNode;

void Print(JNode *first)
{
	int count = 0;//计数器
	JNode n = *first;
	JNode before = NULL;
	while (n != n->next)//判断n是否为最后一个节点，如果不是进入循环
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
	for (int i = 1; i <= 41; i++)//创建链表
	{
		//如果是第一个节点
		if (i == 1)
		{
			first = (JNode)malloc(sizeof(Josephus));
			first->data = i;
			first->next = NULL;
			pre = first;
			continue;
		}

		//如果不是第一个节点
		JNode newNode = (JNode)malloc(sizeof(Josephus));
		newNode->data = i;
		newNode->next = NULL;
		pre->next = newNode;
		pre = newNode;

		//如果是最后一个节点，需要让最后一个节点的下一个节点变为first
		if (i == 41)
			pre->next = first;
	}
	Print(&first);

	return 0;
}
