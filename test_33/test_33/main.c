#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k = 0;
//	k = fun(j, m);
//	printf("%d ", k);
//
//	k = fun(j, m);
//	printf("%d\n", k);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int Change(int *px)
{
	int y = 8;
	y = y - *px;
	px = &y;
	return 0;
}

int main()
{
	int xx = 3;
	int *py = &xx;
	Change(py);
	printf("%d\n", *py);//3  py没有改变，px只是形参

	printf("\n");
	system("pause");
	return 0;
}