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
//// 
//#include<stdio.h>
//int main()
//{
//	int input;
//	printf("메뉴를 선택하세요.");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//	const int Option = 3;
//	switch (input) {
//	case 1:
//		printf("새 게임 시작\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드\n");
//		break;
// 
//	case Option:
//		printf("옵션세팅\n");
//		break;
//	default:printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("0~9 사이의 숫자를 입력하시오 :");
//	int number;
//	scanf("%d", &number);
//	
//	switch (number) {
//	case 3: case 6:case 9:
//		printf("짝");
//		break;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command) {
//	case 'x':printf("알파벳 x 입력.\n");
//		break;
//
//	case 'X':printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu) {
//	case 1: {
//		int number1, number2;
//		printf("숫자 두개를 입력하세요.\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",
//			number1, number2, number1 + number2);
//		break;
//	}
//	case 2: {
//		int number3, number4;
//		printf("숫자 두개를 입력하세요.\n");
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
//	printf("방향키를 입려하시오: ");
//	scanf(" %c", &input);
//	switch (input) {
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.");
//		break;
//	case'a':
//		printf("좌 방향키를 입력하셨습니다.");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	printf("음식을 주문하십시오:");
//	printf("appetizer:1.케비어 2.샐러드 3.푸아그라");
//	int appe;
//	scanf("%d", &appe);
//	switch (appe) {
//	case 1: {
//		int main;
//		printf("mainDish:1.스테이크 2.생선요리3.양갈비\n");
//		scanf("%d", &main);
//		switch (main) 
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 케비어 스테이크 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 케비어 스테이크 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 케비어 스테이크 초콜릿무스입니다.");
//				break;
//			}
//			}
//		case 2: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 케비어 생선요리 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 케비어 생선요리 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 케비어 생선요리 초콜릿무스입니다.");
//				break;
//			}
//			
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 케비어 양갈비 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 케비어 양갈비 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 케비어 양갈비 초콜릿무스입니다.");
//				break;
//			}
//		}
//		}
//
//	}
//	case 2: {
//		int main;
//		printf("mainDish:1.스테이크 2.생선요리3.양갈비\n");
//		scanf("%d", &main);
//		switch (main)
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 샐러드 스테이크 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 샐러드 스테이크 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 샐러드 스테이크 초콜릿무스입니다.");
//				break;
//			}
//		}
//		case 2: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 샐러드 생선요리 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 샐러드 생선요리 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 샐러드 생선요리 초콜릿무스입니다.");
//				break;
//			}
//
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 샐러드 양갈비 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 샐러드 양갈비 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 샐러드 양갈비 초콜릿무스입니다.");
//				break;
//			}
//		}
//	}
//	}
//	case 3: {
//		int main;
//		printf("mainDish:1.스테이크 2.생선요리3.양갈비\n");
//		scanf("%d", &main);
//		switch (main)
//		{
//		case 1: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 푸아그라 스테이크 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 푸아그라 스테이크 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 푸아그라 스테이크 초콜릿무스입니다.");
//				break;
//			}
//		}
//		case 2: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 푸아그라 생선요리 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 푸아그라 생선요리 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 푸아그라 생선요리 초콜릿무스입니다.");
//				break;
//			}
//
//		}
//		case 3: {
//			int dessert;
//			printf("dessert 1.케익 2.아이스크림 3.초콜릿무스");
//			scanf("%d", &dessert);
//			switch (dessert) {
//			case 1:
//				printf("주문하신 음식은 푸아그라 양갈비 케익 입니다. ");
//				break;
//			case 2:
//				printf("주문하신 음식은 푸아그라 양갈비 아이스크림입니다.");
//				break;
//			case 3:
//				printf("주문하신 음식은 푸아그라 양갈비 초콜릿무스입니다.");
//				break;
//			}
//		}
//	}
//
//	}
// 아까우니까 남겨둡니다. 모든 경우의 수를 나열한 거.



//#include<stdio.h>
//int main() {
//	printf("appetizer 1.캐비어 2.샐러드 3.푸아그라\n");
//	int appe;
//	
//	printf("mainDish 1.스테이크.생선요리 3.양갈비\n");
//	int mainD;
//	
//	printf("dessert 1.케익 2.아이스크리 3.초콜릿무스\n");
//	int deesr;
//	scanf("%d %d %d",&appe,&mainD, &deesr);
//	switch (appe)
//	{
//	case 1: printf("음식은 케비어,");
//		break;
//	case 2: printf("음식은 샐러드,");
//		break;
//	case 3: printf("음식은 푸아그라,");
//		break;
//	}
//	switch (mainD)
//	{
//	case 1: printf(" 스테이크,");
//		break;
//	case 2: printf(" 생선요리,");
//		break;
//	case 3: printf(" 양갈비,");
//		break;
//	}
//	switch (deesr)
//	{
//	case 1:printf("케잌입니다.");
//		break;
//	case 2:printf("아이스크림입니다.");
//		break;
//	case 3:printf("초콜릿무스입니다.");
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
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일경우 반복출력\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
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
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1) {
//		printf("알파벳을 입력해주세요(다른것을 입력시 다시입력) :");
//		scanf(" %c", &alphabet);
//		if(alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
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
//		printf("양수를 입력해주세요(0입력시 종료) :");
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
//	printf("베스킨라빈스 게임\n");
//	printf("1~3사이의 숫자를 입력하시오:\n");
//	int turn = 0;
//	while (1) {
//		printf("%c: ", 'A' + turn);
//		scanf("%d", &number);
//		if (number > 3 || number < 1) {
//			printf("숫자를 다시 입력하시오.\n");
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
//	printf("%c패배\n", 'A' + turn);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
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
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2. 이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) {
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//
//		}
//		
//		
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int select;
//	do {
//		printf("\n메뉴를 선택하세요 :\n");
//		printf("1.로그인 2.회원가입.3옵션 4.만든사람들\n");
//		scanf("%d", &select);
//
//		switch (select) {
//		case 1:
//			printf("로그인 시작\n");
//			break;
//		case 2:
//			printf("회원가입 시작\n");
//			break;
//		case 3:
//			printf("옵션으로 이동합니다.\n");
//			break;
//		case 4:
//			printf("만든 사람들 : 민덕현\n");
//			break;
//		}
//	} while (select <= 4 && select >=1);
//	printf("종료됐습니다.");
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
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭘 할까요?\n");
//		printf("1.코딩공부한다. 2.책을 읽는다. 3.축구를 한다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//
//
//		if (command == 1) {
//
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기본이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩공부합니다.\n");
//			study++;
//		}
//		else if (command == 2) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기본이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//			case 5:
//				printf("집에서 ");
//			}
//			printf("책을 읽습니다.\n");
//			read++;
//		}
//		else if (command == 3) {
//			int randInt = rand() % 5 + 1;
//			switch (randInt) {
//			case 1:
//				printf("기본이 좋네요.\n");
//			case 3:
//				printf("공터에서 ");
//				break;
//			case 2:
//				printf("무릎이 아파요.\n");
//			case 4:
//				printf("학교에서 ");
//				break;
//			case 5:
//				printf("마당에서 ");
//			}
//			printf("축구를 합니다.\n");
//			football++;
//		}
//		else break;
//	} while (1);
//
//
//	if (day <= 3) {
//		printf("그대로 입니다...\n");
//	}
//
//	else if (study > read && study > football) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//
//		default:
//			printf("플스택 개발자가 되었습니다!\n");
//			break;
//		}
//
//	}
//	else if (read > study && read > football) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("독서가 취미가 되었습니다!\n");
//			break;
//		case 1:
//			printf("문학소년이 되었습니다!\n");
//			break;
//		case 2:
//			printf("사서가 되었습니다!\n");
//			break;
//		case 3:
//			printf("출판 기획사가 되었습니다!\n");
//			break;
//
//		default:
//			printf("도서관장이 되었습니다!\n");
//			break;
//		}
//	}
//	else if (football > study && football > read) {
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("동네축구 주전이 되었습니다!\n");
//			break;
//		case 1:
//			printf("피지컬 트레이너가 되었습니다!\n");
//			break;
//		case 2:
//			printf("심판이 되었습니다!\n");
//			break;
//		case 3:
//			printf("코치가 되었습니다!\n");
//			break;
//
//		default:
//			printf("국가대표가 되었습니다!\n");
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
//		printf("양%d마리\n");
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 0; sheep < 5; sheep++) {
//		printf("양%d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
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
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양%d마리\n",sheep);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("끝!\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep%10==0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		if (sheep == 45)
//		{
//			printf("잠들었다!\n");
//			break;
//		}
//		printf("양%d마리\n",sheep);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++) {
//		printf("라운드 %d\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++) {
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++) {
//		printf("아파트 %d동\n",count);
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
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요:");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++) {
//		printf("삐약");
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
//	printf("모두 곱한 값은 == %d\n", num2);
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
//	printf("100이하의 제곱수를 출력합니다\n");
//	for (number = 1; (number * number) <= 100; number++)
//		printf("%d\n", number * number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int number;
//	printf("100이하 7의 배수를 출력합니다\n");
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
//	printf("1부터 10까지 곱한 수 출력:");
//	for (number = 10, exitFor = number - 1;
//		exitFor; number *= exitFor, exitFor--)
//	{
//		//초기화와 증감식에 여러 줄의 코드가 들어갈 수있다
//		//조건식에 변수 하난가 들어가면 0이될때 반복이 멈춘다.
//		//{}안에 코드가 없어도 조건문과 증감식은 실행된다.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("1부터 10까지 곱한 수 출력:");
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
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
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
//	printf("시작값 ==> ");
//	scanf(" %d", &input1);
//	printf("끝값 ==> ");
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
//	printf("숫자를 여러 개 입력 :");
//	scanf("%d", &input1);
//	int copy_num = input1;
//	while (copy_num) {
//		copy_num /= 10;
//		ten *= 10;
//	}
//	ten /= 10;
//
//	printf("%d의 자릿수\n", ten);
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
//		printf("%d반 %d반\n", myClass, student);
//	}
//
//	myClass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d반 \n", myClass, student);
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
//			printf("%d반 %d번\n", myClass, student);
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
//				printf("%d학년 %d반 %d번\n", grade, myClass, student);
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
//			printf("4면 - %d, 6면 - %d\n", i, j);
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
//		printf("%d번째 내부 반복문 진입 \n", outer);
//
//		for (inter = 0; inter < 5; inter++) {
//			printf("내부 반복문 %d 번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
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
//	//3-1번
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
//	//3-2번
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
//	//3-3번
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
//	//3-4번
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
//	//3-5번
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
//	//4-1번
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
//	//4-2번
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
//	//4-3번
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
//	//4-4번
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
////4-5번
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
//	printf("게임을 시작합니다!\n");
//	printf("뒤에 숫자를 입력해주세요.\n");
//
//
//	/*int input;
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("턴이 넘어갑니다.\n");
//	printf("B:");
//	scanf("%d", &input);
//	printf("B:");
//	scanf("%d", &input);
//	printf("B:");
//	scanf("%d", &input);
//	printf("턴이 넘어갑니다.\n");
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("A:");
//	scanf("%d", &input);
//	printf("턴이 넘어갑니다.\n");*/
//
//	/*int input;
//	int y = 0;
//	for (int x = 1; x <= 3; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y%=2;
//	printf("턴이 넘어갑니다.\n");
//
//	for (int x = 1; x <=3 ; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y %= 2;
//	printf("턴이 넘어갑니다.\n");
//
//	for (int x = 1; x <= 3; x++) {
//		printf("%c:",'A'+y);
//		scanf("%d", &input);
//	}
//	y++;
//	y %= 2;
//	printf("턴이 넘어갑니다.\n");
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
//					printf("턴을 넘기기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//					x--;
//					continue;
//				}
//				break;
//			}
//			
//			
//			if (number!= input) {
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d입니다.\n", number);
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
//		printf("턴이 넘어갑니다.\n");
//
//	}
//
//	printf("유저 %c가 이겼습니다!",'A'+player);
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

//문제 1-1번
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

//문제 1-2
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
//			printf("프로그램 종료\n"); break;
//		}
//		return 0;
//	}
//}

//문제 1-3
//#include<stdio.h>
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n"); break;
//		}
//	}
//	return 0;
//}
 
//#include<stdio.h>
//int main()
//{
//	int for_flag = 1;
//	int number = 0;
//	for(;for_flag;)
//	{		
//		
//		for(;number++;)
//		{
//			printf(">number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}
//
//     /*	while (for_flag) {
//		
//		while (number++) {
//			printf(">number = %d\n", number);
//			if (number == 3) {
//				for_flag = 0;
//				break;
//			}
//		}
//		number++;
//		printf(">>number = %d\n", number);
//	}*/
//	printf("%d %d\n", for_flag, number);
//}

//소수 자리 정하고 출력할 떄 반올림 생각하기
//#include<stdio.h>
//int main()
//{
//	double pi = 3.1415;
//	int number;
//	printf(" \" ");
//}

//#include<stdio.h>
//
//int suyel(int n)
//{
//	int sum = 0;
//	for (int x = 0; x <= n; x++)
//	{
//		sum += x;
//	}
//	return sum;
//}
//int main()
//{
//	int result = suyel(10);
//	printf("%d\n", result);
//	return 0;
//}
//#include<stdio.h>
//
//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//
//	return 0;
//}

//#include<stdio.h>
//void eatFood()
//{
//	printf("밥먹기\n");
//}
//
//void goSleep()
//{
//	printf("잠자기\n");
//}
//int main()
//{
//	eatFood(); goSleep();
//	eatFood(); eatFood();
//	goSleep(); goSleep();
//
//	return 0;
//}
//#include<stdio.h>
//
//void person_A()
//{
//	int money = 10000;
//	printf("A : 주머니에");
//	printf("%d원\n", money);
//
//}
//
//void person_B()
//{
//	int money = 5000;
//	printf("B : 주머니에");
//	printf("%d원\n", money);
//}
//int main()
//{
//	person_A();
//	person_B();
//
//	return 0;
//}

//#include<stdio.h>
//int function_test2()
//{
//	int testNumber = 5;
//	return testNumber;
//}
//int main()
//{
//	int getNumber;
//	getNumber = function_test2();
//	printf("function_test2()");
//	printf("에서 가져온 값 :");
//	printf("%d\n", getNumber);
//	return 0;
//}

//#include<stdio.h>
//
//void sayHi()
//{
//	printf("hi ");
//	return;
//}
//
//char getA()
//{
//	return 'A';
//}
//
//int get5()
//{
//	return 5;
//}
//
//double set1get5(int one)
//{
//	return one + 4.0;
//}
//
//void  main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}

//#include<stdio.h>
//void sayHi();
//char getA();
//int get5();
//double set1get5(int one);
//
//void main()
//{
//	sayHi();
//	printf("%c\n", getA());
//	printf("%d\n", get5());
//	printf("%f\n", set1get5(1));
//}
//
//void sayHi()
//{
//	printf("hi ");
//	return;
//}
//
//char getA()
//{
//	return 'A';
//}
//
//int get5()
//{
//	return 5;
//}
//
//double set1get5(int one)
//{
//	return one + 4.0;
//}

//#include<stdio.h>
//
//float sendCard();
//
//int main()
//{
//	float result = sendCard();
//	printf("%f만원 받음\n", result);
//
//	return 0;
//}
//
//float sendCard()
//{
//	printf("<크리스마스 카드>\n");
//	printf("비용: 0.7만원\n");
//	printf("돈내기(단위:만원):");
//	int manwon;
//	scanf("%d", &manwon);
//	float change = manwon - 0.7;
//	return change;
//}


//#include<stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//int main()
//{
//	printf("벌을 영어로?\n");
//	printf("%c%c%c\n",
//		getB(), getE(), getE());
//	return 0;
//}

//#include<stdio.h>
//
//char geta() { return 'a'; }
//char getb() { return 'b'; }
//char gete() { return 'e'; }
//char getf() { return 'f'; }
//char getl() { return 'l'; }
//char getg() { return 'g'; }
//char getp() { return 'p'; }
//int main()
//{
//	printf("사과를 영어로?\n");
//	printf("%c%c%c%c%c\n",
//		geta(), getp(), getp(),getl(), gete());
//	return 0;
//}

//#include<stdio.h>
//
//char geta() { return 'a'; }
//char getb() { return 'b'; }
//char gete() { return 'e'; }
//char getf() { return 'f'; }
//char getl() { return 'l'; }
//char getg() { return 'g'; }
//char gett() { return 't'; }
//int main()
//{
//	printf("왼쪽을 영어로?\n");
//	printf("%c%c%c%c\n",
//		getl(), gete(), getf(), gett());
//	return 0;
//}

//#include<stdio.h>
//
//void makeHamburg(int count)
//{
//	printf("햄버거 %d개 나왔습니다.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("햄버거 몇개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_count);
//	return 0;
//}

//#include<stdio.h>
//
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_charaterX(char x);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_charaterX('x');
//	return 0;
//}
//void print_Number()
//{
//	printf("Number\n");
//}
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//void print_Number4_charB(int num, char b)
//{
//	printf("Number :%d, charater :%c\n", num, b);
//}
//void print_charaterX(char x)
//{
//	printf("charater : %c\n", x);
//}

//#include<stdio.h>
//char rightType(char type)
//{
//	if (type != 'A' && type != 'B') {
//		printf("주문할 수 없는 햄버거입니다.\n");
//		return 'C';
//	}
//	return type;
//}
//
//void makeHamburg(char type, int count)
//{
//	if (type == 'A') {
//		printf("A타입 햄버거");
//	}
//	else {
//		printf("B타입 햄버거");
//	}
//	printf("%d개 나왔습니다.\n", count);
//}
//int main()
//{
//	char ham_type;
//	int ham_count;
//	printf("어느타입 햄버거를");
//	printf("주문하시겠습니까?(AorB)\n");
//	scanf("%c", &ham_type);
//	if (rightType(ham_type) == 'c') {
//		return 0;
//	}
//	printf("햄버거 몇개 주문하시겠습니까?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_type, ham_count);
//	return 0;
//}

//#include<stdio.h>
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("결과 : %d\n", data1);
//	return 0;
//}

//#include<stdio.h>
//int add_number(int num1, int num2)
//{
//	int retval1 = num1 + num2;
//	return retval1;
//}
//
//int gap_number(int num1, int num2)
//{
//	int retval2 = num1 - num2;
//	return retval2;
//}
//
//int multi_number(int num1, int num2)
//{
//	int retval3 = num1 * num2;
//	return retval3;
//}
//
//float dv_number(int num1, int num2)
//{
//	float retval4 =num1 / (float) num2;
//
//	return retval4;
//}
//
//int main()
//{
//	int a = 5, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = gap_number(a, b);
//	int data3 = multi_number(a, b);
//	double data4 = dv_number(a, b);
//	printf("결과 : %d\n", data1);
//	printf("결과 : %d\n", data2);
//	printf("결과 : %d\n", data3);
//	printf("결과 : %.1f\n", data4);
//	return 0;
//}

//#include<stdio.h>
//int minus(int n)
//{
//	if (n <= 1) return -3;
//	return minus(n - 1) - 2;
//
//}
//int main()
//{
//	int n; scanf("%d", &n);
//	printf("%d", minus(n));
//	return 0;
//}

//#include<stdio.h>
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d", n);
//	printNumber(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//	return 0;
//}
//#include<stdio.h>
//int fibonacci(int n)
//{
//	printf("%d", n);
//	if (n <= 2) return 1;
//	printf("(%d)\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//	return 0;
//}

//#include<stdio.h>
//int hap(int n)
//{	
//	
//	if (n <= 0) return 0;
//	return n + hap(n - 1);
//}
//
//int main()
//{	
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", hap(n));
//}

//#include<stdio.h>
//
//struct BYTE
//{
//	char a;
//	char b;
//
//};
//
//int main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}


//#include<stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//
//};
//
//void main()
//{
//	struct student s =
//	{ 1, (char*)"이샘",90.5 };
//	printf("아이디 : %d\n", s.id);
//	printf("이름 : %s\n", s.name);
//	printf("백분율 : %.1f\n", s.aver);
//}
//#include<stdio.h>
//struct GUN
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//int main()
//{
//	struct GUN M416 = { "M416",5.56, true,
//	true,true,true,true,30 };
//	printf("화기명 :%s\n",M416.name);
//	printf("탄 종류 : %.2lf\n",
//		M416.bullet_type);
//	printf("스코프유무 : %s",
//		M416.scope ? "true" : "false");
//		
//	return 0;
//}

//#include<stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	char data_2;
//};
//
//struct VIP_PERSON {
//	char grade;
//	char personCode;
//	char mileage;
//};
//
//int main()
//{
//	/*int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("더미 크기 :%d\n", sizedummy);
//	printf("vip정보 크기 : %d\n", sizevip);
//
//	return 0;*/
//
//	VIP_PERSON lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true) {
//		scanf(" %c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' ||
//			'A' <= lee_sam.grade &&
//			lee_sam.grade <= 'D')
//			break;
//	}
//
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade,
//		lee_sam.personCode, lee_sam.mileage);
//	return 0;
//}


//#include<stdio.h>
//struct score {
//	int language;
//	int math;
//};
//
//struct fruit {
//	char apple;
//	char banna;
//	char strobe;
//	char bae;
//	char dori;
//	char podo;
//	short carro;
//	
//};
//int main()
//{
//	int sizescore = sizeof(fruit);
//	printf("%d\n", sizescore);
//}

//#include<stdio.h>
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	__dummy__ a;
//	
//	printf("나이를 입력하세요.\n");
//	scanf("%d", &a.data_0);
//
//	
//	printf("이름을 입력하세요.\n");
//	scanf(" %c", &a.data_1);
//
//	printf("키를 입력하세요.\n");
//	scanf("%f", &a.data_2);
//	
//	
//	printf("이름 : %c\n", a.data_1);
//	printf("나이 : %d\n", a.data_0);
//	printf("키 : %f\n", a.data_2);
//}

//#include<stdio.h>
//
//void main()
//{
//	short pt;
//	scanf("%hd", &pt);
//	printf("값 : %hd\n", pt);
//
//}

#include<stdio.h>

short getDefaultData()
{
	short pt1;
	scanf("%hd", &pt1);
	return pt1;
}

void main()
{

}