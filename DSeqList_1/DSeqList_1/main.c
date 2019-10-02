#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void Menu()
{
	printf("              ѡ��\n");
	printf("*   1.β�巨        2.ͷ�巨     *\n");
	printf("*   3.��ʾ          4.���     *\n");
	printf("*   5.���          6.ǰ��       *\n");
	printf("*   7.����Ų�      8.����       *\n");
	printf("*   9.��λ�ò���    10.����      *\n");
	printf("*   11.��Ԫ�ز���   12.��λ��ɾ  *\n");
	printf("*   13.��Ԫ��ɾ��   14.ɾ������  *\n");
	printf("*   15.���         0.�˳�       *\n");
}

int main()
{
	int input = 0;
	DList mylist;
	DListInit(&mylist);
	do
	{
		DataType x = 0;
		Menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ԫ��(��-1����):");
			while (scanf("%u", &x), x != -1)
				DListPushBack(&mylist, x);
			break;
		case 2:
			printf("������Ԫ��(��-1����):");
			while (scanf("%u", &x), x != -1)
				DListPushFront(&mylist, x);
			break;
		case 3:
			DListShow(&mylist);
			break;
		case 4:
			printf("�� = %u\n",DListLen(&mylist));
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			break;
		default:
			printf("�����������������룡\n");
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}