#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ����������һ����Ч�㷨���ҵ���һ���ظ����ֵ��ַ�
//���� "qywyer23tdd",���� y
#include <stdio.h>
#include <stdlib.h>

char RepeatStr(char str[])
{
	int i = 0;
	int j = 0;
	char tmp = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp = str[i];
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[j] == tmp)
				return tmp;
		}
	}
	return -1;
}

int main()
{
	char str[30] = { 0 };

	printf("�������ַ�����");
	gets(str);

	if (RepeatStr(str) == -1)
		printf("û���ظ����ַ���\n");
	else
		printf("%c\n", RepeatStr(str));

	printf("\n");
	system("pause");
	return 0;
}