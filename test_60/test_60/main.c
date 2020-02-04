#define _CRT_SECURE_NO_WARNINGS 1
//给定一个赎金信(ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由
//第二个字符串magazines里面的字符构成。如果可以构成，返回 1 ；否则返回 0。
//(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)
//注意：你可以假设两个字符串均只含有小写字母。
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
		hash[magazine[i] - 'a'] += 1;//该字母数量加一
	}
	for (int i = 0; ransomNote[i]; i++)
	{
		hash[ransomNote[i] - 'a'] -= 1;//该字母数量减一
		if (hash[ransomNote[i] - 'a'] < 0)//当<0时说明magazine中该字母的数量不够
			return 0;
	}
	return 1;
}

void main()
{
	printf("%d\n", canConstruct("aabb", "baacb"));
}