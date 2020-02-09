#define _CRT_SECURE_NO_WARNINGS 1
//给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。
//
//示例 1：输入："ab-cd"            输出："dc-ba"
//示例 2：输入："a-bC-dEf-ghIj"    输出："j-Ih-gfE-dCba"
//示例 3：输入："Test1ng-Leet=code-Q!"    输出："Qedo1ct-eeLg=ntse-T!"
//提示：S.length <= 100   33 <= S[i].ASCIIcode <= 122    S 中不包含 \ or "
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