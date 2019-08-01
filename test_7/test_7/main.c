#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}

void Calc(int (*p)(int,int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数：");
	scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("ret = %d\n", ret);
}

void menu()
{
	printf("***     菜单     ***\n");
	printf("*  1.Add    2.Sub  *\n");
	printf("*  3.Mul    4.Div  *\n");
	printf("*  0.exit          *\n");

}

int main()
{
	int n = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("程序结束！\n");
			break;
		default:
			printf("选择有误，请重新选择！\n");
			break;
		}
	} while (n);

	printf("\n");
	system("pause");
	return 0;
}
