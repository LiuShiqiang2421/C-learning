#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void test(int* arr)
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
//int main(void)
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main(void)
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main(void)
//{
//	const char* p = "abcdef";
//	//"abcdef"是一个常量字符串
//	//把字符串首字符的地址赋值给p
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main(void)
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	//if (arr1 == arr2)
//	//{
//	//	printf("yes\n");
//	//}
//	//else
//	//{
//	//	printf("no\n");  //√
//	//}
//	if (p1 == p2)
//	{
//		printf("yes\n"); //√
//	}
//	else
//	{
//		printf("no\n");  
//	}
//	return 0;
//}

//int main(void)
//{
//	//存放整形指针的数组 ->指针数组 -> 是数组，用来存放指针
//	int* parr[4];
//	//存放字符指针的数组 ->指针数组
//	char* pch[5];
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d\n", *(arr[i]));
//	return 0;
//}

//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			printf("%d ",*(parr[i]+j));
//		printf("\n");
//	}
//	return 0;
//}

//数组指针 -> 指向数组的指针 -> 可以存放数组的地址
//int main(void)
//{
//	//int arr[10] = { 0 };
//	//arr -> 首元素地址
//	//&arr[0] -> 首元素地址
//	//&arr -> 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;  //数组的地址要存起来
//	//p就是数组指针
//	return 0;
//}

//int main(void)
//{
//	char ch1[] = { 'a','b','c','d','e' };
//	char ch2[] = { 'b','c','d','e','f' };
//	char ch3[] = { 'c','d','e','f','g' };
//	char ch4[] = { 'd','e','f','g','h' };
//	char ch5[] = { 'e','f','g','h','i' };
//	char* arr[5] = { ch1,ch2,ch3,ch4,ch5 };
//	char* (*pa)[5] = &arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			printf("%c ", *((*pa)[i]) + j);
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	///*for (i = 0; i < 10; i++)
//	//	printf("%d ",(*pa)[i]);*/
//
//	//for (i = 0; i < 10; i++)
//	//	printf("%d ", *(*pa + i));
//	return 0;
//}

//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);
//			//p+i是找到二维数组一行的地址，*(p+i)解引用是该行的元素，*(p+i)+j是找到该行下标为j的地址，*(*(p+i)+j)解引用是找到该行下标为j的元素
//			//printf("%d ", *(*(p + i) + j));
//			//p+i是找到二维数组一行的地址，*(p+i)解引用是该行的元素，*(p+i)[j]是访问该行元素的第j个元素
//			//printf("%d ", (*(p + i))[j]);
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);	//arr -> 数组名 -> 首元素的地址(首元素是二维数组的第一行)
//	print2(arr, 3, 5);
//	return 0;
//}

//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//		//arr[i] == *(arr+i) == *(p+i) == p[i]
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//	return 0;
//}

//int main(void)
//{
//	int arr[5];			//arr是一个5个元素的整形数组
//	int* parr1[10];		//parr1是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//	int(*parr2)[10];	//parr2是一个指针，该指针指向一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针
//	int(*parr3[10])[5];	//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素的类型int
//	return 0;
//}

//int main(void)
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";	//常量字符串
//	int* arr[10];
//	char* ch[5];
//	int* p3;	
//	char* p4;	
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}


//数组传参
//一维数组传参时，参数可以是数组，数组大小可以省略；由于数组名是数组首元素的地址，故参数也可以是指针类型
//以下三种方法均可
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int* arr)
//{}
//void test2(int* arr[])
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr);
//	return 0;
//}

//二维数组传参
//void test(int arr[3][5])
//{}
//二维数组传参，参数行可以省略，但列不可省略
//void test(int arr[][5])
//{}
//void test(int(*arr)[5])
//{}
//int main(void)
//{
//	int arr[3][5] = { 0 };
//	//二维数组的首元素是二维数组的第一行，首元素的地址是第一行的地址，而第一行是一维数组      
//	//故首元素的地址是一维数组的地址
//	test(arr);
//	return 0;
//}


//指针传参
//一级指针传参
//void print(int* p, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d\n", *(p + i));
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(p, size);
//	return 0;
//}

//二级指针传参
//void test(char** p)
//{}
//int main(void)
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}

//数组指针 -> 是指向数组的指针
//函数指针 -> 是指向函数的指针 -> 存放函数地址的一个指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	/*int a = 10;
//	int b = 20;*/
//
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;
//
//	//printf("%d\n", Add(a, b));
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	//&函数名 和 函数名都是函数的地址
//	
//	int(*pa)(int,int) = Add;	//int代表函数的返回值类型；(int,int)代表函数的参数类型
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main(void)
//{
//	void (*p)(char*) = Print;	//void代表函数的返回值类型；(char*)代表函数的参数类型
//	(*p)("abcdef");
//	p("abcdef");	//在调用时，也可以不解引用直接调用 ，其实*号没有什么具体的作用
//	return 0;
//}

//int main(void) 
//{
//	//(*(void (*)())0)();
//	//其中，void (*)()是函数指针类型，(void (*)())0 是把 0 强制类型转换诚函数指针类型 -> 0就是一个函数的地址
//	//*(void (*)())0 解引用找到该函数，(*(void (*)())0)()是调用该函数，该函数参数无参
//	
//	void (*signal(int, void(*)(int)))(int);
//	//signal是一个函数声明，该函数的参数有两个，第一个参数是int类型，第二个参数是函数指针类型 void(*)(int)，该函数指针指向的函数的参数是int,返回值类型是void
//	//signal函数的返回值类型也是一个函数指针 void(*)(int) ，该函数指针指向的函数的参数是int,返回值类型是void
//
//	//简化：
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////函数指针数组
//int main(void)
//{
//	//指针数组
//	//int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 -> 函数指针的数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };	//parr -> 函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d\n", parr[i](10, 5));
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf,能够指向my_strcpy()
//char* (*pf)(char*, const char*);
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


//函数指针用途(转移表) 案例：计算器
//void menu()
//{
//	printf("********************\n");
//	printf("**  1.Add  2.Sub  **\n");
//	printf("**  3.Mul  4.Div  **\n");
//	printf("**  5.Xor  0.exit **\n");
//	printf("********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////异或 -> 如果a、b两个值不相同，则异或结果为1。如果a、b两个值相同，异或结果为0。
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calculate(int(*pf)(int, int))	//形式参数是函数的地址
//{
//	int x, y = 0;
//	printf("请输入两个数组:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main(void)
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calculate(Add);
//			break;
//		case 2:
//			Calculate(Sub);
//			break;
//		case 3:
//			Calculate(Mul);
//			break;
//		case 4:
//			Calculate(Div);
//			break;
//		case 5:
//			Calculate(Xor);
//			break;
//		case 0:
//			printf("程序退出！\n");
//			break;
//		default:
//			printf("输入有误！请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main(void)
//{
//	int input = 0;
//	int x, y = 0;
//	//函数指针数组 -> 转移表
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个数字:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("程序退出！");
//		}
//		else
//		{
//			printf("输入有误！请重新输入！\n");
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;	//取出数组的地址
//	int(*pfArr[4])(int, int);	//pfArr是函数指针数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素，指向的数组的每个元素的类型是一个函数指针 int(*)(int,int) 
//	return 0;
//}

////回调函数机制
//void print(char* str)
//{
//	printf("%s\n", str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("hello world");
//}
//int main(void)
//{
//	test(print);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int(*pAdd)(int, int) = Add;
//
//	//printf("%d\n", (*pAdd)(1, 2));
//	//printf("%d\n", pAdd(1, 2));	 //*号没有什么实际价值
//
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////void qsort(void* buf, size_t num, size_t size, int (*compare)(const void*, const void*));
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 - *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用 > < = 来比较，应该使用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void Swap(char* buff1, char* buff2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char temp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = temp;
//		buff1++;
//		buff2++;
//	}
//}
//void bubble_sort(void* base, int size, int width, int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//外层循环确定趟数
//	for (i = 0; i < size - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, size, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0, };
//	int size = sizeof(f) / sizeof(f[0]);
//	qsort(f, size, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%f ", f[i]);
//}
//void test3()
//{
//	struct Stu s[3] = { {"张三",16},{"李四",18},{"王五",20} };
//	int size = sizeof(s) / sizeof(s[0]);
//	//qsort(s, size, sizeof(s[0]), cmp_Stu_by_age);
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小（字节）
//	//第四个参数：函数指针（比较两个元素的函数的地址）（该函数使用者自己实现）
//	//			函数指针的两个参数是：待比较的两个元素的地址
//	qsort(s, size, sizeof(s[0]), cmp_Stu_by_name);
//}
//void test4()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的数据是什么类型
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, size, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//}
////void test5()
////{
////	struct Stu s[3] = { {"张三",16},{"李四",18},{"王五",20} };
////	int size = sizeof(s) / sizeof(s[0]);
////	bubble_sort(s, size, sizeof(s[0]), cmp_Stu_by_age);
////	bubble_sort(s, size, sizeof(s[0]), cmp_Stu_by_name);
////}
//
//int main(void)
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}

//int main(void)
//{
//	int a = 10;
//	void* p = &a;
//	//void* 类型的指针，可以接受任意类型的地址
//	//*p = 0;   void* 类型的指针不能进行解引用操作
//	//void* 类型的指针不能进行加减整数的操作
//
//	return 0;
//}


/////////指针笔试题面试题
//int main(void)
//{
//	//数组名是首元素地址 但有两个例外： 1.sizeof(数组名) -> 数组名表示整个数组   2.&数组名 -> 数组名表示整个数组
//	//整型数组
//	int a[] = { 1,2,3,4, };
//	printf("%d\n", sizeof(a));			//16	sizeof(数组名)->计算的是数组总大小，单位字节，4*4
//	printf("%d\n", sizeof(a + 0));		//4		此时 a 表示首元素的地址，a+0 还是首元素地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	printf("%d\n", sizeof(*a));			//4		此时 a 表示首元素的地址，*a 解引用就是首元素，此时求的是首元素的大小
//	printf("%d\n", sizeof(a + 1));		//4		此时 a 表示首元素的地址，a+1 是第二个元素的地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	printf("%d\n", sizeof(a[1]));		//4		第二个元素的大小
//	printf("%d\n", sizeof(&a));			//4		&a 取出的是数组的地址，但是数组的地址也是地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	printf("%d\n", sizeof(*&a));		//16	数组的地址解引用 -> 访问整个数组    *&操作抵消（同第一种写法）
//	printf("%d\n", sizeof(&a + 1));		//4		&a 取出的是数组的地址，&a+1 是跳过整个数组,此处仍计算的是地址的大小
//	printf("%d\n", sizeof(&a[0]));		//4		a[0] 是该数组的第一个元素，&a[0] 是取第一个元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));	//4		&a[0] 是取第一个元素的地址，&a[0]+1 是第二个元素的地址
//	return 0;
//}

//int main(void)
//{
//	//字符数组 
//	char arr[] = { 'a','b','c','d','e','f', };
//	//printf("%d\n", sizeof(arr));		//6		计算的是数组大小，每个数组元素是1个字节，6*1
//	//printf("%d\n", sizeof(arr + 0));	//4		此时 arr 表示首元素的地址，arr+0 还是首元素地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	//printf("%d\n", sizeof(*arr));		//1		arr 是首元素地址，*arr 是首元素，该数组首元素的大小为1个字节
//	//printf("%d\n", sizeof(arr[1]));		//1		arr[1] 是数组的第二个元素（为字符类型，大小为1）
//	//printf("%d\n", sizeof(&arr));		//4		&arr 取出的是数组的地址，但是数组的地址也是地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	//printf("%d\n", sizeof(&arr + 1));	//4		&arr 取出的是数组的地址，&arr+1 是跳过整个数组,此处仍计算的是地址的大小
//	//printf("%d\n", sizeof(&arr[0] + 1));//4		&arr[0] 是取第一个元素的地址，&arr[0]+1 是第二个元素的地址
//	
//	printf("%d\n", strlen(arr));		//随机值		strlen()求的是字符串的长度，以 \0 结束
//	printf("%d\n", strlen(arr + 0));	//随机值		此处代码写法同上
//	//printf("%d\n", strlen(*arr));		//err		非法访问内存，*arr 是首元素字符a,字符a的ASCII码值为97,相当于把97作为地址进行访问
//	//printf("%d\n", strlen(arr[1]));	//err		非法访问内存，此时相当于传的参数为字符b，b的ASCII值为98
//	printf("%d\n", strlen(&arr));		//随机值		&arr 取出的是数组的地址，道理同1
//	printf("%d\n", strlen(&arr + 1));	//随机值		&arr+1 是跳过整个数组,向后找到 \0 的位置随机，但和&arr的随机结果相差整个数组的大小，即为6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值		&arr[0] 是取出第一个元素的地址，即字符 a 的地址，&arr[0]+1 则指向了字符 b ,strlen()从 b 开始向后找 \0 ,但和 &arr 的随机值大小相差1
//
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "abcdef";		//字符串中的值为 a b c d e f \0 ,共7个字符
//	//printf("%d\n", sizeof(arr));		//7		数组名表示整个数组，此时计算数组的大小，数组共有7个元素，每个元素为1个字节，总大小为7*1=7(字节)
//	//printf("%d\n", sizeof(arr + 0));	//4		此时 arr 表示首元素的地址，arr+0 还是首元素地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	//printf("%d\n", sizeof(*arr));		//1		arr 是首元素地址，*arr 是首元素，该数组首元素的大小为1个字节
//	//printf("%d\n", sizeof(arr[1]));		//1		arr[1] 是数组的第二个元素（为字符类型，大小为1）
//	//printf("%d\n", sizeof(&arr));		//4		&arr 取出的是数组的地址，但是数组的地址也是地址，地址的大小为4个字节(32位平台)或8个字节(64位平台)
//	//printf("%d\n", sizeof(&arr + 1));	//4		&arr 取出的是数组的地址，&arr+1 是跳过整个数组,此处仍计算的是地址的大小
//	//printf("%d\n", sizeof(&arr[0] + 1));//4		&arr[0] 是取第一个元素的地址，&arr[0]+1 是第二个元素的地址
//	
//	printf("%d\n", strlen(arr));		//6		\0 之前共有6个字符
//	printf("%d\n", strlen(arr + 0));	//6		arr为数组名——>首元素地址，arr+0 同为首元素地址，结果同上
//	//printf("%d\n", strlen(*arr));		//err	非法访问内存，*arr 是首元素字符a,字符a的ASCII码值为97,相当于把97作为地址进行访问
//	//printf("%d\n", strlen(arr[1]));		//err	非法访问内存，此时相当于传的参数为字符b，b的ASCII值为98
//	printf("%d\n", strlen(&arr));		//6		&arr 取出的是数组的地址，此处求的是 \0 之前的字符的个数
//	printf("%d\n", strlen(&arr + 1));	//随机值	&arr+1 是跳过整个数组，但是之后什么时候到 \0 结束是随机的
//	printf("%d\n", strlen(&arr[0] + 1));//5		&arr[0] 是取出第一个元素的地址，即字符 a 的地址，&arr[0]+1 则指向了字符 b ,strlen()从 b 开始向后找 \0 ,共5个字符
//	return 0;
//}

int main(void)
{
	char* p = "abcdef";		//这种写法是将常量字符串 abcdef\0 的 a 字符的地址放到 p 中
	//printf("%d\n", sizeof(p));			//4		计算指针变量 p 的大小，指针变量的大小为4（32位）或8个字节（64位）
	//printf("%d\n", sizeof(p + 1));		//4		p+1得到的是字符 b 的地址
	//printf("%d\n", sizeof(*p));			//1		*p就是字符串的第一个字符 -> a
	//printf("%d\n", sizeof(p[0]));		//1		p[0] 等价于 *(p+0) 等价于 'a'
	//printf("%d\n", sizeof(&p));			//4		取出 p 的地址
	//printf("%d\n", sizeof(&p + 1));		//4		&p+1 是跳过 p，但仍然是地址
	//printf("%d\n", sizeof(&p[0] + 1));	//4		&p[0] 得到字符 a 的地址,&p[0] + 1即为字符 b 的地址
	
	
	return 0;
}
















