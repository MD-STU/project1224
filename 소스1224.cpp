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
//	printf("%d")
//}



