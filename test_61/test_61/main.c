#define _CRT_SECURE_NO_WARNINGS 1
//判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//示例 1:  输入 : 121  输出 : true
//示例 2 : 输入 : -121 输出 : false
//解释 : 从左向右读, 为 - 121 。 从右向左读, 为 121 - 。因此它不是一个回文数
#include <stdio.h>
#include <math.h>

void Reverse(int *n)
{
	int tmp = *n;
	int count = 1;//用来存n的位数，n最小为一位
	int x = 0;
	while (tmp /= 10)
		count++;
	tmp = *n;
	do
	{
		x += (tmp % 10) *(size_t)pow(10, count - 1);
		//可能存在溢出，但溢出表明不是回文数
		count--;
		tmp /= 10;
	} while (count > 0);
	*n = x;
}
//方法二：转化为字符串判断是否逆置
//方法三：如果该数字是回文，其后半部分反转后应该与原始数字的前半部分相同。
//例如，输入 1221，我们可以将数字 “1221” 的后半部分从 “21” 反转为 “12”，
//并将其与前半部分 “12” 进行比较，因为二者相同，我们得知数字 1221 是回文。
void main()
{
	int n = 0;
	int tmp = 0;
	printf("输入n：");
	scanf("%d", &n);
	if (n < 0)//负数不是回文数
		printf("false\n");
	tmp = n;
	Reverse(&tmp);
	if (n == tmp)
		printf("true\n");
	else
		printf("false\n");
}