#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void play()
{
	int n = 0;
	do
	{
		menu();//显示菜单
		printf("你的选择：");
		scanf("%d", &n);
		switch (n)//选择选项
		{
		case 1:
			game();//玩游戏
			break;
		case 0:
			break;
		default:
			printf("没有这个选项，请重新选择！\n");
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