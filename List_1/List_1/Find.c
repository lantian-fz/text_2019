#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListFindPos(SeqList* seq)//��λ�ò���
{
	assert(seq);
	int count = 0;
	printf("������Ҫ���ҵ�λ�ã�");
	scanf("%d", &count);

	if (count >= 1 && count <= MAX)
	{
		if (count <= seq->sz + 1)
			printf("��%dλ��Ԫ����%d\n",count, seq->base[count - 1]);
		else
			printf("���λ���������ݣ�\n");
	}
	else
		printf("����λ��Խ�磡\n");
}

void ListFindVal(SeqList* seq)//��Ԫ�ز���
{
	assert(seq);
	int i = 0;
	int count = 0;
	printf("������Ҫ���ҵ�Ԫ�أ�");
	scanf("%d", &count);

	for (i = 0; i < seq->sz; i++)
	{
		if (seq->base[i] == count)
		{
			printf("Ԫ��%d��λ��Ϊ��%dλ\n", count, i + 1);
			break;
		}
	}
	if (i == seq->sz)
		printf("û�����Ԫ�أ�\n");
}