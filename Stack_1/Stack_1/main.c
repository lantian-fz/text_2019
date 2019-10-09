#define _CRT_SECURE_NO_WARNINGS 1
//顺序栈 不可增容版本
#include "stack.h"

void Menu()
{
	printf("         选项\n");
	printf("*    1.入栈    2.出栈    *\n");
	printf("*    3.显示    4.读栈顶  *\n");
	printf("*    5.判栈空  6.求长度  *\n");
	printf("*    7.判栈满  8.全出栈  *\n");
	printf("*         0.退出         *\n");
}

int main()
{
	SeqStack st;
	int input = 0;
	Datatype x = 0;
	SeqStackInit(&st);
	do
	{
		Menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入数据(以-1结束)：");
			while (scanf("%u", &x), x != -1)
			{
				if (SeqStackPush(&st, x) == 0)
				{
					printf("栈已满，%d无法入栈！\n", x);
				}
			}
			break;
		case 2:
			if (SeqStackPop(&st, &x) == 0)
				printf("栈已空，出栈失败！\n");
			else
				printf("%u\n", x);
			break;
		case 3:
			SeqStackShow(&st);
			break;
		case 4:
			if (SeqStackGetTop(&st, &x) == 0)
				printf("栈为空，读取失败！\n");
			else
				printf("%u\n", x);
			break;
		case 5:
			if (SeqStackEmpty(&st) == 1)
				printf("栈为空\n");
			else
				printf("栈不为空\n");
			break;
		case 6:
			printf("栈长度为 %d\n", SeqStackLength(&st));
			break;
		case 7:
			if (SeqStackFull(&st) == 1)
				printf("栈已满\n");
			else
				printf("栈未满\n");
			break;
		case 8:
			while (SeqStackPop(&st, &x))
				printf("%u ", x);
			printf("\n");
			break;
		case 0:
			break;
		default:
			printf("输入错误，没有这个选项！\n");
			break;
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}