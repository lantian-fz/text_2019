#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("holle world!\n");
//		arr[i] = 0;
//	}
//
//	printf("\n");
//	system("pause");
//	return 0;
//	//�������л������ѭ������Ϊ&i�ĵ�ַ��&arr[12]�ĵ�ַ��ͬ
//	//�ı�arr[12]��ֵ���ı�i��ֵ�����Դ������л������ѭ��
//	//����i�ĵ�ַΪʲô��arr[12]�ĵ�ַ��ȵ�ԭ������Ϊ��������ʱ�����ַ
//	//�ǴӸ�λ���λ����ģ��ȶ����i����i����ռ��Ÿ��������Ŀռ�
//	//��������ÿ��Ԫ�صĵ�ַ�������±�����ģ����ŵ�ַ�Ĳ������󣬵���
//	//i�ĵ�ַʱ���պ�Ҳ��arr[12]�ĵ�ַ����VS2013�ڵ�ַ�ǲ�����������ͬƽ̨��һ����
//}

//int main()
//{
//	//int arr[5] = { 1, 2, 3, 4, 5 };
//	//
//	//printf("%d\n", sizeof(&arr[0]));
//	char* p = "abcdef";
//
//	printf("%c\n", p[4]);
//	printf("%c\n", *(p+4));
//	printf("%c\n", *p + 4);
//	//printf("%c\n", *(&p + 1));//err
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	
//	printf("%x\n", arr);//78fd08
//	printf("%x\n", &arr);//78fd08
//	printf("%x\n", &arr+1);//78fd1c
//	printf("%x\n", arr+1);//78fd04
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%p\n", arr);//95F9E4
//	printf("%p\n", &arr);//95F9E4
//	printf("%p\n", &arr+1);//95F9EB
//	printf("%p\n", arr+1);//95F9E5
//	printf("%p\n", &arr[1]);//95F9E5
//	printf("%p\n", &arr[2]);//95F9E6
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[5] = { 'a', 'b', 'c', 'd' };
//
//	char(*p1)[5] = &str;
//	char(*p2)[5] = str;//err �ᱨ����
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str[5] = { 'a', 'b', 'c', 'd' };
//
//	char(*p1)[3] = &str;
//	char(*p2)[3] = str;//err �ᱨ����
//
//	printf("\n");
//	system("pause");
//	return 0;
//}
int main()
{
	char str[5] = { 'a', 'b', 'c', 'd' };

	char(*p1)[10] = &str;
	char(*p2)[10] = str;//err �ᱨ����
	//[]�ڵĴ�СӰ��p1��p2�Ĳ���
	printf("\n");
	system("pause");
	return 0;
}