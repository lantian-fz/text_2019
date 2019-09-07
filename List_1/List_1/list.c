#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void ListInit(SeqList* seq, int cap)
{
	assert(seq);
	seq->base = (int*)malloc(sizeof(int)*cap);
	if (seq->base == NULL)
		return;
	seq->capcacity = cap;
	seq->sz = 0;
}
void ListPushBack(SeqList* seq)//β�巨
{
	assert(seq);
	int count = 0;
	printf("������Ҫ��������ݣ���-1��������");
	while (scanf("%d", &count), count != -1)
	{
		//�ж�˳����Ƿ���
		if (seq->sz >= seq->capcacity)
		{
			printf("˳����������޷��������� %d\n",count);
			//return;
		}
		else
			seq->base[seq->sz++] = count;
	}
}

void ListPushFront(SeqList* seq)//ͷ�巨
{
	assert(seq);
	int count = 0;
	printf("������Ҫ��������ݣ���-1��������");
	while (scanf("%d", &count), count != -1)
	{
		//�ж�˳����Ƿ���
		if (seq->sz >= seq->capcacity)
		{
			printf("˳����������޷��������� %d\n", count);
			//return;
		}
		else
		{
			int i = 0;
			for (i = seq->sz; i >= 0; i--)
			{
				seq->base[i] = seq->base[i-1];
			}
			seq->base[0] = count;
			seq->sz++;
		}
	}
}

void ListShow(SeqList* seq)//��ʾ
{
	assert(seq);
	int i = 0;
	for (i = 0; i < seq->sz; i++)
		printf("%d ", seq->base[i]);
	printf("\n");
}

void ListLength(SeqList* seq)//���
{
	assert(seq);
	printf("�� = %d\n", seq->sz);
}

static void MenuFind()
{
	printf("             ѡ��          \n");
	printf("*     1. ��λ�ò���Ԫ��     *\n");
	printf("*     2. ��Ԫ�ز���λ��     *\n");
	printf("*     0. �˳�����           *\n");
}

void ListFind(SeqList* seq)//����
{
	assert(seq);
	int input = 0;

	do
	{
		MenuFind();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ListFindPos(seq);
			break;
		case 2:
			ListFindVal(seq);
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ��\n");
			break;
		}
	} while (input);
}

void ListChange(SeqList* seq)//�޸�
{
	assert(seq);
	int Old = 0;
	int New = 0;
	printf("������Ҫ�޸ĵ�λ�ú��޸ĺ��ֵ��");
	scanf("%d %d", &Old, &New);

	if (Old >= 1 && Old <= MAX)
	{
		if (Old <= seq->sz)
		{
			seq->base[Old-1] = New;
			printf("�޸ĳɹ���\n");
		}
		else
			printf("���λ��û�����ݣ��޸�ʧ�ܣ�\n");
	}
	else
		printf("����λ��Խ�磡\n");
}

void ListReverse(SeqList* seq)//����
{
	assert(seq);
	int left = 0;
	int right = seq->sz - 1;
	if (seq->sz == 0)
	{
		printf("û�����ݣ�\n");
		return;
	}
	while (left < right)
	{
		int tmp = seq->base[left];
		seq->base[left++] = seq->base[right];
		seq->base[right--] = tmp;
	}
	printf("���óɹ���\n");
}

static int SortInt(const void *e1, const void *e2)
{
	return *((int*)e1) - *((int*)e2);
}

void ListSort(SeqList* seq)//����
{
	assert(seq);
	if (seq->sz == 0)
	{
		printf("û�����ݣ�\n");
		return;
	}
	qsort(seq->base, seq->sz, sizeof(seq->base[0]),SortInt);
	printf("����ɹ���\n");
}

void ListInsert(SeqList* seq)//����
{
	assert(seq);
	if (seq->sz == 0)
	{
		printf("û�����ݣ�\n");
		return;
	}
	if (seq->sz < seq->capcacity)
	{
		int count = 0;
		int input = 0;
		printf("������Ҫ�����λ�ú�Ԫ�أ�");
		scanf("%d%d", &count, &input);
		if (count >= 1 && count <= seq->sz + 1)
		{
			int i = 0;
			for (i = seq->sz; i >= count-1; i--)
			{
				seq->base[i] = seq->base[i-1];
			}
			seq->base[count - 1] = input;
			seq->sz++;
		}
		else
			printf("����λ��Խ�磡\n");
	}
	else
		printf("˳����������޷����룡\n");
}

void MenuDelete()
{
	printf("         ѡ�� \n");
	printf("    1.��λ��ɾ��     *\n");
	printf("    2.��Ԫ��ɾ��     *\n");
	printf("    0.�˳�           *\n");
}

void ListDelete(SeqList* seq)//ɾ��
{
	assert(seq);
	int input = 0;
	if (seq->sz == 0)
	{
		printf("û�����ݣ�\n");
		return;
	}
	do
	{
		MenuDelete();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ListDeletePos(seq);
			break;
		case 2:
			ListDeleteVal(seq);
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ��\n");
			break;
		}
	} while (input);
}

void ListFree(SeqList* seq)//���
{
	assert(seq);
	if (seq->base != NULL)
	{
		free(seq->base);
		seq->base = NULL;
		ListInit(seq, MAX);
	}
	printf("��ճɹ���\n");
}

void ListExit(SeqList* seq)//�˳�
{
	assert(seq);
	if (seq->base != NULL)
	{
		free(seq->base);
		seq->base = NULL;
	}
}