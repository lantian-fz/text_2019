#define _CRT_SECURE_NO_WARNINGS 1
//�����������ʹ�ü��������������� name��ż�����ڼ����ַ� c ʱ���������ܻᱻ���������ַ����ܱ����� 1 �λ��Ρ�
//�㽫�������������ַ� typed���������Ӧ�Ŀ�����������ѵ����֣�����һЩ�ַ����ܱ�����������ô�ͷ��� True��
//ʾ�� 1�����룺name = "alex", typed = "aaleex"     �����true
//���ͣ�'alex' �е� 'a' �� 'e' ��������
//ʾ�� 2�����룺name = "saeed", typed = "ssaaedd"   �����false
//���ͣ�'e' һ����Ҫ���������Σ����� typed ������в���������
//ʾ�� 3�����룺name = "leelee", typed = "lleeelee" �����true
//ʾ�� 4�����룺name = "laiden", typed = "laiden"   �����true
//���ͣ����������е��ַ������Ǳ�Ҫ�ġ�
//��ʾ��name.length <= 1000    typed.length <= 1000   name �� typed ���ַ�����Сд��ĸ
#include <stdio.h>
#include <string.h>
int isLongPressedName(char * name, char * typed)
{
	int name_sz = strlen(name);
	int typed_sz = strlen(typed);
	int num = 1;//��¼name�������ظ�Ԫ��,������һ��
	int j = 0;

	if (name_sz > typed_sz)
		return 0;

	for (int i = 0; name[i] != '\0'; i++)
	{
		int count = 0;//��¼typed�������ظ�Ԫ��

		if (name[i] == name[i + 1])
		{
			num++;
			continue;
		}
		while (typed[j] == name[i])
		{
			count++;
			j++;
		}
		if (count == 0 || count < num)
			return 0;
		num = 1;
	}
	return 1;
}

void main()
{
	char name[] = "saeed";
	char typed[] = "ssaaedd";
	printf("%d\n", isLongPressedName(name, typed));
}