#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (i = 0; i <= 12; i++)
	{
		printf("holle world!\n");
		arr[i] = 0;
	}

	printf("\n");
	system("pause");
	return 0;
	//代码运行会进入死循环，因为&i的地址和&arr[12]的地址相同
	//改变arr[12]的值便会改变i的值，所以代码运行会进入死循环
	//至于i的地址为什么和arr[12]的地址相等的原因是因为程序运行时分配地址
	//是从高位向低位分配的，先定义的i，给i分配空间后才给数组分配的空间
	//而数组内每个元素的地址是随着下标递增的，随着地址的不断增大，到达
	//i的地址时，刚好也是arr[12]的地址。在VS2013内地址是差了两个，不同平台不一样。
}