#define _CRT_SECURE_NO_WARNINGS 1
//给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。
//如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。
//如果不存在最后一个单词，请返回 0 。
//说明：一个单词是指仅由字母组成、不包含任何空格的 最大子字符串。
//示例 :输入 : "Hello World"     输出 : 5
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
			ret = -1;//-1是因为下面的ret会多加一下
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