//#include<stdio.h>
//
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요\n");
//	printf("안녕하세요\n");
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//

//
//#include<stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 %d개\n", keyboard);
//	printf("마우스 %d개\n", mouse);
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
//	printf("원의넓이: %.1f, 원의 둘레: %.1f", rrpi, r2pi);
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
//	printf("원하는 숫자를 입력 :");
//	scanf_s("%d", &k);
//	printf("입력한 숫자는 :%d\n", k);
//	return 0;
//
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 :");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두개 입력 :");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문저츌력 : %c%c%c\n", a, b, c);
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
//	printf("반지름 길이 입력하세요 :");
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
//	printf("밑변의 길이를 입력하시오 :");
//	scanf("%f", &W1);
//	printf("윗변의 길이를 입력하시오 :");
//	scanf("%f", &W2);
//	printf("높이의 길이를 입력하시오 :");
//	scanf("%f", &H);
//
//	float S = (W1 + W2) * H / 2;
//	printf("넓이 : %.1f", S);
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
//	printf("2개의 변수를 입력하시오 :");
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
//	printf("숫자를 입력하시오 :");
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
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 50000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개,", coin10000);
//	printf("오천원권 % d개", coin5000);
//	printf("천원권 %d개,", coin1000);
//	printf("나머지는 동전입니다.");
//	return 0;
//
//
//}

//#include<stdio.h>
//int main()
//{
//	int jelly;
//	printf("천원이하의 젤리가격입력:\n");
//	scanf("%d", &jelly);
//	int mon = 1000 - jelly;
//	int mon500 = mon / 500;
//	mon = mon % 500;
//	int mon100 = mon / 100;
//	mon = mon % 100;
//	int mon50 = mon / 50;
//	mon = mon % 50;
//	int mon10 = mon / 10;
//	printf("500원 %d개\n", mon500);
//	printf("100원 %d개\n", mon100);
//	printf("50원 %d개\n", mon50);
//	printf("10원 %d개\n", mon10);
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다움숫자 :%d", nextInt);
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
//	printf("첫숫자: %d\n", randInt);//0,9
//	printf("다음숫자: %d\n", nextInt);//50,59
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
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;// >>> 1000,10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;// >>>>0,1500
//	int coin100 = rand() % 5000;//0,4999
//	coin100 = coin100 / 100 * 100;// >>>>>0,4900
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple운 15개 있습니다.\n");
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
//		printf("apple은 17개가아닙니다.\n");
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
//		printf("apple은 7개보다 많습니다.\n");
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
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple운 0개가 아닙니다.\n");
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
//		printf("apple은 하나도 없습니다.\n");
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
//		printf("apple은 10개있습니다.\n");
//
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하시오 :");
//	scanf("%d", &a);
//	if (a > 0)
//		printf("양수입니다.");
//	else if (a < 0)
//		printf("음수입니다.");
//	else
//		printf("0입니다.");
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	printf("양수를 입력하시오.");
//	scanf("%d", &a);
//	if (a >= 10 && a <= 99)
//	{
//		printf("두 자리 숫자입니다.");
//
//	}
//	else
//	{
//		printf("두 자리 숫자가 아닙니다.");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다.\n");
//
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160이상입니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int y_age;
//	printf("나이를 입력하시오.");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("전체 관람가입니다.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가입니다.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가입니다.\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("영문자을 입력하시오 :");
//	char initial;
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("대문자입니다.");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("소문자입니다.");
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
//		printf("숫자1이 숫자2보다큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
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
//		printf("숫자1이 숫자2보다 큽니다.\n");
//
//	}
//	else if (number < answer)
//	{
//		printf("숫자 2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
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
//	printf("%c를 소문자로 표시하면%c이며\n", 'K', 'K'+tol);
//	printf("%c를 대문자로 ㅛ시하면%c이며\n", 'z', 'z' - tol);
//}
//#include<stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
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
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
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
//	printf("key를 입력하시오:");
//	char key;
//	scanf("%c", &key);
//	if (key == 'w')
//	{
//		printf("\'위 방향키를 입력하셨습니다.\'\n");
//	}
//	else if (key == 0x73)
//	{
//		printf("\'아래 방향키를 입력하셨습니다.\'\n");
//	}
//	else if(key == 0x61)
//	{
//		printf("\'좌 방향키를 입력하셨습니다.\'\n");
//	}
//	else if (key == 0x64)
//	{
//		printf("\'우 방향키를 입력하셨습니다.");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("0~100사이의 정수를 입력하시오:");
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
//	printf("정수를 입력하시오:");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다.\n");
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다.\n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다.\n");
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
//		printf("아이템창 오픈\n");
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
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command) {
//	case 'i':printf("아이템창 오픈\n");
//	case 'm':printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	char command;
//	printf("command를 입력하시오:\n");
//	scanf("%c", &command);
//	switch (command) {
//	case 'i':printf("아이템창 오픈\n");
//		break;
//	case 'm':printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다\n");
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
//	printf("두개의 정수를 입력하시오 :");
//	int input1, input2;
//	scanf("%d %d", &input1, &input2);
//	char oper;
//	printf("시행할 연사자룰 입력하시오:");
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
//	printf("원하는 달을 입력하시오:");
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
//	printf("<,a 왼쪽 이동\n");
//	printf(">,d 오른쪽 이동\n");
//	scanf("%c", &command);
//	switch (command) {
//	case '<':case'a':
//		printf("왼쪽으로 이동합니다.");
//		break;
//	case '>':case'd':
//		printf("오른쪽으로 이동합니다.");
//		break;
//	}return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	int option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input) {
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드\n");
//		break;
//	case 3:
//		printf("옵션세팅\n");
//		break;
//	default:printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}