#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int* test()
//{
	//int a = 10;	  //局部变量
	//return &a;
	/*int arr[10] = { 0 };
	return arr;*/
//}

//int strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//		end++;
//	return end - start;
//}

int main(void)
{
	//int a = 10;
	//int* p = &a;	//指针变量
	////指针是个变量，存放内存单元的地址（编号）

	/*printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));*/

	/*int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	
	printf("%p\n", pa);
	printf("%p\n", pa+1);

	printf("%p\n", pc);
	printf("%p\n", pc+1);*/

	//int arr[10] = { 0 };
	//int* p = arr;	//数组名-首元素的地址
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 1;
	//}

	//野指针
	//1、未初始化的指针变量
	//int* p;	//局部变量不初始化，里边默认放的是一个随机值
	//*p = 20;

	//2、指针越界访问
	//int a[10] = { 0 };
	//int* p = a;
	//int i = 0;
	//for (i = 0; i <= 12; i++)
	//{
	//	/**p = i;
	//	p++;*/
	//	*p++ = i;
	//}

	//3、指针指向的空间释放
	/*int* p = test();
	printf("%d\n",*p);
	return 0;*/
	
	//int a = 10;
	//int* pa = &a;	//初始化
	//int* p = NULL;	//NULL初始化指针，或给指针赋值

	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//
	//pa = NULL;
	//if (pa != NULL)
	//{
	//	//指针不为空指针时，可使用
	//}

	//指针加减数字运算
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];*/
	/*for (i = 0; i < size; i++)
	{
		printf("%d ", *p);
		p++;
	}*/
	/*for (i = 0; i < 5; i++)
	{
		printf("%d ", *p);
		p -= 2;
	}*/

	//指针-指针 得到两指针之间元素的个数
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",&arr[9] - &arr[0]);   // 输出9

	//char ch[5] = { 0 };
	//两指针指向不同空间 不能相互运算
	//printf("%d\n",&arr[9] - &ch[0]);	//err  结果不可预知

	//strlen - 求字符串长度
	//char arr[] = "bit";
	//int len = strlen(arr);	//数组名->首元素的地址
	//printf("%d\n", len);

	//C语言标准规定：
	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
	//但是不允许与指向第一个元素之前的那个内存位置的之间进行比较。


	//指针和数组
	//int arr[10] = {0};
	////数组名arr是首元素的地址
	//printf("%p\n", arr);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0]+1);
	//printf("%p\n", &arr);	
	//printf("%p\n", &arr+1);

	//1、 &arr -> &数组名 数组名不是首元素的地址-数组名表示整个数组
	//&数组名 取出的是整个数组的地址
	//2、sizeof(arr) -sizeof(数组名) -> 数组名表示的整个数组
	//sizeof(数组名) 计算的是整个数组的大小

	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	///*for (i = 0; i < 10; i++)
	//{
	//	printf("%p ==== %p\n",p+i, &arr[i]);
	//}*/

	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}

	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p+i));
	//}
	
	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;	//ppa就是二级指针
	//**ppa = 20;
	////int*** pppa = &ppa;	//pppa就是三级指针
	//printf("%d\n", **ppa);
	//printf("%d\n", a);

	
	//指针数组 - 数组 - 存放指针的数组
	//数组指针 - 指针
	
	int a = 10;
	int b = 20;
	int c = 30;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	
	//整型数组 - 存放整形
	//字符数组 - 存放字符
	//指针数组 - 存放指针

	int* arr[3] = { &a,&b,&c };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}


	return 0;
}