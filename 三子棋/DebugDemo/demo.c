#define _CRT_SECURE_NO_WARNINGS 1

/*
Debugͨ����Ϊ���԰汾��������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
Release��Ϊ�����汾���������ǽ����˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������Ż��ģ��Ա��û��ܺõ�ʹ�á�
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
F5 -> �������� ����F9���ʹ�ã�
F9 -> �����ϵ��ȡ���ϵ㡣
F10 -> ����̣�ͨ����������һ�����̣�һ�����̿�����һ�κ������û�����һ����䡣
F11 -> ����䣬����ÿһ�ζ�ִ��һ����䣬���������ݼ�����ʹ���ǵ�ִ���߼����뺯���ڲ���������õģ���
CTRL+F5 -> ��ʼִ�в�����
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

//����ʵ�� 1��+2��+3��+ ... +n! ���������
int main(void)
{
	int i = 0;
	int sum = 0;	//�������ս��
	int n = 0;
	int ret = 1;	//����n�Ľ׳�
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




