#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int ret = 0;
//	//int a = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", &password);
//	printf("请确认(Y/N)");
//	//printf("%d\n", a);
//	while ((ch = getchar()) != '\n');
//	{
//		;
//	}
//	//a = getchar();
//	ret = getchar();
//	if (ret == 'Y')
//	{
//
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	int i = 10;
//	while((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		continue;
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a != 10)
//	{
//		printf("%d",a);
//      a++;
//
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	for (i = 1; i < 11; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}