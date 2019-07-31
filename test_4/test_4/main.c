#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);//4 02 00 00 00 小端存储

	//a  01 00 00 00,02 00 00 00,03 00 00 00,04 00 00 00
	//a 是首元素地址，转化为int型后+1相当于地址向后移动一个字节

	printf("\n");
	system("pause");
	return 0;
}