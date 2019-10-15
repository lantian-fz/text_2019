#define _CRT_SECURE_NO_WARNINGS 1
//��ͷ�ڵ��������
#include "queue.h"

void Menu()
{
	printf("          ѡ��\n");
	printf("*    1.���    2.����     *\n");
	printf("*    3.��ʾ    4.�󳤶�   *\n");
	printf("*    5.����ͷ  0.�˳�     *\n");
}

int main()
{
	int input = 0;
	Datatype x = 0;
	LinkQueue qu;
	LQueueInit(&qu);
	do
	{
		Menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ԫ��(��-1����):");
			while (scanf("%d", &x), x != -1)
				LQueueEnter(&qu, x);
			break;
		case 2:
			if (LQueueDelete(&qu, &x))
				printf("%d\n", x);
			else
				printf("����Ϊ�գ�����ʧ��\n");
			break;
		case 3:
			LQueueShow(&qu);
			break;
		case 4:
			printf("���г��� = %d\n", LQueueLength(&qu));
			break;
		case 5:
			if (LQueueGetFront(&qu, &x))
				printf("%d\n", x);
			else
				printf("����Ϊ�գ���ȡ��ͷԪ��ʧ��\n");
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ��!\n");
		}
	} while (input);


	printf("\n");
	system("pause");
	return 0;
}