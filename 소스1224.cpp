//#include<stdio.h>
//
//int main()
//{
//	printf("�ȳ��ϼ���");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n�ȳ��ϼ���\n�ȳ��ϼ���\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���\n");
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("��� %d��\n", apple);
//	return 0;
//}

//

//
//#include<stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("Ű���� %d��\n", keyboard);
//	printf("���콺 %d��\n", mouse);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d =%d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}


//#include<stdio.h>
//	int main()
//{
//		char A;
//		A = 'A';
//		printf("A = %c\n", A);
//		return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f..\n", pi, e);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int r = 5;
//	float pi = 3.14;
//	float rrpi = r * r * pi;
//	float r2pi=(r + r) * pi;
//
//
//
//	printf("���ǳ���: %.1f, ���� �ѷ�: %.1f", rrpi, r2pi);
//	return 0;
//}
	
//#include<stdio.h>
//int main()
//{
//	int und = 3;
//	int up = 5;
//	int hei = 7;
//	float se = (und+up)*hei/2 ;
//	
//	printf("(%d+%d)*%d/2 = %.1f", und, up, hei, se);
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� :");
//	scanf_s("%d", &k);
//	printf("�Է��� ���ڴ� :%d\n", k);
//	return 0;
//
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� :");
//	scanf("%d %d", &y, &x);
//	printf("�� ���� ���� %d �Դϴ�.\n", y + x);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �ΰ� �Է� :");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("�������� : %c%c%c\n", a, b, c);
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int r;
//	float pi = 3.14;
//	
//	
//	printf("������ ���� �Է��ϼ��� :");
//	scanf_s("%d", &r);
//	float cL = r * 2 * pi;
//	printf("%.2f", cL);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float W1;
//	float W2;
//	float H;
//	printf("�غ��� ���̸� �Է��Ͻÿ� :");
//	scanf("%f", &W1);
//	printf("������ ���̸� �Է��Ͻÿ� :");
//	scanf("%f", &W2);
//	printf("������ ���̸� �Է��Ͻÿ� :");
//	scanf("%f", &H);
//
//	float S = (W1 + W2) * H / 2;
//	printf("���� : %.1f", S);
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("2���� ������ �Է��Ͻÿ� :");
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d=1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d=5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d=4%%2\n", third);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 % number2);
//	printf("%d%%%d\n", number1, number2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d=1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d=2%%3\n", second);
//	int thrid = 3 % 3;
//	printf("%d=3%%3\n", thrid);
//	int fourth = 4 % 3;
//	printf("%d=4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d=5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d=6%%3\n", sixth);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("���ڸ� �Է��Ͻÿ� :");
//	scanf("%d", &a);
//	int b = a % 50;
//	printf("%d", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d=6/3\n", data1);
//	int data2 = 6 / 3;
//	printf("%d=6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d=6/4", data3);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int coin;
//	printf("���� �Է����ּ���.(��)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 50000;
//	int coin1000 = coin / 1000;
//	printf("������ %d��,", coin10000);
//	printf("��õ���� % d��", coin5000);
//	printf("õ���� %d��,", coin1000);
//	printf("�������� �����Դϴ�.");
//	return 0;
//
//
//}

//#include<stdio.h>
//int main()
//{
//	int jelly;
//	printf("õ�������� ���������Է�:\n");
//	scanf("%d", &jelly);
//	int mon = 1000 - jelly;
//	int mon500 = mon / 500;
//	mon = mon % 500;
//	int mon100 = mon / 100;
//	mon = mon % 100;
//	int mon50 = mon / 50;
//	mon = mon % 50;
//	int mon10 = mon / 10;
//	printf("500�� %d��\n", mon500);
//	printf("100�� %d��\n", mon100);
//	printf("50�� %d��\n", mon50);
//	printf("10�� %d��\n", mon10);
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("ù���� : %d\n", randInt);
//	printf("�ٿ���� :%d", nextInt);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("ù����: %d\n", randInt);//0,9
//	printf("��������: %d\n", nextInt);//50,59
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("�� �ָӴϿ� �ִ� ����");
//	int myMoney = (rand() % 10 + 1) * 1000;// >>> 1000,10000
//	printf("%d���̴�.\n", myMoney);
//	int coin500 = rand() % 4 * 500;// >>>>0,1500
//	int coin100 = rand() % 5000;//0,4999
//	coin100 = coin100 / 100 * 100;// >>>>>0,4900
//	printf("�׸��� ������ ������");
//	printf("%d���̴�.", coin500 + coin100);
//	printf("\n���� ���ڸ� �� �� ������?");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple�� 15�� �ֽ��ϴ�.\n");
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple�� 17�����ƴմϴ�.\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple�� 7������ �����ϴ�.\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple�� 20������ �����ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple =15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple�� 10���ֽ��ϴ�.\n");
//
//	}
//	else if (apple == 0)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple�� �ϳ��� �����ϴ�.\n");
//
//	}
//	else
//	{
//		printf("apple�� 0���� �ƴմϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("������ �Է��Ͻÿ� :");
//	scanf("%d", &a);
//	if (a > 0)
//		printf("����Դϴ�.");
//	else if (a < 0)
//		printf("�����Դϴ�.");
//	else
//		printf("0�Դϴ�.");
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("����� �Է��Ͻÿ�.");
//	scanf("%d", &a);
//	if (a >= 10 && a <= 99)
//	{
//		printf("�� �ڸ� �����Դϴ�.");
//
//	}
//	else
//	{
//		printf("�� �ڸ� ���ڰ� �ƴմϴ�.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150�̻��Դϴ�.\n");
//
//	}
//	if (height > 160)
//	{
//		printf("Ű�� 160 �̻��Դϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("Ű�� 150�̻��Դϴ�.\n");
//	}
//	else if (height > 160)
//	{
//		printf("Ű�� 160�̻��Դϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("���̸� �Է��Ͻÿ�.");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("��ü �������Դϴ�.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12�� �������Դϴ�.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15�� �������Դϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("�������� �Է��Ͻÿ� :");
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("�빮���Դϴ�.");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("�ҹ����Դϴ�.");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int number, answer;
	scanf("%d %d", &number, &answer);
	if (number > answer)
	{
		printf("����1�� ����2����Ů�ϴ�.\n");
	}
}