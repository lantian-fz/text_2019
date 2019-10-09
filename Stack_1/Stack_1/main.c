#define _CRT_SECURE_NO_WARNINGS 1
//˳��ջ �������ݰ汾
#include "stack.h"

void Menu()
{
	printf("         ѡ��\n");
	printf("*    1.��ջ    2.��ջ    *\n");
	printf("*    3.��ʾ    4.��ջ��  *\n");
	printf("*    5.��ջ��  6.�󳤶�  *\n");
	printf("*    7.��ջ��  8.ȫ��ջ  *\n");
	printf("*         0.�˳�         *\n");
}

int main()
{
	SeqStack st;
	int input = 0;
	Datatype x = 0;
	SeqStackInit(&st);
	do
	{
		Menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����������(��-1����)��");
			while (scanf("%u", &x), x != -1)
			{
				if (SeqStackPush(&st, x) == 0)
				{
					printf("ջ������%d�޷���ջ��\n", x);
				}
			}
			break;
		case 2:
			if (SeqStackPop(&st, &x) == 0)
				printf("ջ�ѿգ���ջʧ�ܣ�\n");
			else
				printf("%u\n", x);
			break;
		case 3:
			SeqStackShow(&st);
			break;
		case 4:
			if (SeqStackGetTop(&st, &x) == 0)
				printf("ջΪ�գ���ȡʧ�ܣ�\n");
			else
				printf("%u\n", x);
			break;
		case 5:
			if (SeqStackEmpty(&st) == 1)
				printf("ջΪ��\n");
			else
				printf("ջ��Ϊ��\n");
			break;
		case 6:
			printf("ջ����Ϊ %d\n", SeqStackLength(&st));
			break;
		case 7:
			if (SeqStackFull(&st) == 1)
				printf("ջ����\n");
			else
				printf("ջδ��\n");
			break;
		case 8:
			while (SeqStackPop(&st, &x))
				printf("%u ", x);
			printf("\n");
			break;
		case 0:
			break;
		default:
			printf("�������û�����ѡ�\n");
			break;
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}