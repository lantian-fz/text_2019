#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//菜单
{
	printf("\n");
	printf("*           菜单         *\n");
	printf("*        1.玩游戏        *\n");
	printf("*        0.退出程序      *\n\n");
}

void Initarr(char arr[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void Printarr(char arr[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < row; j++)
			{
				printf("---");
				if (j < row - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void Plarer(char arr[ROW][COL], int row, int col,char sz)//玩家走
{
	int x = 0;  //玩家走的行坐标
	int y = 0;  //玩家走的列坐标
	printf("玩家走：");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = sz;
				break;
			}
			else
			{
				printf("这个地方已经下过了，请重新选择!\n");
			}
		}
		else
		{
			printf("你的输入有误，请重新输入！！！\n");
		}
	}
}

void Robot(char arr[ROW][COL], int row, int col, char sz)
{
	int x = 0; //电脑走的行号
	int y = 0; //电脑走的列号

	printf("电脑走:\n");
	while (1)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x - 1][y - 1] == ' ')
		{
			arr[x - 1][y - 1] = sz;
			break;
		}
	}
}

char Verdict(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
			return arr[i][0];
	}
	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][0] != ' ')
		return arr[0][2];
	return 'C';
}

void game()
{
	char arr[ROW][COL] = { 0 };
	int num = ROW*COL;
	char tem = 0;
	Initarr(arr, ROW, COL);//初始化棋盘
	Printarr(arr, ROW, COL);//打印棋盘

	while (num>0)
	{
		Plarer(arr, ROW, COL, '*');//玩家走
		num--;
		Printarr(arr, ROW, COL);//打印棋盘
		tem = Verdict(arr, ROW, COL);//判断函数，如果玩家赢了就跳出循环
		if (tem == '*')
		{
			printf("玩家赢\n");
			break;
		}
		if (num == 0)
		{
			printf("平局\n");
			break;
		}
		Robot(arr, ROW, COL, '#');//电脑走
		num--;
		Printarr(arr, ROW, COL);//打印棋盘
		tem = Verdict(arr, ROW, COL);//判断函数，如果玩家赢了就跳出循环

		if (tem == '#')
		{
			printf("电脑赢\n");
			break;
		}
		if (num == 0)
		{
			printf("平局\n");
			break;
		}
	}
}