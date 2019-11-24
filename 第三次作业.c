//交换数组
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int b[5] = {5,6,7,8,9};
//	int tmp,i;
//	for (i = 0; a < 5; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", b[i]);
//	}
//	system("pause");
//	return 0;
//}
//分数加法
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0,c=-1;
//	double b=0,max=1;
//	for (a = 1; a< 101; a++)
//	{
//		max *= c*1.0 / a;
//		c *= -1;
//		b += max;
//	}
//	printf("%lf", b);
//	system("pause");
//	return 0;
//}
//查找9
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=0,b=0,d=0;
	for (int c = 1; c < 101; c++)
	{
		if (c/10 ==9)
		{
			d++;
		}
		else if (c%10== 9)
		{
			d++;
		}
		if (c / 10 == 9 && c % 10 == 9)
		{
			d++;
		}
	}
		printf("%d\n", d);
	system("pause");
	return 0;
}