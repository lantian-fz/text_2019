#define _CRT_SECURE_NO_WARNINGS 1
//任给一个十进制数, 从低位到高位输出各位的数字。从高位到低位输出各位的数字
#include <stdio.h>

void ReversePrint(int n)
{
	printf("%d ", n % 10);
	if (n > 9)
		ReversePrint(n / 10);
}

void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}

void ReverseShow(int n)//非递归的方式
{
	printf("从低位到高位输出各位数字：");
	while (n > 9)
	{
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("%d\n", n);
}
void Show(int n)//int范围-2147483648 - 2147483647  即-2^31-2^31
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
		arr[i] = -1;
	i = 0;
	while (n>9)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	arr[i] = n;
	printf("从高位到低位输出各位数字：");
	for (; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
}

void main()
{
	int n = 0;
	printf("请输入一个整数：");
	scanf("%d", &n);

	printf("从低位到高位输出各位数字：");
	ReversePrint(n);//递归
	printf("\n");
	ReverseShow(n);//非递归

	printf("从高位到低位输出各位数字：");
	Print(n);//递归
	printf("\n");
	Show(n);//非递归

}