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
#include<stdio.h>
int main()
{
	/*printf(" ");
	printf(" ");
	printf(" ");
	printf("*");
	printf("\n");
	printf(" ");
	printf(" ");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf(" ");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");
	printf("*");*/

	/*for (int x = 3; x > 0; x--) {
		printf(" ");
	}
	for (int y = 1; y > 0; y--) {
		printf("*");
	}
	printf("\n");

	for (int x = 2; x > 0; x--) {
		printf(" ");
	}
	for (int y = 3; y > 0; y--) {
		printf("*");
	}
	printf("\n");

	for (int x = 1; x > 0; x--) {
		printf(" ");
	}
	for (int y = 5; y > 0; y--) {
		printf("*");
	}
	printf("\n");

	for (int x = 0; x > 0; x--) {
		printf(" ");
	}
	for (int y = 7; y > 0; y--) {
		printf("*");
	}
	printf("\n");*/

	/*int y = 3;
	int z = 1;
	for (int x = y; x > 0; x--) {
		printf(" ");
	}
	y--;
	for (int x = z; x > 0; x--) {
		printf("*");
	}
	z += 2;
	printf("\n");
	
	for (int x = y; x > 0; x--) {
		printf(" ");
	}
	y--;
	for (int x = z; x > 0; x--) {
		printf("*");
	}
	z += 2;
	printf("\n");

	for (int x = y; x > 0; x--) {
		printf(" ");
	}
	y--;
	for (int x = z; x > 0; x--) {
		printf("*");
	}
	z += 2;
	printf("\n");

	for (int x = y; x > 0; x--) {
		printf(" ");
	}
	y--;
	for (int x = z; x > 0; x--) {
		printf("*");
	}
	z += 2;
	printf("\n");*/

	
	int z = 1;
	for (int y = 3; y >= 0;y--)
	{
		for (int x = y; x > 0; x--) {
			printf("_");
		}

		
		for (int x = z; x > 0; x--) {
			printf("*");
		}
		z += 2;
		printf("\n");
	}
}


	
