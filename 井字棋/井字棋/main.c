#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void play()
{
	int n = 0;
	do
	{
		menu();//��ʾ�˵�
		printf("���ѡ��");
		scanf("%d", &n);
		switch (n)//ѡ��ѡ��
		{
		case 1:
			game();//����Ϸ
			break;
		case 0:
			break;
		default:
			printf("û�����ѡ�������ѡ��\n");
			break;
		}
	} while (n);
}

int main()
{
	srand((unsigned int)time(NULL));
	play();

	printf("\n");
	system("pause");
	return 0;
}