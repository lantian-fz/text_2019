#define _CRT_SECURE_NO_WARNINGS 1
//дһ�����������ַ����еĿո��滻Ϊ%20.
//���磺"abc defgx yz" ת���� "abc%20defgx%20yz"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SkewingStr(char str[], int sub, int len)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < len - 1; i++)
	{
		int right = strlen(str) - 1;
		int count = right;
		for (j = sub; j < right; j++)
		{
			str[count + 1] = str[count];
			count--;
		}
	}
}

void InsertStr(char str[], char tmp[])
{
	int len = strlen(tmp);
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			//��str�ո����ַ������ƶ�len-1��
			SkewingStr(str, i,len);
			//int count = i;
			//for (j = 0; j < len; j++)
			//{
			//	int right = strlen(str) - 1;//str���һ���ַ����±�
			//	for (k = right; k>count; k--)
			//	{
			//		str[right + 1] = str[right];
			//		right--;
			//	}
			//	count++;
			//}

			//��tmp������ַ�������
			int count = i;
			for (j = 0; j < len; j++)
			{
				str[count] = tmp[j];
				count++;
			}
		}
	}
}

int main()
{
	char str[50] = { 0 };

	printf("�����ַ�����");
	gets(str);

	InsertStr(str, "%20");

	printf("str = %s\n", str);

	printf("\n");
	system("pause");
	return 0;
}