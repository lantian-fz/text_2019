#define _CRT_SECURE_NO_WARNINGS 1
//��ͷ�ڵ�ĵ�����
#include "SeqList.h"

void menu()
{
	printf("           ѡ��\n");
	printf("*   1.β�巨  2.ͷ�巨   *\n");
	printf("*   3.��ʾ    4.���   *\n");
	printf("*   5.ɾ��    6.����     *\n");
	printf("*   7.����    8.���     *\n");
	printf("*        0.�˳�          *\n");
}

void test()
{
	SListNode *my_SList;
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
			SListPushFront(&my_SList);
			break;
		case 3:
			SListShow(&my_SList);
			break;
		case 4:
			SListLenth(&my_SList);
			break;
		case 5:
			SListDel(&my_SList);
			break;
		case 6:
			SListPushSite(&my_SList);
			break;
		case 7:
			SListReverse(&my_SList);
			break;
		case 9:
			SListEnter(&my_SList);
			break;
		case 0:
			SListEnter(&my_SList);
			SListEnterHead(&my_SList);
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