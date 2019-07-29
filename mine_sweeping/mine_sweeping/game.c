#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//菜单
{
	printf("*        菜单       *\n");
	printf("**    1.玩游戏     **\n");
	printf("**    0.退出程序   **\n");
}

void Initarr(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void Laymine(char arr[ROWS][COLS], int row, int col)//放置雷
{
	int x = 0;
	int y = 0;
	int num = MINE_NUM;
	while (num)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			num--;
		}
	}
}

void Print(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col + 1; i++)
	{
		if (i == 0)
			printf(" | ");
		else if (i == col + 1)
		{
			printf("\n-|");

			for (j = 0; j < col; j++)
			{
				printf("--");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d| ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

static int Around(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
		+ mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}

//void Show(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int* blank) //非递归方法
//{
//	if (mine[x - 1][y] == '0')
//	{
//		show[x - 1][y] = Around(mine, x - 1, y) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x - 1][y - 1] == '0')
//	{
//		show[x - 1][y - 1] = Around(mine, x - 1, y - 1) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x - 1][y + 1] == '0')
//	{
//		show[x - 1][y + 1] = Around(mine, x - 1, y + 1) + '0';
//		(*blank)--;
//	}
//	if (mine[x][y - 1] == '0')
//	{
//		show[x][y - 1] = Around(mine, x, y - 1) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x + 1][y - 1] == '0')
//	{
//		show[x + 1][y - 1] = Around(mine, x + 1, y - 1) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x + 1][y] == '0')
//	{
//		show[x + 1][y] = Around(mine, x + 1, y) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x + 1][y + 1] == '0')
//	{
//		show[x + 1][y + 1] = Around(mine, x + 1, y + 1) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//	if (mine[x][y + 1] == '0')
//	{
//		show[x][y + 1] = Around(mine, x, y + 1) + '0';
//		if ((x - 1) >= 1 && (x + 1) <= ROW && (y - 1) >= 1 && (y + 1) <= COL)
//			(*blank)--;
//	}
//}

void Show(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int* blank)//递归方法
{
	int i = 0;
	int j = 0;
	if ((x >= 1 && x <= ROW)&&(y >= 1 && y <= COL))
	{
		if (Around(mine, x, y) == 0)
		{
			(*blank)--;
			show[x][y] = '0';
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
					{
						//(*blank)--;
						Show(mine, show, i, j, blank);
					}
				}
			}
		}
		else
		{
			show[x][y] = Around(mine, x, y) + '0';
			(*blank)--;
		}
	}
}


void Sweep(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int blank = row*col - MINE_NUM;//非雷的数量
	int num = 0;

	while (1)
	{
		printf("请输入你要排查的坐标：");
		scanf("%d %d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			num++;
			while (num == 1 && mine[x][y] == '1')
			{
				Initarr(mine, ROWS, COLS, '0');//重新初始化mine
				Laymine(mine, ROW, COL);//重新放置雷
			}

			if (mine[x][y] != '1')
			{
				//blank--;
				//show[x][y] = Around(mine, x, y)+'0';
				Show(mine, show, x, y,&blank);
				if (blank == 0)
				{
					printf("你赢了！\n\n");
					Print(mine, ROW, COL);//扫出了全部的雷，显示雷的位置
					break;
				}
				Print(show, ROW, COL);
			}
			else
			{
				printf("你被雷炸死了！！！\n");
				Print(mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("你输入的坐标有误，请重新输入！\n");
		}
	}
}