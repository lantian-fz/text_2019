#define _CRT_SECURE_NO_WARNINGS 1
//有一个介于0和1之间的实数，类型为double，返回它的二进制表示。如果该数字无法精确地用32位以内的二进制表示，返回“Error”。
//给定一个double num，表示0到1的实数，请返回一个字符串，代表该数的二进制表示或者“Error”。
//测试样例：0.625   返回：0.101
#include <stdio.h>
#include <stdlib.h>

void Convert(double a)
{
	int i = 2;
	char ret[35] = { 0 };
	ret[0] = '0';
	ret[1] = '.';

	while (a)
	{
		a = 2.0*a;
		int tmp = (int)a;
		if (tmp % 2 == 1)
		{
			ret[i] = '1';
			i++;
			a -= 1;
		}
		else
		{
			ret[i] = '0';
			i++;
		}
		if (i > 34)
			break;
	}
	if (i <= 34)
		printf("%s\n", ret);
	else
		printf("Error\n");
}

int main()
{
	double a = 0.0f;

	scanf("%lf", &a);

	Convert(a);

	printf("\n");
	system("pause");
	return 0;
}