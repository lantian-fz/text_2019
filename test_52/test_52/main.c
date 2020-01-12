#define _CRT_SECURE_NO_WARNINGS 1
//编写程序对任给的一个整数n, 判断它能否被3, 5, 7整除。输出下面信息之一。
//能同时被3, 5, 7整除
//能同时被其中两个数整除，要具体指出哪两个数。
//能被其中一个数整除, 要具体指出被哪一个数整除
//不能被上述任一个数整除

#include <stdio.h>

int main()
{
	int n = 0;
	int arr1[] = { 3, 5, 7 };
	int arr2[3] = { 0 };
	int x = 0;//记录可以被整除的数量
	printf("输入整数n：");
	scanf("%d", &n);
	for (int i = 0,j=0; i < 3; i++)
	{
		if (n%arr1[i] == 0)
		{
			arr2[j++] = arr1[i];
			x++;
		}
	}
	switch (x)
	{
	case 0: 
		printf("不能被上述任一个数整除\n");
		break;
	case 1:
		printf("能被其中一个数整除：%d\n", arr2[0]);
		break;
	case 2:
		printf("能同时被其中两个数整除：%d %d\n", arr2[0], arr2[1]);
		break;
	case 3:
		printf("能同时被3, 5, 7整除\n");
		break;
	}

	return 0;
}