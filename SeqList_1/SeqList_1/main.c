#define _CRT_SECURE_NO_WARNINGS 1
//����ͷ�ڵ�ĵ�����
#include "SeqList.h"

void menu()
{
	printf("           ѡ��\n");
	printf("*   1.β�巨  2.ͷ�巨   *\n");
	printf("*   3.��ʾ    4.���   *\n");
	printf("*   5.ɾ��    6.����     *\n");
	printf("*   5.����    6.�޸�     *\n");
	printf("*   7.����    8.����     *\n");
	printf("*   9.���    0.�˳�     *\n");
}

void test()
{
	SListNode my_SList;
	int input = 0;
	SListInit(&my_SList);

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			SListPushBack(&my_SList);
			break;
		case 2:

			break;
		case 3:
			SListShow(&my_SList);
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ�\n");
			break;
		}
	} while (input);
}

int main()
{
	test();

	printf("\n");
	system("pause");
	return 0;
}