#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int s = 0;
//	int n = 0;
//
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;//Ã»ÓÐbreak;
//		}
//	}
//	printf("%d\n", s);//24
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	char *p = "bluel";
	char a[] = "bluel";

	printf("%d\n", strlen(p));//5
	printf("%d\n", strlen(a));//5
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(a));//6

	printf("\n");
	system("pause");
	return 0;
}

//int main()
//{
//	unsigned long x = 0x11000000;
//	printf("%x\n", *(unsigned char *)&x);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}