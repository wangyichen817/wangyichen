#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int Menu()
//{
//	printf("====================\n");
//	printf("欢迎了来到猜数字游戏!\n");
//	printf("====================\n");
//	printf("输入1开始,输入0结束.\n");
//	printf("====================\n");
//	int choice = 0;
//	scanf("%d",& choice);
//	return choice;
//}
//void game(){
//	//生成一个整数
//	int b = rand() % 100 + 1;
//	while (1){
//		//提示游戏开始
//		printf("游戏开始,请输入数字(1-100)");
//		int a = 0;
//		scanf("%d", &a);
//		//报告结果大小
//		if (a < b){
//			printf("低了");
//		}
//		else if (a>b){
//			printf("高了");
//		}
//		else{
//			printf("恭喜你,猜对了!");
//			break;
//		}
//	}
//}
int main()
{
	/*srand(time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		else{
			printf("您的输入有误!\n");
		}
	}*/
	//int arr[] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//以最左边的数字与最右边的数字为起始点,开始折半
	//int left= 0;
	/*int right = sizeof(arr)/sizeof(arr[0])-1;
	printf("请输入想要查找的数字\n");
	int d = 0;
	scanf("%d", &d);*/
	//小于将中间值换为最左边,大于换最右边,等于输出下标
	/*while (left<=right){
		int c = (left + right) / 2;
		if (arr[c] > d){
			right = c-1;
		}
		else if (arr[c] < d){
			left = c+1;
		}
		else{
			printf("%d\n", c);
			break;
		}
	}
	int c = (left + right) / 2;
	if (d != arr[c]){
		printf("%d\n", -1);
	}*/
	/*printf("请输入密码;\n");
	int key = 0;
	for (int i = 1; i < 4; i++){
		scanf("%d", &key);
		if (key == 88888888){
			printf("登陆成功!");
		}
		else{
			printf("登录失败,你还有%d次机会\n", 3 - i);
		}
	}*/
	
	char x=0;
	while (1){
		scanf("%c", x);
		if (x >= 'A'&& x <= 'Z'){
			printf("%c", x+32);
		}
		else if (x >= 'a'&&x <= 'z'){
			printf("%c", x-32);
		}
		else{
			break;
		}
		printf("/n");
	}
		return 0;
		system("pause");
}