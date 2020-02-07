#define _CRT_SECURE_NO_WARNINGS 1
//你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，按键可能会被长按，而字符可能被输入 1 次或多次。
//你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），那么就返回 True。
//示例 1：输入：name = "alex", typed = "aaleex"     输出：true
//解释：'alex' 中的 'a' 和 'e' 被长按。
//示例 2：输入：name = "saeed", typed = "ssaaedd"   输出：false
//解释：'e' 一定需要被键入两次，但在 typed 的输出中不是这样。
//示例 3：输入：name = "leelee", typed = "lleeelee" 输出：true
//示例 4：输入：name = "laiden", typed = "laiden"   输出：true
//解释：长按名字中的字符并不是必要的。
//提示：name.length <= 1000    typed.length <= 1000   name 和 typed 的字符都是小写字母
#include <stdio.h>
#include <string.h>
int isLongPressedName(char * name, char * typed)
{
	int name_sz = strlen(name);
	int typed_sz = strlen(typed);
	int num = 1;//记录name中连续重复元素,自身算一个
	int j = 0;

	if (name_sz > typed_sz)
		return 0;

	for (int i = 0; name[i] != '\0'; i++)
	{
		int count = 0;//记录typed中连续重复元素

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