#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//enum E
//{
//	X,//0
//	Y,//1
//	Z = 5,//5
//	A,//6
//	B//7
//};

//int main()
//{
//	enum E x = Y;
//	enum E y = B;
//
//	printf("%d %d\n", x, y);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}

//int main()
//{
//	printf("%d\n", fun(2019));
//	printf("\n");
//	system("pause");
//	return 0;
//}
//-127ԭ�룺10000000 00000000 00000000 01111111
//    ���룺11111111 11111111 11111111 10000000
//    ���룺11111111 11111111 11111111 10000001
//-32ԭ�룺10000000 00000000 00000000 00100000
//   ���룺11111111 11111111 11111111 11011111
//   ���룺11111111 11111111 11111111 11100000
//-125ԭ�룺10000000 00000000 00000000 01111101
//    ���룺11111111 11111111 11111111 10000010
//    ���룺11111111 11111111 11111111 10000011
//-3ԭ�룺100000000 00000000 00000000 00000011
//  ���룺111111111 11111111 11111111 11111100
//  ���룺111111111 11111111 11111111 11111101

//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d ", x);
//	return;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < x; i++)
//	{
//		inc();
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	int m = 0;
	int n = 0;
	
	for (m = 0, n = -1; n = 0; m++, n++)
		n++;

	printf("\n");
	system("pause");
	return 0;
}