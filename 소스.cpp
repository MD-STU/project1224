//#define _CRT_SECURE_NO_WARNIGS
//#include<stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("���� �� �� �Է�(���߷���0�� �Է�) :");
//		scanf_s("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//		printf("%d + %d = %d\n", a, b, a + b);
//
//	}
//	printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.\n");
//}

//#include<stdio.h>
//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//
//		hap += i;
//	}
//	printf("1~100������ ��(3�� ��� ����): %d\n", hap);
//}
//
//#include<stdio.h>
//int main()
//{
//	char ch;
//	char* p;
//	char* q;
//	
//	ch = 'A';
//	p = &ch;
//	q = p;
//
//	*p = 'Z';
//	printf("ch�� ������ �ִ°�: ch ==> %c \n\n", ch);
//
//}

//#include<stdio.h>
//int main() {
//	char s[8] = "Basic-C";
//	char* p;
//
//	p = s;
//	printf("&s[3]==>%s\n", &s[3]);
//	printf("*(p+3)==> %c\n", *(p + 3));
//
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{	
//		for (int k = 0; k < 5 - i; k++) { printf(" "); }
//		for (int j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int floor;
	printf("������ �Ƕ�̵带 ���� ���Դϱ�?");
	scanf_s("%d", &floor);
	
	for(int i=1;i<=floor;i++)
	{
		for(int j=1;j<=floor-i;j++)
		{printf(" ");}
		for (int s = 1; s <= (i-1)*2+1; s++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	srand(time(NULL));
//	int i = rand() % 100;
//	int answer;
//	printf("����:%d\n", i);
//	printf("0~99������ ���� �Է��Ͻÿ�.\n");
//	
//	do {
//		scanf("%d", &answer);
//
//		if (answer > i) {
//			printf("�ٿ�\n");
//		}
//		else if (answer < i) {
//			printf("��\n");
//		}
//	} while (answer != i);
//
//	printf("�����Դϴ�.");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void fail();
//void success();
//int getRandomNumber(int level);
//void showQuestion(int i, int num1, int num2);
//int main()
//{
//	srand(time(NULL));
//	int count = 0;
//	int answer = 0;
//	for(int i = 1; i <= 5; i++)
//	{
//		int num1 = getRandomNumber(i);
//		int num2 = getRandomNumber(i);
//		showQuestion(i,num1,num2);
//		scanf_s("%d", &answer);
//		if (answer == num1 * num2)
//		{
//			success();
//			count++;
//		}
//		else
//		{
//			fail();
//		}
//		
//	}
//	return 0;
//}
//
//
//void fail()
//{
//	printf("�����Դϴ�.");
//}
//void success()
//{
//	printf("\n�����Դϴ�\n");
//}
