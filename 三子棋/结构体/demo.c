#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����һ��ѧ��  
//struct - �ṹ��ؼ���   Stu - �ṹ���ǩ   struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tel[12];
//	char sex[5];
//}s1,s2,s3;	//s1,s2,s3������ȫ�ֵĽṹ�����

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
//	//�����ֲ��Ľṹ�����
//	struct Stu s1 = {"����",20,"123456789","��"};
//	Stu s2 = {"����",18,"123456789","Ů"};
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
//	struct T t = { "����",{100,'a',"C����",3.14},arr };
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
//	Stu s = {"����",18,"123456789","��"};
//	//��ӡ�ṹ������ -> ��ѡPrint2
//	//Print1���� ��ʱ���ϺͿռ��Ͽ�������һЩ
//	//���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
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

