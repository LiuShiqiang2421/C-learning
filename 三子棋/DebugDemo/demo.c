#define _CRT_SECURE_NO_WARNINGS 1

/*
Debug通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
Release称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优化的，以便用户很好的使用。
*/

#include<stdio.h>
#include<stdlib.h>

//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		printf("%d ", i);
//	system("pause");
//	return 0;
//}

/*
F5 -> 启动调试 （和F9配合使用）
F9 -> 创建断点和取消断点。
F10 -> 逐过程，通常用来处理一个过程，一个过程可以是一次函数调用或者是一条语句。
F11 -> 逐语句，就是每一次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最常用的）。
CTRL+F5 -> 开始执行不调试
*/

//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hello\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		printf("%d ", i);
//	for (i = 0; i < 100; i++)
//		printf("%d ", 10-i);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main(void)
//{
//	printf("hello\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}


//int main(void)
//{
//	{
//		int temp = 0;
//		printf("temp = %d\n", temp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		arr[i] = i;
//	return 0;
//}

//void test2()
//{
//	printf("hello\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main(void)
//{
//	test();
//	return 0;
//}

//代码实现 1！+2！+3！+ ... +n! 不考虑溢出
int main(void)
{
	int i = 0;
	int sum = 0;	//保存最终结果
	int n = 0;
	int ret = 1;	//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
			ret *= j;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}




