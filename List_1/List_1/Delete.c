#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListDeletePos(SeqList* seq)//��λ��ɾ��
{
	assert(seq);
	int count = 0;

	printf("������Ҫɾ����λ�ã�");
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
			printf("ɾ���ɹ���\n");
		}
		else
			printf("���λ��û�����ݣ�\n");
	}
	else
		printf("����λ��Խ�磡\n");
}

void ListDeleteVal(SeqList* seq)//��Ԫ��ɾ��
{
	assert(seq);
	int i = 0;
	int count = 0;
	printf("������Ҫɾ����Ԫ�أ�");
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
	printf("ɾ���ɹ���\n");
}