#define _CRT_SECURE_NO_WARNINGS 1
//现在有一个用来存放整数的Hash表，Hash表的存储单位称为桶，
//每个桶能放3个整数，当一个桶中要放的元素超过3个时，
//则要将新的元素存放在溢出桶中，每个溢出桶也能放3个元素，
//多个溢出桶使用链表串起来。
//此Hash表的基桶数目为素数P，Hash表的hash函数对P取模。
//代码定义如下：
//#define P 7
//#define NULL_DATA -1
//struct bucket_node
//{
//	int data[3];
//	struct bucket_node *next;
//};

//现在假设hash_table已经初始化好了，
//insert_new_element()函数目的是把一个新的值插入hash_table中，
//元素插入成功时，函数返回0，否则返回-1，完成函数。
#include "hash.h"

int main()
{
	Init();
	int arr[] = { 14, 14, 21, 28, 35, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		insert_new_element(arr[i]);
	}


	printf("\n");
	system("pause");
	return 0;
}