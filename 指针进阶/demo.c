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
//	//"abcdef"��һ�������ַ���
//	//���ַ������ַ��ĵ�ַ��ֵ��p
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
//	//	printf("no\n");  //��
//	//}
//	if (p1 == p2)
//	{
//		printf("yes\n"); //��
//	}
//	else
//	{
//		printf("no\n");  
//	}
//	return 0;
//}

//int main(void)
//{
//	//�������ָ������� ->ָ������ -> �����飬�������ָ��
//	int* parr[4];
//	//����ַ�ָ������� ->ָ������
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

//����ָ�� -> ָ�������ָ�� -> ���Դ������ĵ�ַ
//int main(void)
//{
//	//int arr[10] = { 0 };
//	//arr -> ��Ԫ�ص�ַ
//	//&arr[0] -> ��Ԫ�ص�ַ
//	//&arr -> ����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;  //����ĵ�ַҪ������
//	//p��������ָ��
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
//			//p+i���ҵ���ά����һ�еĵ�ַ��*(p+i)�������Ǹ��е�Ԫ�أ�*(p+i)+j���ҵ������±�Ϊj�ĵ�ַ��*(*(p+i)+j)���������ҵ������±�Ϊj��Ԫ��
//			//printf("%d ", *(*(p + i) + j));
//			//p+i���ҵ���ά����һ�еĵ�ַ��*(p+i)�������Ǹ��е�Ԫ�أ�*(p+i)[j]�Ƿ��ʸ���Ԫ�صĵ�j��Ԫ��
//			//printf("%d ", (*(p + i))[j]);
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);	//arr -> ������ -> ��Ԫ�صĵ�ַ(��Ԫ���Ƕ�ά����ĵ�һ��)
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
//	int arr[5];			//arr��һ��5��Ԫ�ص���������
//	int* parr1[10];		//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//	int(*parr2)[10];	//parr2��һ��ָ�룬��ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//	int(*parr3[10])[5];	//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ�ص�����int
//	return 0;
//}

//int main(void)
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";	//�����ַ���
//	int* arr[10];
//	char* ch[5];
//	int* p3;	
//	char* p4;	
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}


//���鴫��
//һά���鴫��ʱ���������������飬�����С����ʡ�ԣ�������������������Ԫ�صĵ�ַ���ʲ���Ҳ������ָ������
//�������ַ�������
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

//��ά���鴫��
//void test(int arr[3][5])
//{}
//��ά���鴫�Σ������п���ʡ�ԣ����в���ʡ��
//void test(int arr[][5])
//{}
//void test(int(*arr)[5])
//{}
//int main(void)
//{
//	int arr[3][5] = { 0 };
//	//��ά�������Ԫ���Ƕ�ά����ĵ�һ�У���Ԫ�صĵ�ַ�ǵ�һ�еĵ�ַ������һ����һά����      
//	//����Ԫ�صĵ�ַ��һά����ĵ�ַ
//	test(arr);
//	return 0;
//}


//ָ�봫��
//һ��ָ�봫��
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

//����ָ�봫��
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

//����ָ�� -> ��ָ�������ָ��
//����ָ�� -> ��ָ������ָ�� -> ��ź�����ַ��һ��ָ��
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
//	//&������ �� ���������Ǻ����ĵ�ַ
//	
//	int(*pa)(int,int) = Add;	//int�������ķ���ֵ���ͣ�(int,int)�������Ĳ�������
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main(void)
//{
//	void (*p)(char*) = Print;	//void�������ķ���ֵ���ͣ�(char*)�������Ĳ�������
//	(*p)("abcdef");
//	p("abcdef");	//�ڵ���ʱ��Ҳ���Բ�������ֱ�ӵ��� ����ʵ*��û��ʲô���������
//	return 0;
//}

//int main(void) 
//{
//	//(*(void (*)())0)();
//	//���У�void (*)()�Ǻ���ָ�����ͣ�(void (*)())0 �ǰ� 0 ǿ������ת���Ϻ���ָ������ -> 0����һ�������ĵ�ַ
//	//*(void (*)())0 �������ҵ��ú�����(*(void (*)())0)()�ǵ��øú������ú��������޲�
//	
//	void (*signal(int, void(*)(int)))(int);
//	//signal��һ�������������ú����Ĳ�������������һ��������int���ͣ��ڶ��������Ǻ���ָ������ void(*)(int)���ú���ָ��ָ��ĺ����Ĳ�����int,����ֵ������void
//	//signal�����ķ���ֵ����Ҳ��һ������ָ�� void(*)(int) ���ú���ָ��ָ��ĺ����Ĳ�����int,����ֵ������void
//
//	//�򻯣�
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
////����ָ������
//int main(void)
//{
//	//ָ������
//	//int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ -> ����ָ�������
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };	//parr -> ����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d\n", parr[i](10, 5));
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf,�ܹ�ָ��my_strcpy()
//char* (*pf)(char*, const char*);
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


//����ָ����;(ת�Ʊ�) ������������
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
////��� -> ���a��b����ֵ����ͬ���������Ϊ1�����a��b����ֵ��ͬ�������Ϊ0��
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calculate(int(*pf)(int, int))	//��ʽ�����Ǻ����ĵ�ַ
//{
//	int x, y = 0;
//	printf("��������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main(void)
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�����˳���\n");
//			break;
//		default:
//			printf("�����������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main(void)
//{
//	int input = 0;
//	int x, y = 0;
//	//����ָ������ -> ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("��������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�����˳���");
//		}
//		else
//		{
//			printf("�����������������룡\n");
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
//	int(*p)[10] = &arr;	//ȡ������ĵ�ַ
//	int(*pfArr[4])(int, int);	//pfArr�Ǻ���ָ������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ�أ�ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int) 
//	return 0;
//}

////�ص���������
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
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int(*pAdd)(int, int) = Add;
//
//	//printf("%d\n", (*pAdd)(1, 2));
//	//printf("%d\n", pAdd(1, 2));	 //*��û��ʲôʵ�ʼ�ֵ
//
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}


//ð������
//void bubble_sort(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		//һ��ð������
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
//	//�Ƚ���������ֵ
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ���� > < = ���Ƚϣ�Ӧ��ʹ��strcmp����
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
//	//���ѭ��ȷ������
//	for (i = 0; i < size - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
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
//	struct Stu s[3] = { {"����",16},{"����",18},{"����",20} };
//	int size = sizeof(s) / sizeof(s[0]);
//	//qsort(s, size, sizeof(s[0]), cmp_Stu_by_age);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С���ֽڣ�
//	//���ĸ�����������ָ�루�Ƚ�����Ԫ�صĺ����ĵ�ַ�����ú���ʹ�����Լ�ʵ�֣�
//	//			����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//	qsort(s, size, sizeof(s[0]), cmp_Stu_by_name);
//}
//void test4()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ������������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, size, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//}
////void test5()
////{
////	struct Stu s[3] = { {"����",16},{"����",18},{"����",20} };
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
//	//void* ���͵�ָ�룬���Խ����������͵ĵ�ַ
//	//*p = 0;   void* ���͵�ָ�벻�ܽ��н����ò���
//	//void* ���͵�ָ�벻�ܽ��мӼ������Ĳ���
//
//	return 0;
//}


/////////ָ�������������
//int main(void)
//{
//	//����������Ԫ�ص�ַ �����������⣺ 1.sizeof(������) -> ��������ʾ��������   2.&������ -> ��������ʾ��������
//	//��������
//	int a[] = { 1,2,3,4, };
//	printf("%d\n", sizeof(a));			//16	sizeof(������)->������������ܴ�С����λ�ֽڣ�4*4
//	printf("%d\n", sizeof(a + 0));		//4		��ʱ a ��ʾ��Ԫ�صĵ�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	printf("%d\n", sizeof(*a));			//4		��ʱ a ��ʾ��Ԫ�صĵ�ַ��*a �����þ�����Ԫ�أ���ʱ�������Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1));		//4		��ʱ a ��ʾ��Ԫ�صĵ�ַ��a+1 �ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	printf("%d\n", sizeof(a[1]));		//4		�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));			//4		&a ȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	printf("%d\n", sizeof(*&a));		//16	����ĵ�ַ������ -> ������������    *&����������ͬ��һ��д����
//	printf("%d\n", sizeof(&a + 1));		//4		&a ȡ����������ĵ�ַ��&a+1 ��������������,�˴��Լ�����ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0]));		//4		a[0] �Ǹ�����ĵ�һ��Ԫ�أ�&a[0] ��ȡ��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));	//4		&a[0] ��ȡ��һ��Ԫ�صĵ�ַ��&a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main(void)
//{
//	//�ַ����� 
//	char arr[] = { 'a','b','c','d','e','f', };
//	//printf("%d\n", sizeof(arr));		//6		������������С��ÿ������Ԫ����1���ֽڣ�6*1
//	//printf("%d\n", sizeof(arr + 0));	//4		��ʱ arr ��ʾ��Ԫ�صĵ�ַ��arr+0 ������Ԫ�ص�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	//printf("%d\n", sizeof(*arr));		//1		arr ����Ԫ�ص�ַ��*arr ����Ԫ�أ���������Ԫ�صĴ�СΪ1���ֽ�
//	//printf("%d\n", sizeof(arr[1]));		//1		arr[1] ������ĵڶ���Ԫ�أ�Ϊ�ַ����ͣ���СΪ1��
//	//printf("%d\n", sizeof(&arr));		//4		&arr ȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	//printf("%d\n", sizeof(&arr + 1));	//4		&arr ȡ����������ĵ�ַ��&arr+1 ��������������,�˴��Լ�����ǵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(&arr[0] + 1));//4		&arr[0] ��ȡ��һ��Ԫ�صĵ�ַ��&arr[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	
//	printf("%d\n", strlen(arr));		//���ֵ		strlen()������ַ����ĳ��ȣ��� \0 ����
//	printf("%d\n", strlen(arr + 0));	//���ֵ		�˴�����д��ͬ��
//	//printf("%d\n", strlen(*arr));		//err		�Ƿ������ڴ棬*arr ����Ԫ���ַ�a,�ַ�a��ASCII��ֵΪ97,�൱�ڰ�97��Ϊ��ַ���з���
//	//printf("%d\n", strlen(arr[1]));	//err		�Ƿ������ڴ棬��ʱ�൱�ڴ��Ĳ���Ϊ�ַ�b��b��ASCIIֵΪ98
//	printf("%d\n", strlen(&arr));		//���ֵ		&arr ȡ����������ĵ�ַ������ͬ1
//	printf("%d\n", strlen(&arr + 1));	//���ֵ		&arr+1 ��������������,����ҵ� \0 ��λ�����������&arr�������������������Ĵ�С����Ϊ6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ		&arr[0] ��ȡ����һ��Ԫ�صĵ�ַ�����ַ� a �ĵ�ַ��&arr[0]+1 ��ָ�����ַ� b ,strlen()�� b ��ʼ����� \0 ,���� &arr �����ֵ��С���1
//
//	return 0;
//}

//int main(void)
//{
//	char arr[] = "abcdef";		//�ַ����е�ֵΪ a b c d e f \0 ,��7���ַ�
//	//printf("%d\n", sizeof(arr));		//7		��������ʾ�������飬��ʱ��������Ĵ�С�����鹲��7��Ԫ�أ�ÿ��Ԫ��Ϊ1���ֽڣ��ܴ�СΪ7*1=7(�ֽ�)
//	//printf("%d\n", sizeof(arr + 0));	//4		��ʱ arr ��ʾ��Ԫ�صĵ�ַ��arr+0 ������Ԫ�ص�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	//printf("%d\n", sizeof(*arr));		//1		arr ����Ԫ�ص�ַ��*arr ����Ԫ�أ���������Ԫ�صĴ�СΪ1���ֽ�
//	//printf("%d\n", sizeof(arr[1]));		//1		arr[1] ������ĵڶ���Ԫ�أ�Ϊ�ַ����ͣ���СΪ1��
//	//printf("%d\n", sizeof(&arr));		//4		&arr ȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�СΪ4���ֽ�(32λƽ̨)��8���ֽ�(64λƽ̨)
//	//printf("%d\n", sizeof(&arr + 1));	//4		&arr ȡ����������ĵ�ַ��&arr+1 ��������������,�˴��Լ�����ǵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(&arr[0] + 1));//4		&arr[0] ��ȡ��һ��Ԫ�صĵ�ַ��&arr[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//	
//	printf("%d\n", strlen(arr));		//6		\0 ֮ǰ����6���ַ�
//	printf("%d\n", strlen(arr + 0));	//6		arrΪ����������>��Ԫ�ص�ַ��arr+0 ͬΪ��Ԫ�ص�ַ�����ͬ��
//	//printf("%d\n", strlen(*arr));		//err	�Ƿ������ڴ棬*arr ����Ԫ���ַ�a,�ַ�a��ASCII��ֵΪ97,�൱�ڰ�97��Ϊ��ַ���з���
//	//printf("%d\n", strlen(arr[1]));		//err	�Ƿ������ڴ棬��ʱ�൱�ڴ��Ĳ���Ϊ�ַ�b��b��ASCIIֵΪ98
//	printf("%d\n", strlen(&arr));		//6		&arr ȡ����������ĵ�ַ���˴������ \0 ֮ǰ���ַ��ĸ���
//	printf("%d\n", strlen(&arr + 1));	//���ֵ	&arr+1 �������������飬����֮��ʲôʱ�� \0 �����������
//	printf("%d\n", strlen(&arr[0] + 1));//5		&arr[0] ��ȡ����һ��Ԫ�صĵ�ַ�����ַ� a �ĵ�ַ��&arr[0]+1 ��ָ�����ַ� b ,strlen()�� b ��ʼ����� \0 ,��5���ַ�
//	return 0;
//}

int main(void)
{
	char* p = "abcdef";		//����д���ǽ������ַ��� abcdef\0 �� a �ַ��ĵ�ַ�ŵ� p ��
	//printf("%d\n", sizeof(p));			//4		����ָ����� p �Ĵ�С��ָ������Ĵ�СΪ4��32λ����8���ֽڣ�64λ��
	//printf("%d\n", sizeof(p + 1));		//4		p+1�õ������ַ� b �ĵ�ַ
	//printf("%d\n", sizeof(*p));			//1		*p�����ַ����ĵ�һ���ַ� -> a
	//printf("%d\n", sizeof(p[0]));		//1		p[0] �ȼ��� *(p+0) �ȼ��� 'a'
	//printf("%d\n", sizeof(&p));			//4		ȡ�� p �ĵ�ַ
	//printf("%d\n", sizeof(&p + 1));		//4		&p+1 ������ p������Ȼ�ǵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));	//4		&p[0] �õ��ַ� a �ĵ�ַ,&p[0] + 1��Ϊ�ַ� b �ĵ�ַ
	
	
	return 0;
}
















