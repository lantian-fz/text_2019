#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

void Menu()
{
	printf("              ѡ��\n");
	printf("*   1.β�巨        2.ͷ�巨     *\n");
	printf("*   3.��ʾ          4.���     *\n");
	printf("*   5.���          6.ǰ��       *\n");
	printf("*   7.��λ�ò���    8.����       *\n");
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
		DataType key = 0;
		DListNode *p = NULL;

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
			printf("��Ҫ���ĸ�Ԫ�غ�����룺");
			scanf("%u", &x);
			printf("������Ҫ�����Ԫ�أ�");
			scanf("%u", &key);
			if (DListPushRear(&mylist, DListFindData(&mylist, x), key) == 0)
				printf("����ʧ�ܣ�\n");
			else
				printf("����ɹ���\n");
			break;
		case 6:
			printf("��Ҫ���ĸ�Ԫ��ǰ����룺");
			scanf("%u", &x);
			printf("������Ҫ�����Ԫ�أ�");
			scanf("%u", &key);
			if (DListPushFormer(&mylist, DListFindData(&mylist, x), key) == 0)
				printf("����ʧ�ܣ�\n");
			else
				printf("����ɹ���\n");
			break;
		case 7:
			printf("������Ҫ�����λ�ü�Ԫ�أ�");
			scanf("%u %u", &x, &key);
			if (DListPushSite(&mylist, x, key) == 0)
				printf("����λ�����󣬲���ʧ�ܣ�\n");
			else
				printf("����ɹ���\n");
			break;
		case 8:
			break;
		case 9:
			printf("������Ҫ���ҵ�λ�ã�");
			scanf("%u", &x);
			p = DListFindSite(&mylist, x);
			if (p == NULL)
				printf("��Ҫ���ҵ�λ��û��Ԫ�أ�\n");
			else
				printf("��λ�õ�Ԫ��Ϊ %u\n", p->data);
			break;
		case 10:
			break;
		case 11:
			printf("������Ҫ���ҵ�Ԫ�أ�");
			scanf("%u", &x); 
			p = DListFindData(&mylist, x);
			if (p == NULL)
				printf("��Ҫ���ҵ�Ԫ�ز����ڣ�\n");
			else
				printf("�ҵ�Ԫ�� %u\n", p->data);
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 0:
			break;
		default:
			printf("�����������������룡\n");
		}
	} while (input);
 
	printf("\n");
	//system("pause");
	return 0;
}