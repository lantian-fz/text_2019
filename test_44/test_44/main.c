#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	printf("\n");
//	system("pause");
//	return 0;
//}
int main()
{
	struct test1
	{
		short a;
		char d;
		long b;
		long c;
	};
	struct test2
	{
		long b;
		short c;
		char d;
		long a;
	};

	struct test3
	{
		short c;
		long b;
		char d;
		long a;
	};
	struct test1 s1;
	struct test2 s2;
	struct test3 s3;

	printf("%d %d %d\n", sizeof(s1), sizeof(s2), sizeof(s3));

	printf("\n");
	system("pause");
	return 0;
}