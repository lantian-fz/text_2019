#define _CRT_SECURE_NO_WARNINGS 1
//��һ������0��1֮���ʵ��������Ϊdouble���������Ķ����Ʊ�ʾ������������޷���ȷ����32λ���ڵĶ����Ʊ�ʾ�����ء�Error����
//����һ��double num����ʾ0��1��ʵ�����뷵��һ���ַ�������������Ķ����Ʊ�ʾ���ߡ�Error����
//����������0.625   ���أ�0.101
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