#define _CRT_SECURE_NO_WARNINGS 1
//���������ַ������ӵ�һ���ַ�����ɾ���ڶ����ַ��������е��ַ���
//���磺����"They are students."��"aeiou"����ɾ��֮��ĵ�һ���ַ������"Thy r stdnts."
#include <stdio.h>
#include <stdlib.h>

#define STR_MAX 30

void KnockoutChar(char str1[], char str2[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] == str2[j])
			{
				for (k = i; str1[k] != '\0'; k++)
					str1[k] = str1[k + 1];
			}
		}

	}
}

int main()
{
	char str1[STR_MAX] = { 0 };
	char str2[STR_MAX] = { 0 };

	printf("str1 = ");
	gets(str1);
	printf("str2 = ");
	gets(str2);
	
	KnockoutChar(str1, str2);
	printf("%s\n", str1);

	printf("\n");
	system("pause");
	return 0;
}