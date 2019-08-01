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
	printf("������������������");
	scanf("%d %d", &x, &y);
	ret = p(x, y);
	printf("ret = %d\n", ret);
}

void menu()
{
	printf("***     �˵�     ***\n");
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
		printf("��ѡ��");
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
			printf("���������\n");
			break;
		default:
			printf("ѡ������������ѡ��\n");
			break;
		}
	} while (n);

	printf("\n");
	system("pause");
	return 0;
}
