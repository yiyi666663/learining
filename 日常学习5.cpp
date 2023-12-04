#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	int i, k;
//	for (i = 0, k = 0; k = 4; k++, i++)
//	{
//		printf("%d", k);
//		k++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
int main()
{
	int n = 0;
	int N = 1;
	int s = 1;
	scanf("%d", &n);
	while (s<=n)
	{
		N = N*s;
		s++;
	}
	printf("%d", N);
	return 0;
}