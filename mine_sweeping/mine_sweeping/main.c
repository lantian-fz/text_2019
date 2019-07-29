#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initarr(mine, ROWS, COLS, '0');//初始化mine
	Initarr(show, ROWS, COLS, '*');//初始化show
	Print(show, ROW, COL);

	Laymine(mine, ROW, COL);//放置雷
	//Print(mine, ROW, COL);
	Sweep(mine, show, ROW, COL);//扫雷
}

void play()
{
	int n = 0;
	do
	{
		menu();//菜单
		printf("请选择：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("你的选择有误，请重新选择！\n");
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