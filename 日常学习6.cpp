#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 0;
//	int N = 1;
//	int n = 1;
//	int S = 0;
//	while(n<=4) 
//	{	
//	for (i = 1,N = 1; i <= n; i++)
//	{
//		N = N * i;
//	}
//		S = N + S;
//		n++;
//	}
//	printf("%d", S);
//	return 0;
//} 

//int main()
//{
//	int N = 1;
//	int n = 0;
//	int S = 0;
//	for(n = 1,N =1;n<=10;n++)
//	{
//		N = N * n;
//		S = N + S;
//	}
//	printf("%d", S);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 111;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	for (i = 0;i<sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	if (i == 10)
//		printf("无法从数组中找到该数字\n");
//	return 0;
//}
int  main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[10]);
	int k = 7;
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
		if (left > right)
			printf("无法找到");
	}
	return 0;
}