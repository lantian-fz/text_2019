#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ��� S������ ����ת��ġ� �ַ��������в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת��
//
//ʾ�� 1�����룺"ab-cd"            �����"dc-ba"
//ʾ�� 2�����룺"a-bC-dEf-ghIj"    �����"j-Ih-gfE-dCba"
//ʾ�� 3�����룺"Test1ng-Leet=code-Q!"    �����"Qedo1ct-eeLg=ntse-T!"
//��ʾ��S.length <= 100   33 <= S[i].ASCIIcode <= 122    S �в����� \ or "
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverseOnlyLetters(char * S)
{
	int len = strlen(S);
	char* tmp = (char*)malloc(sizeof(char)*(len + 1)); 
	int j = 0;
	if (len < 2)
		return S;
	strcpy(tmp, S);
	for (int i = len-1; i >= 0; i--)
	{
		if ((S[i]<'A'||S[i]>'Z') && (S[i]<'a'||S[i]>'z'))
			continue;
		while ((tmp[j]<'A' || tmp[j]>'Z') && (tmp[j]<'a' || tmp[j]>'z'))
			j++;
		tmp[j++] = S[i];
	}
	//tmp[len] = '\0';
	return tmp;
}

float func(float a, int b)
{
	float m = 1, n = 1;
	int i;
	for (i = 1; i <b; i++)
	{
		m *= a / i;
		n += m;
	} 
	return n;
}

void test()
{
	char str[] = "ABCD", *p = str;
	printf("%d\n", *(p + 4));
}

void main()
{
	char str[] = "z<*zj";
	char* p = reverseOnlyLetters(str);
	printf("%s\n", p);
	//test();
	//printf("%f\n", func(2.3, 10));
}