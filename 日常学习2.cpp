#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		//if (i == 5)
//		//	break;
//		//if (i == 5)
//		//	continue;
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		//i++;
//		//if (i == 6)
//		//	continue;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}