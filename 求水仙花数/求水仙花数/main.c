#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	
	for (i = 0; i < 100000; i++)
	{
		//���ж��Ǽ�λ��
		int tem = i;
		int num = 0;
		int count = 1;//�洢�Ǽ�λ��
		while (tem = tem / 10)
			count++;
		tem = i;
		//�����λ�Ƕ���
		while (tem)
		{
			num += (int)pow(tem % 10, count);
			tem = tem / 10;
		}
		//�ж��Ƿ�Ϊˮ�ɻ���
		if (num==i)
			printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}