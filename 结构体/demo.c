#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//描述一个学生  
//struct - 结构体关键字   Stu - 结构体标签   struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}s1,s2,s3;	//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;
//
//int main(void)
//{
//	//创建局部的结构体变量
//	struct Stu s1 = {"张三",20,"123456789","男"};
//	Stu s2 = {"李四",18,"123456789","女"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main(void)
//{
//	char arr[] = "hello world\n";
//	struct T t = { "哈哈",{100,'a',"C语言",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu temp)
//{
//	printf("name: %s\n", temp.name);
//	printf("age: %d\n", temp.age);
//	printf("tel: %s\n", temp.tel);
//	printf("sex: %s\n", temp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tel: %s\n", ps->tel);
//	printf("sex: %s\n", ps->sex);
//}
//
//int main(void)
//{
//	Stu s = {"王五",18,"123456789","男"};
//	//打印结构体数据 -> 首选Print2
//	//Print1函数 在时间上和空间上开销更大一些
//	//结论：结构体传参的时候，要传结构体的地址
//	Print2(&s);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main(void)
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);
	return 0;
}

