#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* myString()
{
	char str[6] = { 0 };
	char* s = "hello world!";
	int i = 0;
	for (i = 0; i < sizeof(str)-1; i++)
		str[i] = *(s + i);
	return str;
}

int main()
{
	printf("%s\n", myString());//随机值 str是临时变量，已销毁

	printf("\n");
	system("pause");
	return 0;
}

//int main()
//{
//	int i = 1;
//
//	printf("%d,%d\n", sizeof(i++), i);//4 1
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[1000] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = (char)(-1 - i);
//		printf("%c ", arr[i]);
//	}
//
//	printf("%d\n", strlen(arr)); //128+127
//
//	printf("\n");
//	system("pause");
//	return 0;
//}