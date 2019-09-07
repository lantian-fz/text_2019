#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void menu()
{
	printf("            ѡ��\n");
	printf("*   1.β�巨    2.ͷ�巨    *\n");
	printf("*   3.��ʾ      4.���    *\n");
	printf("*   5.����      6.�޸�      *\n");
	printf("*   7.����      8.����      *\n");
	printf("*   9.����      10.ɾ��     *\n");
	printf("*   11.���     0.�˳�      *\n");
}

void test()
{
	int input = 0;
	SeqList my_list;
	//�Ƚ��г�ʼ��
	ListInit(&my_list,MAX);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			ListPushBack(&my_list);
			break;
		case 2:
			ListPushFront(&my_list);
			break;
		case 3:
			ListShow(&my_list);
			break;
		case 4:
			ListLength(&my_list);
			break;
		case 5:
			ListFind(&my_list);
			break;
		case 6:
			ListChange(&my_list);
			break;
		case 7:
			ListReverse(&my_list);
			break;
		case 8:
			ListSort(&my_list);
			break;
		case 9:
			ListInsert(&my_list);
			break;
		case 10:
			ListDelete(&my_list);
			break;
		case 11:
			ListFree(&my_list);
			break;
		case 0:
			ListExit(&my_list);
			printf("�������н�����\n");
			break;
		default:
			printf("û�����ѡ��\n");
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