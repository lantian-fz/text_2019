#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define MINE_NUM 10

void menu();//�˵�
void Initarr(char arr[ROWS][COLS], int rows, int cols, char set);//��ʼ��
void Laymine(char arr[ROWS][COLS], int row, int col);//������
void Print(char arr[ROWS][COLS], int row, int col);//��ӡ
void Sweep(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//ɨ��