#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int* test()
//{
	//int a = 10;	  //�ֲ�����
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
	//int* p = &a;	//ָ�����
	////ָ���Ǹ�����������ڴ浥Ԫ�ĵ�ַ����ţ�

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
	//int* p = arr;	//������-��Ԫ�صĵ�ַ
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = 1;
	//}

	//Ұָ��
	//1��δ��ʼ����ָ�����
	//int* p;	//�ֲ���������ʼ�������Ĭ�Ϸŵ���һ�����ֵ
	//*p = 20;

	//2��ָ��Խ�����
	//int a[10] = { 0 };
	//int* p = a;
	//int i = 0;
	//for (i = 0; i <= 12; i++)
	//{
	//	/**p = i;
	//	p++;*/
	//	*p++ = i;
	//}

	//3��ָ��ָ��Ŀռ��ͷ�
	/*int* p = test();
	printf("%d\n",*p);
	return 0;*/
	
	//int a = 10;
	//int* pa = &a;	//��ʼ��
	//int* p = NULL;	//NULL��ʼ��ָ�룬���ָ�븳ֵ

	//int a = 10;
	//int* pa = &a;
	//*pa = 20;
	//
	//pa = NULL;
	//if (pa != NULL)
	//{
	//	//ָ�벻Ϊ��ָ��ʱ����ʹ��
	//}

	//ָ��Ӽ���������
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

	//ָ��-ָ�� �õ���ָ��֮��Ԫ�صĸ���
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",&arr[9] - &arr[0]);   // ���9

	//char ch[5] = { 0 };
	//��ָ��ָ��ͬ�ռ� �����໥����
	//printf("%d\n",&arr[9] - &ch[0]);	//err  �������Ԥ֪

	//strlen - ���ַ�������
	//char arr[] = "bit";
	//int len = strlen(arr);	//������->��Ԫ�صĵ�ַ
	//printf("%d\n", len);

	//C���Ա�׼�涨��
	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
	//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�֮����бȽϡ�


	//ָ�������
	//int arr[10] = {0};
	////������arr����Ԫ�صĵ�ַ
	//printf("%p\n", arr);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[0]+1);
	//printf("%p\n", &arr);	
	//printf("%p\n", &arr+1);

	//1�� &arr -> &������ ������������Ԫ�صĵ�ַ-��������ʾ��������
	//&������ ȡ��������������ĵ�ַ
	//2��sizeof(arr) -sizeof(������) -> ��������ʾ����������
	//sizeof(������) ���������������Ĵ�С

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
	//int** ppa = &pa;	//ppa���Ƕ���ָ��
	//**ppa = 20;
	////int*** pppa = &ppa;	//pppa��������ָ��
	//printf("%d\n", **ppa);
	//printf("%d\n", a);

	
	//ָ������ - ���� - ���ָ�������
	//����ָ�� - ָ��
	
	int a = 10;
	int b = 20;
	int c = 30;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��

	int* arr[3] = { &a,&b,&c };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}


	return 0;
}