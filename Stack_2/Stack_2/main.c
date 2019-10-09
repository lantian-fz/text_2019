#define _CRT_SECURE_NO_WARNINGS 1
//链栈
#include "LinkedStack.h"

void Menu()
{
	printf("         选项\n");
	printf("*     1.入栈    2.出栈     *\n");
	printf("*     3.显示    4.求长度   *\n");
	printf("*     5.读栈顶  6.判栈空   *\n");
	printf("*          0.退出          *\n");
}

int main()
{
	LinkedStackNode *st;
	int input = 0;
	Datatype x = 0;

	LinkedStackInit(&st);

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
				LinkedStackPush(&st,x);
			break;
		case 2:
			if (LinkedStackPop(&st, &x) == 0)
				printf("栈为空，出栈失败！\n");
			else
				printf("%d\n", x);
			break;
		case 3:
			LinkedStackShow(st);
			break;
		case 4:
			printf("长度为 %d\n", LinkedStackLength(st));
			break;
		case 5:
			if (LinkedStackGetTop(st, &x) == 0)
				printf("栈为空，读取栈顶元素失败！\n");
			else
				printf("%u\n", x);
			break;
		case 6:
			if (LinkedStackEmpty(st) == 1)
				printf("栈为空！\n");
			else
				printf("栈不为空!\n");
			break;
		case 0:
			break;
		default:
			printf("没有这个选项！\n");
			break;
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}