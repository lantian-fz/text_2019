#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a[] = {5,3,2,1};
//	printf("%d\n",sizeof(a));//16 a表示整个数组
//	printf("%d\n",sizeof(a+0));//4  相当于第一个元素的地址
//	printf("%d\n", sizeof(*a));//4  相当于第一个元素的长度
//	printf("*a = %d\n", (*a));//5  
//	printf("%d\n",sizeof(a+1));//4 相当于第二个元素的长度
//	printf("*(a+1) = %d\n", *(a + 1));//3 
//	printf("%d\n",sizeof(a[1]));//4 第2个元素长度
//	printf("%d\n",sizeof(&a));//4 a的地址长度是4
//	printf("%d\n",sizeof(*&a));//16 相当于a
//	printf("%d\n",sizeof(&a+1));//4 地址的长度在32位平台上都是4
//	printf("%d\n",sizeof(&a[0]));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//没有放 \0
//	//a b c d e f 
//
//	printf("%d\n", sizeof(arr));//6 求的只是数组的长度，所以长度为 6*1
//	printf("%d\n", sizeof(arr+0));//4 表示首元素的地址，故长度为4
//	printf("%d\n", sizeof(*arr));//1 arr本来是首元素的地址，解引用后表示首元素
//	printf("%d\n", sizeof(arr[1]));//1 
//	printf("%d\n", sizeof(&arr));//4  地址长度在32位平台下都为4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//printf("%d\n", strlen(arr));//未知数
//	//printf("%d\n", strlen(arr + 0));//未知数
//	////printf("%d\n", strlen(*arr));//err 放进了 'a'
//	////printf("%d\n", strlen(arr[1]));//err 
//	//printf("%d\n", strlen(&arr));//未知数x
//	//printf("%d\n", strlen(&arr + 1));//未知数y=x-6
//	//printf("%d\n", strlen(&arr[0] + 1));//未知数y=x-1
//
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";//元素个数是7，包含 \0
//
//	printf("%d\n", sizeof(arr));//7 求的数组长度，包含 \0
//	printf("%d\n", sizeof(arr+0));//4 首元素地址
//	printf("%d\n", sizeof(*arr));//1 字符 a 的长度
//	printf("%d\n", sizeof(arr[1]));//1 字符 b 的长度
//	printf("%d\n", sizeof(&arr));//4 地址长度在32位平台下都为4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//未知数 指针指向了arr数组后面的位置，无法确定长度
//	//printf("%d\n", strlen(&arr[0] + 1));//5 指针指向第二个元素的位置
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	char* p = "abcdef"; //p指向存储了"abcdef"的内存，保存的a的地址
	
	//printf("%d\n", strlen(p));//6 p为首元素地址
	//printf("%d\n", strlen(p+1));//5 p+1 指针指向b的地址
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//x p的地址是未知的
	//printf("%d\n", strlen(&p+1));//y 同上
	//printf("%d\n", strlen(&p[0]+1));//5 指针指向b的地址

	//printf("%d\n", sizeof(p));//4 首元素地址
	//printf("%d\n", sizeof(p+1));//4 第二个元素地址
	//printf("%d\n", sizeof(*p));//1  第一个元素
	//printf("%d\n", sizeof(p[0]));//1 第一个元素
	//printf("%d\n", sizeof(&p));//4 地址
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4

	int a[3][4] = {0};
	printf("%d\n",sizeof(a));//48  3*4*4
	printf("%d\n",sizeof(a[0][0]));//4 
	printf("%d\n",sizeof(a[0]));//16  a[0]相当于第一行的数组名 一行有4个元素 故大小为4*4
	printf("%d\n",sizeof(a[0]+1));//4 地址
	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0]+1);
	printf("%p\n", &a[0][1]);


	//printf("%d\n",sizeof(*(a[0]+1)));//4
	//printf("%d\n",sizeof(a+1));//4
	//printf("%d\n",sizeof(*(a+1)));//16
	//printf("%d\n",sizeof(&a[0]+1));//4
	//printf("%d\n",sizeof(*(&a[0]+1)));//16
	//printf("%d\n",sizeof(*a));//16
	//printf("%d\n",sizeof(a[3]));//16

	printf("\n");
	system("pause");
	return 0;
}