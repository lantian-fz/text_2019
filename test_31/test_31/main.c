#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int arr[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
//	int* q[4] = { NULL };
//	int k = 0;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &arr[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int a = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d\n", a);

	printf("\n");
	system("pause");
	return 0;
}