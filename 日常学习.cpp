
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
////int main()
////{
////	int a = 0;
////	int b = ~a;
////	printf("%d\n", b);
////	return 0;
////}
//
////int main()
////{
////	int a = 10;
////	int b = a--;
////	printf("a=%d b=%d", a, b);
////	return 0;
////}
//
////int main()
////{
////	int a =(int)3.94;
////	printf("%d\n",a);
////
////	return 0;
////}
//
//
//
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	if (a != b)
////		printf("RIGHT");
////	else
////		printf("FALSE");
////	return 0;
////}
//
////int main()
////{
////	int a = 3;
////	int b = 0;
////	int c = a || b;
////	printf("c= %d", c);
////	return 0;
////}
//
////int main()
////{
////	int a = 100;
////	int b = 20;
////	int max = 0;
////	max = (a > b ? a : b);
////	printf("max=% d", max);
////	return 0;
////}
//
//
////int Add(int x, int y)
////{
////	int z = 0;
////	z = x + y;
////	return z;
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
//////	scanf("%d%d", &a,& b);
//////	int sum = Add(a, b);
//////	printf(" %d\n", sum);
//////	return 0;
//////}.
////
////int main()
////{
////	int a = -2;
////	int b = ~a;
////	printf("%d\n", b);
////	return 0;
////}
//
//
//
////int main()
////{
////	unsigned int a =-99;
////	printf("a= %d\n", a);
////	return 0;
////}
//
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	printf("%p\n", &a);
////	printf("%p\n", p);
////	return 0;
//////}
////
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	*p = 20;
////	printf("a = %d\n", a);
////		return 0;
//
////int main()
////{
////	char a = 'w';
////	char* pc = &a;
////	*pc = 'n';
////	printf("%d\n",sizeof(pc));
////	return 0;
//
////extern int Add(int, int);
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf_s("%d%d", &a,&b);
////	int sum = Add(a, b);
////	printf("%d\n", sum);
////	return 0;
////}
////int main()
////{
////	extern int a;
////	printf("%d\n", a);
////	return 0;
////}
////#define MAX(a,b) (a>b?a:b)
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d%d", &a, &b);
////	int max = MAX(a, b);
////	printf("%d\n", max);
////	return 0;
//////}
////int main()
////{
////	int a= 10;
////	int* p = &a;
////	*p = 90;
////	printf("a= %d\n", a);
//////	return 0;
//////}
//////int main()
//////{
//////	int a = 10;
//////    int* p = &a;
//////	*p = 30;
//////	printf("%d\n",sizeof(p));
//////	return 0;
//////}
////int main()
////{
////	printf("%d\n",sizeof(char*));
////	printf("%d\n",sizeof(short*));
////	printf("%d\n",sizeof(double*));
////	printf("%d\n",sizeof(float*));
////	return 0;
////}
//
////struct  Book
////{
////	char name[20];
////	short price;
////};
////int main()
////{
////	struct Book b1 = { "��ι��Լ���",55 };
////	struct Book* p = &b1;
////	printf("�۸� %d\n",p->price);
////	return 0;
////}
//
////struct Book
////{
////	char name[20];
////	int price;
////
////};
////int main()
////{
////	struct Book b1 = { "��������",30};
////	strcpy(b1.name, "C++");
////	printf("����: %s\n", b1.name);
////	return 0;
////}
//
////int main()
////{
////	int age = 10;
////	if (age < 18)
////		printf("δ����");
////	return 0;
////}
//
////int main()
////{
////	int age = 10;
////	if (age < 18)
////		printf("δ����\n");
////	else
////		printf("�ѳ���\m");
////	return 0;
////}
////int main()
////{
////	int age = 0;
////	scanf("%d\n", &age);
////	if (age>=0 && age < 18)
////		printf("δ����\n");
////	else if (age >= 18 && age < 28)
////		printf("����\n");
////	else if (age >= 28 && age < 50)
////		printf("׳��\n");
////	else if (age >= 50 && age < 120)
////		printf("����\n");
////	else
////		printf("������\n");
////	return 0;
////}
////int main()
////{
////	int age = 10;
////	if (age >= 0 && age < 18)
////	{
////		printf("δ����\n");
////		printf("����̸����\n");
////	}
////	return 0;
////}
////
////int main()
////{
////	int a = 0;
////	int b = 2;
////	if (a == 0)//==�ж����
////		if (b == 2)
////			printf("hehe\n");
////	    else	
////			printf("haha\n");
////	return 0;
////}
////int main()
////{
////	int a = 5;
////	if (a > 22)
////	{
////		return 6;
////	}
////	else
////	{
////		return 666;
////	}
////	return 0;
////}
////int main()
////{
////	int num = 6;
////	if (9 == num)
////		printf("�Ǻ�\n");
////	return 0;
////}
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	if (a % 2 == 1)
////		printf("aΪ����");
////	else
////		printf("aΪż��");
////	return 0;
////}
////int main()
////{
////	int a = 1;
////	while (a <= 100)
////	{
////		if (a % 2 == 1)
////		     printf("%d ", a)
////		a++;
////	}
////	return 0;
////}
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////	switch (day)
////	{
////	case 1:
////		printf("����һ\n");
////		break;
////	case 2:
////		printf("���ڶ�\n");
////		break;
////	case 3:
////		printf("������\n");
////		break;
////	case 4:
////		printf("������\n");
////		break;
////	}
////	return 0;
////}
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////	switch (day)
////	{
////	case 1:
////	case 2:
////	case 3:
////		printf("��Ϣ��\n");
////		break;
////	case 4:
////		printf("������\n");
////		break;
////	}
////	return 0;
////}
////int main()
////{
////	int a = 0;
////	scanf("%d", &a);
////	switch (a)
////	{
////	case 1:
////	case 2:
////	case 3:
////	case 4:
////	case 5:
////		printf("weekday\n");
////		break;
////	case 6:
////	case 7:
////		printf("weekend\n");
////      break;
////  default:
////      printf("�������\n");
////      break;
////	}
////	return 0;
////}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//	default:
//		break;
//	}
//	printf("m= %d,n = %d", m, n);
//	return 0;
//}
int main()
{
	int i = 1;
	while (i)
	{
		if(i<=3000)
		   printf("%d\n", i);
		   i++;
	}
	return 0;
}