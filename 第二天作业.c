//�Ƚϴ�С
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c,t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		t = a; a = b; b = t;
//	}
//	if (a < c)
//	{
//		t = a; a = c; c = t;
//	}
//	if (b < c)
//	{
//		t = b; b = c; c = t;
//	}
//	printf("%d%d%d", a, b, c);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//����10������
//	//�õ�һ����ڶ����Ƚ�,�������ֵ,�Դ�����
//	//������ֵ
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		if (arr[a] < arr[a + 1])
//		{
//			int c;
//			c = arr[a];
//			arr[a] = arr[a + 1];
//			arr[a + 1] = c;
//			break;
//		}
//		/*printf("%d\n", arr[a]);*/
//	}
//	for (a = 0; a < 10; a++)
//		printf("%d\n", arr[a]);
//	system("pause");
//	return 0;
//}
//����ֵ
//#define_CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a,b;
//	printf("������������\n");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//	}else
//	{
//		b = a + b;
//		a = b - a;
//	}
//		printf("%d\n%d\n", a, b);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
// {
//	int a = 0; int b = 0;int max=0;
//	scanf("%d%d", &a, &b);
//	int c = a < b ? a : b;
//	int i;
//	for (i = 2; i <= c; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			max = i;
//		}
//		/*printf("%d\n", max);*/
//	}
//	printf("%d\n", max);
//	system("pause");
//	return 0;
// }
