#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int Menu()
//{
//	printf("====================\n");
//	printf("��ӭ��������������Ϸ!\n");
//	printf("====================\n");
//	printf("����1��ʼ,����0����.\n");
//	printf("====================\n");
//	int choice = 0;
//	scanf("%d",& choice);
//	return choice;
//}
//void game(){
//	//����һ������
//	int b = rand() % 100 + 1;
//	while (1){
//		//��ʾ��Ϸ��ʼ
//		printf("��Ϸ��ʼ,����������(1-100)");
//		int a = 0;
//		scanf("%d", &a);
//		//��������С
//		if (a < b){
//			printf("����");
//		}
//		else if (a>b){
//			printf("����");
//		}
//		else{
//			printf("��ϲ��,�¶���!");
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
			printf("������������!\n");
		}
	}*/
	//int arr[] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//������ߵ����������ұߵ�����Ϊ��ʼ��,��ʼ�۰�
	//int left= 0;
	/*int right = sizeof(arr)/sizeof(arr[0])-1;
	printf("��������Ҫ���ҵ�����\n");
	int d = 0;
	scanf("%d", &d);*/
	//С�ڽ��м�ֵ��Ϊ�����,���ڻ����ұ�,��������±�
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
	/*printf("����������;\n");
	int key = 0;
	for (int i = 1; i < 4; i++){
		scanf("%d", &key);
		if (key == 88888888){
			printf("��½�ɹ�!");
		}
		else{
			printf("��¼ʧ��,�㻹��%d�λ���\n", 3 - i);
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