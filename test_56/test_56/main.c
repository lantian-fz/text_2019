#define _CRT_SECURE_NO_WARNINGS 1
//ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����
//ʾ����
//���� : "Hello"      ��� : "hello"
//���� : "here"       ��� : "here"
//���� : "LOVELY"     ��� : "lovely"
#include <stdio.h>
#include <string.h>

char* ToLowerCase(char* str)
{
	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	}
	return str;
}

void main()
{
	char str[64] = { 0 };
	printf("����str��");
	scanf("%s", str);
	printf("%s\n", ToLowerCase(str));
}