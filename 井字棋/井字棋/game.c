#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//�˵�
{
	printf("\n");
	printf("*           �˵�         *\n");
	printf("*        1.����Ϸ        *\n");
	printf("*        0.�˳�����      *\n\n");
}

void Initarr(char arr[ROW][COL], int row, int col)//��ʼ������
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

void Printarr(char arr[ROW][COL], int row, int col)//��ӡ����
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

void Plarer(char arr[ROW][COL], int row, int col,char sz)//�����
{
	int x = 0;  //����ߵ�������
	int y = 0;  //����ߵ�������
	printf("����ߣ�");
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
				printf("����ط��Ѿ��¹��ˣ�������ѡ��!\n");
			}
		}
		else
		{
			printf("��������������������룡����\n");
		}
	}
}

void Robot(char arr[ROW][COL], int row, int col, char sz)
{
	int x = 0; //�����ߵ��к�
	int y = 0; //�����ߵ��к�

	printf("������:\n");
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
	Initarr(arr, ROW, COL);//��ʼ������
	Printarr(arr, ROW, COL);//��ӡ����

	while (num>0)
	{
		Plarer(arr, ROW, COL, '*');//�����
		num--;
		Printarr(arr, ROW, COL);//��ӡ����
		tem = Verdict(arr, ROW, COL);//�жϺ�����������Ӯ�˾�����ѭ��
		if (tem == '*')
		{
			printf("���Ӯ\n");
			break;
		}
		if (num == 0)
		{
			printf("ƽ��\n");
			break;
		}
		Robot(arr, ROW, COL, '#');//������
		num--;
		Printarr(arr, ROW, COL);//��ӡ����
		tem = Verdict(arr, ROW, COL);//�жϺ�����������Ӯ�˾�����ѭ��

		if (tem == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		if (num == 0)
		{
			printf("ƽ��\n");
			break;
		}
	}
}