#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	char str[] = "hellp world!";
//	FILE* pf = fopen("test1.txt", "w");
//	fwrite(str, sizeof(str), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int n = 10000;
//	FILE* pf = fopen("test2.txt", "wb");
//	fwrite(&n, sizeof(n), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	int n = 10000;
	FILE* pf = fopen("test3.txt", "w");
	fwrite(&n, sizeof(n), 1, pf);

	fclose(pf);
	pf = NULL;

	printf("\n");
	system("pause");
	return 0;
}