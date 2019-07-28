#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	
	for (i = 0; i < 100000; i++)
	{
		//先判断是几位数
		int tem = i;
		int num = 0;
		int count = 1;//存储是几位数
		while (tem = tem / 10)
			count++;
		tem = i;
		//再求各位是多少
		while (tem)
		{
			num += (int)pow(tem % 10, count);
			tem = tem / 10;
		}
		//判断是否为水仙花数
		if (num==i)
			printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}