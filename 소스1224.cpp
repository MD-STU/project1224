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
//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2����Ů�ϴ�.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("����2�� ����1���� Ů�ϴ�.\n");
//		}
//		else
//		{
//			printf("����1�� ����2�� �����ϴ�.\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("����1�� ����2���� Ů�ϴ�.\n");
//
//	}
//	else if (number < answer)
//	{
//		printf("���� 2�� ����1���� Ů�ϴ�.\n");
//	}
//	else
//	{
//		printf("����1�� ����2�� �����ϴ�.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
//	printf("%d\n", 111 + 222);
//	printf("111+222\n");
//	printf("f111");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0x41, b = 0x61;
//	int tol;
//	tol = b - a;
//
//	printf("%c�� �ҹ��ڷ� ǥ���ϸ�%c�̸�\n", 'K', 'K'+tol);
//	printf("%c�� �빮�ڷ� �˽��ϸ�%c�̸�\n", 'z', 'z' - tol);
//}
//#include<stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("������ A����Դϴ�.\n");
//	}
//	else if (score > 80)
//	{
//		printf("������ B�Դϴ�.\n");
//	}
//	else if (score > 70)
//	{
//		printf("������ C����Դϴ�.\n");
//
//	}
//	else if (score > 60)
//	{
//		printf("������ D����Դϴ�.\n");
//	}
//	else
//	{
//		printf("������ F����Դϴ�.\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number�� ����Դϴ�.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number�� �����Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� 0�Դϴ�.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number�� ¦���Դϴ�.\n");
//	}
//	else
//	{
//		printf("number�� Ȧ���Դϴ�.\n");
//	}
//	return 0;
//}
//
// 
// 
// 
//#include<stdio.h>
//int main()
//{
//	printf("key�� �Է��Ͻÿ�:");
//	char key;
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("\'�� ����Ű�� �Է��ϼ̽��ϴ�.\'\n");
//	}
//	else if (key == 0x73)
//	{
//		printf("\'�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.\'\n");
//	}
//	else if(key == 0x61)
//	{
//		printf("\'�� ����Ű�� �Է��ϼ̽��ϴ�.\'\n");
//	}
//	else if (key == 0x64)
//	{
//		printf("\'�� ����Ű�� �Է��ϼ̽��ϴ�.");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("0~100������ ������ �Է��Ͻÿ�:");
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge <= 55 && gauge >= 45)
//	{
//		printf("\'Perfect\'\n");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("\'Excellent\'\n");
//	}
//	else
//	{
//		printf("\'good\'");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input�� 3�� ����Դϴ�.\n");
//		if (input % 6 == 0)
//		{
//			printf("input�� 6�� ����Դϴ�.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input�� 9�� ����Դϴ�.\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command ='i';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("������â ����\n");
//	case 'm':
//		printf("����â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command) {
//	case 'i':printf("������â ����\n");
//	case 'm':printf("����â ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	char command;
//	printf("command�� �Է��Ͻÿ�:\n");
//	scanf("%c", &command);
//	switch (command) {
//	case 'i':printf("������â ����\n");
//		break;
//	case 'm':printf("����â ����\n");
//		break;
//	default: printf("������ ����� �����ϴ�\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	switch (number) {
//	case 1:printf("one\n"); break;
//	case 2:printf("two\n"); break;
//	case 3:printf("three\n"); break;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("�ΰ��� ������ �Է��Ͻÿ� :");
//	int input1, input2;
//	scanf("%d %d", &input1, &input2);
//	char oper;
//	printf("������ �����ڷ� �Է��Ͻÿ�:");
//	scanf(" %c", &oper);
//	switch (oper) {
//	case '+':printf("%d", input1 + input2); break;
//	case '-':printf("%d", input1 - input2); break;
//	case '*':printf("%d", input1 * input2); break;
//	case'/':printf("%d", input1 / input2); break;
//	case'%':printf("%d", input1 % input2); break;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int month;
//	printf("���ϴ� ���� �Է��Ͻÿ�:");
//	scanf("%d", &month);
//	switch (month) {
//	case 1:printf("1>January"); break;
//	case 2:printf("2>February"); break;
//	case 3:printf("3>March"); break;
//	case 4:printf("4>April"); break;
//	case 5:printf("5>May"); break;
//	case 6:printf("6>June"); break;
//	case 7:printf("7>July"); break;
//	case 8:printf("8>August"); break;
//	case 9:printf("9>September"); break;
//	case 10:printf("10>October"); break;
//	case 11:printf("11>November"); break;
//	case 12:printf("12>December"); break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char command;
//	printf("<,a ���� �̵�\n");
//	printf(">,d ������ �̵�\n");
//	scanf("%c", &command);
//	switch (command) {
//	case '<':case'a':
//		printf("�������� �̵��մϴ�.");
//		break;
//	case '>':case'd':
//		printf("���������� �̵��մϴ�.");
//		break;
//	}return 0;
//}
//// 
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("�޴��� �����ϼ���.");
//	printf("1.�� ���� 2.�̾��ϱ� 3.�ɼ�\n");
//	scanf("%d", &input);
//	const int Option = 3;
//	switch (input) {
//	case 1:
//		printf("�� ���� ����\n");
//		break;
//	case 2:
//		printf("���̺� ������ �ε�\n");
//		break;
// 
//	case Option:
//		printf("�ɼǼ���\n");
//		break;
//	default:printf("������ ����� �����ϴ�.\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("0~9 ������ ���ڸ� �Է��Ͻÿ� :");
//	int number;
//	scanf("%d", &number);
//	
//	switch (number) {
//	case 3: case 6:case 9:
//		printf("¦");
//		break;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command) {
//	case 'x':printf("���ĺ� x �Է�.\n");
//		break;
//
//	case 'X':printf("����ǥ �Է�.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.���ϱ� 2.����\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: {
//		int number1, number2;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",
//			number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("���� �ΰ��� �Է��ϼ���.\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n",
//			number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char input;
//	printf("����Ű�� �Է��Ͻÿ�: ");
//	scanf(" %c", &input);
//	switch (input) {
//	case 'w':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 's':
//		printf("�Ʒ� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case'a':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	case 'd':
//		printf("�� ����Ű�� �Է��ϼ̽��ϴ�.");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	printf("������ �ֹ��Ͻʽÿ�:");
//	printf("appetizer:1.�ɺ�� 2.������ 3.Ǫ�Ʊ׶�");
//	int appe;
//	scanf("%d", &appe);
//	switch (appe) {
//	case 1: {
//		int main;
//		printf("mainDish:1.������ũ 2.�����丮3.�簥��\n");
//		scanf("%d", &main);
//		switch (main) 
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ �ɺ�� ������ũ ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ �ɺ�� ������ũ ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ �ɺ�� ������ũ ���ݸ������Դϴ�.");
//				break;
//			}
//			}
//		case 2: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �����丮 ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �����丮 ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �����丮 ���ݸ������Դϴ�.");
//				break;
//			}
//			
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �簥�� ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �簥�� ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ �ɺ�� �簥�� ���ݸ������Դϴ�.");
//				break;
//			}
//		}
//		}
//
//	}
//	case 2: {
//		int main;
//		printf("mainDish:1.������ũ 2.�����丮3.�簥��\n");
//		scanf("%d", &main);
//		switch (main)
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ ������ ������ũ ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ ������ ������ũ ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ ������ ������ũ ���ݸ������Դϴ�.");
//				break;
//			}
//		}
//		case 2: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ ������ �����丮 ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ ������ �����丮 ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ ������ �����丮 ���ݸ������Դϴ�.");
//				break;
//			}
//
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ ������ �簥�� ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ ������ �簥�� ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ ������ �簥�� ���ݸ������Դϴ�.");
//				break;
//			}
//		}
//	}
//	}
//	case 3: {
//		int main;
//		printf("mainDish:1.������ũ 2.�����丮3.�簥��\n");
//		scanf("%d", &main);
//		switch (main)
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� ������ũ ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� ������ũ ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� ������ũ ���ݸ������Դϴ�.");
//				break;
//			}
//		}
//		case 2: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �����丮 ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �����丮 ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �����丮 ���ݸ������Դϴ�.");
//				break;
//			}
//
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �簥�� ���� �Դϴ�. ");
//				break;
//			case 2:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �簥�� ���̽�ũ���Դϴ�.");
//				break;
//			case 3:
//				printf("�ֹ��Ͻ� ������ Ǫ�Ʊ׶� �簥�� ���ݸ������Դϴ�.");
//				break;
//			}
//		}
//	}
//
//	}
// �Ʊ��ϱ� ���ܵӴϴ�. ��� ����� ���� ������ ��.



//#include<stdio.h>
//int main() {
//	printf("appetizer 1.ĳ��� 2.������ 3.Ǫ�Ʊ׶�\n");
//	int appe;
//	
//	printf("mainDish 1.������ũ.�����丮 3.�簥��\n");
//	int mainD;
//	
//	printf("dessert 1.���� 2.���̽�ũ�� 3.���ݸ�����\n");
//	int deesr;
//	scanf("%d %d %d",&appe,&mainD, &deesr);
//	switch (appe)
//	{
//	case 1: printf("������ �ɺ��,");
//		break;
//	case 2: printf("������ ������,");
//		break;
//	case 3: printf("������ Ǫ�Ʊ׶�,");
//		break;
//	}
//	switch (mainD)
//	{
//	case 1: printf(" ������ũ,");
//		break;
//	case 2: printf(" �����丮,");
//		break;
//	case 3: printf(" �簥��,");
//		break;
//	}
//	switch (deesr)
//	{
//	case 1:printf("�ɟ��Դϴ�.");
//		break;
//	case 2:printf("���̽�ũ���Դϴ�.");
//		break;
//	case 3:printf("���ݸ������Դϴ�.");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		
//		printf("%3d", i);
//		if (i >= 70 && i < 80)
//		{
//			i++;	continue;
//		}
//		printf("(%02x) ", i);
//		if (i % 10 == 9)
//			printf("\n");
//		if (i == 93)
//			break;
//		i++;
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	while (0)
//	{
//		printf("������ ���ϰ�� �ݺ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("������ ���ϰ�� �ݺ����\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count = 0;
//	while (count < 3)
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 3���� �������� �ݺ�\n");
//		count++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("���� count : %d\n", count);
//		printf("count�� 0���� ū ���� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	
//	int count = 0;
//	while (count < 6) 
//	{
//		printf("C\n");
//		count++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int nu = -10;
//	while (nu<=0)
//	{
//		printf("%d\n", nu);
//		nu++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//	int nu = 5;
//	while (nu <= 100)
//	{
//		printf("%d\n", nu);
//		nu += 5;
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//			break;
//		printf("���� count : %d\n", count);
//		printf("count�� 0�� �ƴϸ� �ݺ�\n");
//		count--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("���ĺ��� �Է����ּ���(�ٸ����� �Է½� �ٽ��Է�) :");
//		scanf(" %c", &alphabet);
//		if(alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("�ҹ��ڸ� �Է��ϼ̽��ϴ�\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("�빮�ڸ� �Է��ϼ̽��ϴ�.\n");
//		}
//		else { continue; }
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1) {
//		printf("����� �Է����ּ���(0�Է½� ����) :");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1) {
//		multi = multi * number;
//		if (multi >= 50000) {
//			printf("%d", number);
//			break;
//		}
//		number++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alpha = 'A';
//	while (alpha <= 'Z') {
//		if (alpha != 'F') {
//			printf("%c ", alpha);
//		}
//		alpha++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int plus = 0;
//	int number;
//	printf("����Ų��� ����\n");
//	printf("1~3������ ���ڸ� �Է��Ͻÿ�:\n");
//	int turn = 0;
//	while (1) {
//		printf("%c: ", 'A' + turn);
//		scanf("%d", &number);
//		if (number > 3 || number < 1) {
//			printf("���ڸ� �ٽ� �Է��Ͻÿ�.\n");
//			continue;
//		}
//
//		plus = plus + number;
//		printf("=> %d\n", plus);
//
//		if (plus >= 31) break;
//		
//		turn = !turn;
//		//turn = ++turn % 26;
//	}
//	printf("%c�й�\n", 'A' + turn);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("���� �µ� : %d��\n", temperature);
//		temperature--;
//
//	} while (temperature > 28);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	enum{GAMEOVER, NEWGAME, LOADGAME,OPTION};
//	do {
//		printf("\n�޴��� �����ϼ���.\n");
//		printf("1.�� ���� 2. �̾��ϱ� 3.�ɼ� (0:��������)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("�� ���� ����\n");
//			break;
//		case LOADGAME:
//			printf("���̺� ������ �ε�\n");
//			break;
//		case OPTION:
//			printf("�ɼ� ����\n");
//			break;
//
//		}
//		
//		
//	} while (input != GAMEOVER);
//	printf("������ �����մϴ�.\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n�޴��� �����ϼ��� :\n");
//		printf("1.�α��� 2.ȸ������.3�ɼ� 4.��������\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case 1:
//			printf("�α��� ����\n");
//			break;
//		case 2:
//			printf("ȸ������ ����\n");
//			break;
//		case 3:
//			printf("�ɼ����� �̵��մϴ�.\n");
//			break;
//		case 4:
//			printf("���� ����� : �δ���\n");
//			break;
//		}
//	} while (select <= 4 && select >=1);
//	printf("����ƽ��ϴ�.");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int read = 0;
//	int football = 0;
//
//	do {
//		printf("\n%d��° ��!\n", ++day);
//		printf("������ �� �ұ��?\n");
//		printf("1.�ڵ������Ѵ�. 2.å�� �д´�. 3.�౸�� �Ѵ�.\n");
//		printf("�׿�. ������.\n >>");
//		scanf("%d", &command);
//
//
//		if (command == 1) {
//
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("�⺻�� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//			case 5:
//				printf("�п����� ");
//			}
//			printf("�ڵ������մϴ�.\n");
//			study++;
//		}
//		else if (command == 2) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("�⺻�� ���׿�.\n");
//			case 3:
//				printf("���������� ");
//				break;
//			case 2:
//				printf("����� ������.\n");
//			case 4:
//				printf("ī�信�� ");
//			case 5:
//				printf("������ ");
//			}
//			printf("å�� �н��ϴ�.\n");
//			read++;
//		}
//		else if (command == 3) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("�⺻�� ���׿�.\n");
//			case 3:
//				printf("���Ϳ��� ");
//				break;
//			case 2:
//				printf("������ ���Ŀ�.\n");
//			case 4:
//				printf("�б����� ");
//				break;
//			case 5:
//				printf("���翡�� ");
//			}
//			printf("�౸�� �մϴ�.\n");
//			football++;
//		}
//		else break;
//	} while (1);
//
//
//	if (day <= 3) {
//		printf("�״�� �Դϴ�...\n");
//	}
//
//	else if (study > read && study > football) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("FrontEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("BackEnd �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//
//		default:
//			printf("�ý��� �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		}
//
//	}
//	else if (read > study && read > football) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("������ ��̰� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���мҳ��� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("�缭�� �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("���� ��ȹ�簡 �Ǿ����ϴ�!\n");
//			break;
//
//		default:
//			printf("���������� �Ǿ����ϴ�!\n");
//			break;
//		}
//	}
//	else if (football > study && football > read) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�����౸ ������ �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("������ Ʈ���̳ʰ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("������ �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("��ġ�� �Ǿ����ϴ�!\n");
//			break;
//
//		default:
//			printf("������ǥ�� �Ǿ����ϴ�!\n");
//			break;
//		}
//	}
//		return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++) {
//		printf("��%d����\n");
//	}
//	printf("������!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++) {
//		printf("��%d����\n", sheep);
//		if (sheep == 3) {
//			printf("���߿� ������!\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++) {
//		if (sheep == 3) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		printf("��%d����\n",sheep);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("�� %d����\n", sheep);
//	}
//	printf("��!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep%10==0) {
//			printf("���Ƽ� ���� ���� ���ߴ�!\n");
//			continue;
//		}
//		if (sheep == 45)
//		{
//			printf("������!\n");
//			break;
//		}
//		printf("��%d����\n",sheep);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++) {
//		printf("���� %d\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++) {
//		printf("���� %d\n", round);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++) {
//		printf("����Ʈ %d��\n",count);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++) {
//		sum_number = sum_number + number;
//	}
//	printf("���� %d\n", sum_number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("�ݺ��� Ƚ���� �Է��ϼ���:");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("�߾�");
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num;
//	for (num = 10; num < 100; num++) {
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num1;
//	int num2 = 1;
//	for (num1 = 3; num1 < 9; num1++) {
//		num2 = num1 * num2;
//	}
//	printf("��� ���� ���� == %d\n", num2);
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	int num1;
//	int num10;
//	for (number = 1; number <= 50; number++) {
//		
//		num10 = number / 10;
//		num1 = number % 10;
//		if ((num10 % 3 == 0 && num10) || (num1%3 == 0 && num1)) {
//			printf("%d\n", number);
//			
//		}
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("100������ �������� ����մϴ�\n");
//	for (number = 1; (number * number) <= 100; number++)
//		printf("%d\n", number * number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("100���� 7�� ����� ����մϴ�\n");
//	for (number = 7; number <= 100; number += 7) {
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf("%c", & input);
//		switch (input)
//		{
//		case's':
//			printf("START GAME\n");
//			break;
//		case'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1���� 10���� ���� �� ���:");
//	for (number = 10, exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//		//�ʱ�ȭ�� �����Ŀ� ���� ���� �ڵ尡 �� ���ִ�
//		//���ǽĿ� ���� �ϳ��� ���� 0�̵ɶ� �ݺ��� �����.
//		//{}�ȿ� �ڵ尡 ��� ���ǹ��� �������� ����ȴ�.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("1���� 10���� ���� �� ���:");
//	for (int number = 10, int exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--) {
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}
// 
// 
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i <= 200; i++) {
//		if (i %11 == 0) {
//			printf("%d\n", i);
//		}
//		
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float sqLine;
//	float Perimeter;
//	
//	for (sqLine = 0.1f; sqLine * 4 <= 21; sqLine+=0.1) {
//		
//		printf("%.1f\n", sqLine *);
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("1�� 1��\n");
//	printf("1�� 2��\n");
//	printf("1�� 3��\n");
//	printf("2�� 1��\n");
//	printf("2�� 2��\n");
//	printf("2�� 3��\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	myClass++; student = 1;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//	printf("%d�� %d��\n", myClass, student); student++;
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass; 
//	int student;
//	for(myClass = 1;)
//}
//
//#include<stdio.h>
//int main()
//{
//	int input1, input2;
//	int i = 1;
//	printf("���۰� ==> ");
//	scanf(" %d", &input1);
//	printf("���� ==> ");
//	scanf(" %d", &input2);
//
//	int start = input1;
//	int end = input2;
//
//	if (start > end) {
//		start = input2;
//		end = input1;
//	}
//
//	while (start <= end)
//	{
//		if (end % 2 != 0)
//		{
//			printf("%d\n", start);
//		}
//		start += 1;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ten = 1;
//	int input1;
//	printf("���ڸ� ���� �� �Է� :");
//	scanf("%d", &input1);
//	int copy_num = input1;
//	while (copy_num) {
//		copy_num /= 10;
//		ten *= 10;
//	}
//	ten /= 10;
//
//	printf("%d�� �ڸ���\n", ten);
//
//	/*while (ten) {
//		int a = input1 / ten;
//		printf("%d\n", a);
//		input1 = input1 % ten;
//		ten /= 10;
//		
//	}*/
//
//	while (ten) {
//		int a = input1 / ten;
//		while (a > 0) {
//			printf("\u2665\u2665");
//			a--;
//		}
//		printf("\n");
//		input1 = input1 % ten;
//		ten /= 10;
//
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	int myClass =1; 
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d��\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d�� %d�� \n", myClass, student);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <=  2; myClass++) {
//		
//		for (student = 1; student <= 3; student++) {
//			printf("%d�� %d��\n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for(student = 1; student<=30;student++)
//				printf("%d�г� %d�� %d��\n", grade, myClass, student);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	int result ;
//	for (num1 = 2; num1 <= 9; num1++) {
//		for (num2 = 1; num2 <= 9; num2++) {
//			int result = num1 * num2;
//			printf("%d X %d = %d\n\n", num1, num2, result);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	int result;
//	for (num1 = 2; num1 <= 9; num1++) {
//			if (num1 == 3)
//				continue;
//		for (num2 = 1; num2 <= 9; num2++) {
//			int result = num1 * num2;
//			printf("%d x %d = %d\n\n", num1, num2, result);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	
//	int i;
//	int j ;
//	for (i = 1; i <= 4; i++) {
//		for (j = 1; j <= 6; j++)
//		{
//			printf("4�� - %d, 6�� - %d\n", i, j);
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		printf("%d��° ���� �ݺ��� ���� \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("���� �ݺ��� %d �� �ݺ�\n", inter);
//		}
//		printf("%d��° ���� �ݺ��� Ż��\n\n", outer);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter = 0; inter < 5; inter++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0 ;
//}
//#include<stdio.h>
//int main()
//{
//	int outer, inter1,inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++) {
//		for (inter1 = 0; inter1 < 5 - outer; inter1++) {
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int inter;
//	int outer;
//	for (outer = 4; outer > 0; outer--) {
//		for (inter = outer; inter > 0; inter--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	1/*printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");*/
//
//	2/*for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");*/
//
//	3/*int y = 1;
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y++;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y++;
//
//	for (int x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y++;*/
//
//	4/*int y = 1;
//	for(;y<=3;)
//	{
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y++;
//	}*/
//
//	
//	5/*for (int y = 1; y <= 3;y++)
//	{
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}*/
//
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y++)
//	{
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
////}
//#include<stdio.h>
//int main()
//{
//	/*printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");*/
//
//	/*for (int i = 4; i >= 1; i--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int i = 3; i >= 1; i--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int i = 2; i >= 1; i--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int i = 1; i >= 1; i--) {
//		printf("*");
//	}
//	printf("\n");*/
//
//	/*int x;
//	int y = 4;
//	for (x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//
//	for (x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//
//	for (x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;
//
//	for (x = 1; x <= y; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y--;*/
//
//	/*int y = 4;
//	for (; y > 0;) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y--;
//	}*/
//	
//	
//	/*for (int y = 4; y > 0; y--) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}*/
//	int line;
//	scanf("%d", &line);
//	for (int y = line; y >0; y--) {
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	/*printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");*/
//
//	/*for (int x = 3; x > 0; x--) {
//		printf(" ");
//	}
//	for (int y = 1; y > 0; y--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 2; x > 0; x--) {
//		printf(" ");
//	}
//	for (int y = 3; y > 0; y--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x > 0; x--) {
//		printf(" ");
//	}
//	for (int y = 5; y > 0; y--) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 0; x > 0; x--) {
//		printf(" ");
//	}
//	for (int y = 7; y > 0; y--) {
//		printf("*");
//	}
//	printf("\n");*/
//
//	/*int y = 3;
//	int z = 1;
//	for (int x = y; x > 0; x--) {
//		printf(" ");
//	}
//	y--;
//	for (int x = z; x > 0; x--) {
//		printf("*");
//	}
//	z += 2;
//	printf("\n");
//	
//	for (int x = y; x > 0; x--) {
//		printf(" ");
//	}
//	y--;
//	for (int x = z; x > 0; x--) {
//		printf("*");
//	}
//	z += 2;
//	printf("\n");
//
//	for (int x = y; x > 0; x--) {
//		printf(" ");
//	}
//	y--;
//	for (int x = z; x > 0; x--) {
//		printf("*");
//	}
//	z += 2;
//	printf("\n");
//
//	for (int x = y; x > 0; x--) {
//		printf(" ");
//	}
//	y--;
//	for (int x = z; x > 0; x--) {
//		printf("*");
//	}
//	z += 2;
//	printf("\n");*/
//
//	
//	int z = 1;
//	for (int y = 3; y >= 0;y--)
//	{
//		for (int x = y; x > 0; x--) {
//			printf("_");
//		}
//
//		
//		for (int x = z; x > 0; x--) {
//			printf("*");
//		}
//		z += 2;
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	//3-1��
//	/*
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	return 0;*/
//
//	//3-2��
//	/*for (int x = 1; x <= 0; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++) {
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("*");
//	}
//	printf("\n");
//	
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("*");
//	}
//	printf("\n");*/
//	
//	//3-3��
//	/*int y1 = 0;
//	int y2 = 5;
//	for (int x = 1; x <= y1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= y2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y1 += 1;
//	y2 -= 2;
//
//	for (int x = 1; x <= y1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= y2; x++) {
//		printf("*");
//	}
//	printf("\n");
//	y1 += 1;
//	y2 -= 2;
//
//	for (int x = 1; x <= y1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= y2; x++) {
//		printf("*");
//	}
//	printf("\n");*/
//
//	/*int y1 = 0;
//	int y2 = 5;
//	for(;y1<=2;)
//	{
//		for (int x = 1; x <= y1; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= y2; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y1 += 1;
//		y2 -= 2;
//	}*/
//	//3-4��
//	
//	/*int y2 = 5;
//	for (int y1 = 0; y1 <= 2;y1++)
//	{
//		for (int x = 1; x <= y1; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= y2; x++) {
//				printf("*");
//		}
//		printf("\n");
//		
//		y2 -= 2;
//	}*/
//	//3-5��
//	
//
//	/*int LINE = 3;
//	scanf("%d", &LINE);
//
//int z = 1;
//	for (int y = LINE-1; y >= 0;y--)
//	{
//		for (int x = y; x > 0; x--) {
//			printf(" ");
//		}
//
//		
//		for (int x = z; x > 0; x--) {
//			printf("*");
//		}
//		z += 2;
//		printf("\n");
//	}
//	z -= 2;
//	int y2 = z;
//	for (int y1 = 0; y1 <= LINE-1; y1++)
//	{
//		for (int x = 1; x <= y1; x++) {
//		printf(" ");
//		}
//		for (int x = 1; x <= y2; x++) {
//		printf("*");
//		}
//		printf("\n");
//
//		y2 -= 2;
//	}*/	
//}
//	
//#include<stdio.h>
//int main()
//{
//	//4-1��
//	/*printf(" ");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("1");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("2");
//	printf("2");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("3");
//	printf("3");
//	printf("3");
//	printf("\n");
//	printf(" ");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("\n");
//	printf("5");
//	printf("5");
//	printf("5");
//	printf("5");
//	printf("5");*/
//
//	//4-2��
//	/*for (int x = 1; x <= 4; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++) {
//		printf("1");
//
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 2; x++) {
//		printf("2");
//
//	}
//	printf("\n");
//	for (int x = 1; x <= 2; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++) {
//		printf("3");
//
//	}
//	printf("\n");
//	for (int x = 1; x <= 1; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 4; x++) {
//		printf("4");
//
//	}
//	printf("\n");
//	for (int x = 1; x <= 0; x++) {
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++) {
//		printf("5");
//
//	}
//	printf("\n");*/
//
//	//4-3��
//	/*int y = 4;
//	int z = 1;
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	z++;
//	printf("\n");
//	
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	z++;
//	printf("\n");
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	z++;
//	printf("\n");
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	z++;
//	printf("\n");
//
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	z++;
//	printf("\n");
//	*/
//
//	//4-4��
//	
////int y = 4;
////
////for (int z = 1; z <= 5;z++) {
////	for (int x = 1; x <= y; x++) {
////		printf(" ");
////	}
////	y--;
////	for (int x = 1; x <= z; x++) {
////		printf("%d", z);
////	}
////	
////	printf("\n");
////}
//
////4-5��
//	/*int LINE = 5;
//	
//	scanf("%d", &LINE);
//	int y = LINE-1;
//for (int z = 1; z <= LINE;z++) {
//	for (int x = 1; x <= y; x++) {
//		printf(" ");
//	}
//	y--;
//	for (int x = 1; x <= z; x++) {
//		printf("%d", z);
//	}
//	
//	printf("\n");
//}*/
//}


//#include<stdio.h>
//int main()
//{
//	printf("������ �����մϴ�!\n");
//	printf("�ڿ� ���ڸ� �Է����ּ���.\n");
//
//
//	/*int input;
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("���� �Ѿ�ϴ�.\n");
//	printf("B:");
//	scanf("%d", &input);
//	printf("B:");
//	scanf("%d", &input);
//	printf("B:");
//	scanf("%d", &input);
//	printf("���� �Ѿ�ϴ�.\n");
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("���� �Ѿ�ϴ�.\n");*/
//
//	/*int input;
//	int y = 0;
//	for (int x = 1; x <= 3; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y%=2;
//	printf("���� �Ѿ�ϴ�.\n");
//
//	for (int x = 1; x <=3 ; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y %= 2;
//	printf("���� �Ѿ�ϴ�.\n");
//
//	for (int x = 1; x <= 3; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y %= 2;
//	printf("���� �Ѿ�ϴ�.\n");
//	*/
//
//	int input=0;
//	int player = 0;
//	int number = 1;
//	for (;;) {
//		for (int x = 1; x <= 3; x++ ) {
//			printf("%c:", 'A' + player);
//			scanf("%d", &input);
//			
//			
//
//			if (input == 0) {
//				if (x == 1) {
//					printf("���� �ѱ�� ���ؼ��� �ϳ� �̻��� ���� ���ؾ� �մϴ�.\n");
//					x--;
//					continue;
//				}
//				break;
//			}
//			
//			
//			if (number!= input) {
//				printf("�߸��� �Է��Դϴ�.\n");
//				printf("���� �Է��ؾ��ϴ� ���� %d�Դϴ�.\n", number);
//				x--;
//				continue;
//				
//			}
//			
//			number++;
//			
//			if (input == 31) {
//				break;
//			}
//		
//		
//		}
//		player = ++player%2;
//		if (input == 31) {
//			break;
//		}
//		printf("���� �Ѿ�ϴ�.\n");
//
//	}
//
//	printf("���� %c�� �̰���ϴ�!",'A'+player);
//}

//#include<stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//���� 1-1��
//#include<stdio.h>
//int main()
//{
//	float conversion = 0;
//	for (; conversion < 2;) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (double conversion = 90;
//		conversion > 0.1; conversion /= 3) {
//		if (conversion == 10.0) {
//			continue;
//		}
//		printf("%.3lf\n", conversion);
//	}
//	return 0;
//}

//���� 1-2
//#include<stdio.h>
//int main()
//{
//	double conversion = 90;
//	while (conversion > 0.1) {
//		if (conversion == 10.0) {
//			conversion /= 3; continue;}
//	
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	while (1) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n"); break;
//		}
//		return 0;
//	}
//}

//���� 1-3
//#include<stdio.h>
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("���α׷� ����\n"); break;
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int for_flag = 1;
	int number = 0;
	while (for_flag) {
		printf("number = %d\n", number);
		while (number++) {
			printf(">number = %d\n", number);
			if (number == 3) {
				for_flag = 0;
				break;
			}
		}
		number++;
		printf(">>number = %d\n", number);
	}
	printf("%d %d\n", for_flag, number);
}