#define _CRT_SECURE_NO_WARNINGS 1
//��ջ
#include "LinkedStack.h"

void Menu()
{
	printf("         ѡ��\n");
	printf("*     1.��ջ    2.��ջ     *\n");
	printf("*     3.��ʾ    4.�󳤶�   *\n");
	printf("*     5.��ջ��  6.��ջ��   *\n");
	printf("*          0.�˳�          *\n");
}

int main()
{
	LinkedStackNode *st;
	int input = 0;
	Datatype x = 0;

	LinkedStackInit(&st);

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
				LinkedStackPush(&st,x);
			break;
		case 2:
			if (LinkedStackPop(&st, &x) == 0)
				printf("ջΪ�գ���ջʧ�ܣ�\n");
			else
				printf("%d\n", x);
			break;
		case 3:
			LinkedStackShow(st);
			break;
		case 4:
			printf("����Ϊ %d\n", LinkedStackLength(st));
			break;
		case 5:
			if (LinkedStackGetTop(st, &x) == 0)
				printf("ջΪ�գ���ȡջ��Ԫ��ʧ�ܣ�\n");
			else
				printf("%u\n", x);
			break;
		case 6:
			if (LinkedStackEmpty(st) == 1)
				printf("ջΪ�գ�\n");
			else
				printf("ջ��Ϊ��!\n");
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ�\n");
			break;
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}