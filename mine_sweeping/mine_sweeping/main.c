#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initarr(mine, ROWS, COLS, '0');//��ʼ��mine
	Initarr(show, ROWS, COLS, '*');//��ʼ��show
	Print(show, ROW, COL);

	Laymine(mine, ROW, COL);//������
	//Print(mine, ROW, COL);
	Sweep(mine, show, ROW, COL);//ɨ��
}

void play()
{
	int n = 0;
	do
	{
		menu();//�˵�
		printf("��ѡ��");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("���ѡ������������ѡ��\n");
			break;
		}


	} while (n);

}

int main()
{
	srand((unsigned int)time(NULL));
	play();

	printf("\n");
	return 0;
}