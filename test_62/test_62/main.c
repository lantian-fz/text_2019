#define _CRT_SECURE_NO_WARNINGS 1
//����һ����������Сд��ĸ�Ϳո� ' ' ���ַ��� s�����������һ�����ʵĳ��ȡ�
//����ַ����������ҹ�����ʾ����ô���һ�����ʾ��������ֵĵ��ʡ�
//������������һ�����ʣ��뷵�� 0 ��
//˵����һ��������ָ������ĸ��ɡ��������κοո�� ������ַ�����
//ʾ�� :���� : "Hello World"     ��� : 5
#include <stdio.h>

int lengthOfLastWord(char * s)
{
	int ret = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			int j = 0;
			for (j = i + 1; s[j] != '\0'; j++)
			{
				if (s[j] != ' ')
					break;
			}
			if (s[j] == '\0')
				return ret;
			ret = -1;//-1����Ϊ�����ret����һ��
		}
		ret++;
	}
	return ret;
}

void main()
{
	char str[] = "Hello World";
	printf("%d\n", lengthOfLastWord(str));
}