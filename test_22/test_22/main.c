#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	FILE* pf = fopen("test1.txt", "w");
//	int ch = 0;
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc(' ', pf);
//	fputc('c', pf);
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
//	FILE* pf = fopen("test1.txt", "r");
//	int ch = 0;
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
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
//	FILE* pf = fopen("test1.txt", "r");
//	int ch = 0;
//	char str[20] = { 0 };
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	fgets(str, sizeof(str), pf);
//
//	printf("%s\n", str);
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
	FILE* pf = fopen("test1.txt", "w");
	int ch = 0;
	char str[20] = { 0 };
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	fputs("abcdef sakdf\n", pf);
	fputs("bbbbb\n", pf);


	fclose(pf);
	pf = NULL;

	printf("\n");
	system("pause");
	return 0;
}