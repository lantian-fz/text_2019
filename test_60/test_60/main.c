#define _CRT_SECURE_NO_WARNINGS 1
//����һ�������(ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ���ransom�ܲ�����
//�ڶ����ַ���magazines������ַ����ɡ�������Թ��ɣ����� 1 �����򷵻� 0��
//(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼��)
//ע�⣺����Լ��������ַ�����ֻ����Сд��ĸ��
//canConstruct("a", "b") -> 0
//canConstruct("aa", "ab") -> 0
//canConstruct("aa", "aab") -> 1
#include <stdio.h>
#include <string.h>

int canConstruct1(char * ransomNote, char * magazine)
{
	int hash[26] = { 0 };
	for (int i = 0; magazine[i]; i++)
	{
		hash[magazine[i] - 'a'] += 1;//����ĸ������һ
	}
	for (int i = 0; ransomNote[i]; i++)
	{
		hash[ransomNote[i] - 'a'] -= 1;//����ĸ������һ
		if (hash[ransomNote[i] - 'a'] < 0)//��<0ʱ˵��magazine�и���ĸ����������
			return 0;
	}
	return 1;
}

void main()
{
	printf("%d\n", canConstruct("aabb", "baacb"));
}