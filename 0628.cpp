//#include<stdio.h>
//int main()
//{
//	int num1, num2;
//	int i = 0;
//	printf("## �� ���� ������ ##\n");
//	printf("ù ���� �� ==>");
//	scanf("%d", &num1);
//	while (1) {
//		printf("�� ��° �� ==>");
//		scanf("%d", &num2);
//		if (num2 == 0) {
//			if (i == 3) {
//				printf("0�� ���� �Է��߽��ϴ�.");
//				printf("�����մϴ�.");
//				break;
//			}
//			i++;
//			printf("�ٽ� �Է��ϼ���. ");
//			continue;
//		}
//		else {
//			printf("%d / %d = %d", num1, num2, (num1 / num2));
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("100\n");
//	printf("\n");
//	printf("\n");
//	printf("200");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[10] = "VisualC++";
//	for (int i = 0; i < 10; i += 2) {
//		printf("%c", str[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100];
//	printf("������ �Է��Ͻÿ� == >");
//	scanf("%s", arr);
//	int lgt = strlen(arr);
//
// 	for (int i = lgt - 1; i >= 0; i--) {
//		if (arr[i] >= '0' && arr[i] <= '9') {
//			arr[i] = '#';
//
//		}
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char str[100];
//	char ch;
//	int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0, etc_cnt = 0;
//	int i;
//
//	printf("���ڿ��� �Է�(100�� �̳�) :");
//	scanf("%s", str);
//
//	i = 0;
//	ch = str[i];
//	while (ch != '\0') {
//		if (ch == '\0')
//			break;
//		ch = str[i];
//		if ( ch >= 'A' && ch <= 'Z') {
//			upper_cnt++;
//		}
//		else if (ch >= 'a' && ch <= 'z') {
//			lower_cnt++;
//		}
//		else if (ch >= '0' && ch <= '9') {
//			digit_cnt++;
//		}
//		else {
//			etc_cnt++;
//		}
//		i++;
//	}
//	printf("�빮�� %d��, �ҹ��� %d��, ���� %d�� �� �� %d��\n", upper_cnt, lower_cnt, digit_cnt, etc_cnt);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	short int ary[] = { 1.1,2.2,3.3,4.4 };
//	int lgt1 = sizeof(ary) / 2;
//	int lgt2 = sizeof(ary) % sizeof(int);
//	printf("%d %d", lgt1, lgt2);
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	for (i = sizeof(ary) - 1; i >= 0; i--) {
//		if (*(p + i ) >= 'A' && *(p + i) <= 'a') {
//			*(p + i) += diff;
//		}
//		printf("%c", *(p + i));
//	}
//}
//#include<stdio.h>
//void main()
//{
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	for (i = sizeof(ary) - 2; i >= -1; i--) {
//		if (*(p + i+1) >= 'A' && *(p + i+1) <= 'a') {
//			*(p + i+1) += diff;
//		}
//		printf("%c", *(p + i+1));
//	}
//}

//#include<stdio.h>
//#include<string.h>
//
//void main() {
//	char s[40] = "ITCookBookHanbitNetwork";
//	char tmp;
//	char* p;
//	p = s;
//	int lgt = strlen(s);
//	printf("���� �� ���ڿ� ==> %s\n", s);
//	
//	for (int i = lgt; i > 0; i--) {
//		for (int j = 1; j <= i-1; j++) {
//			if (s[j-1]<s[j]) {
//				tmp = s[j - 1];
//				s[j - 1] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//	printf("���� �� ���ڿ� ==> %s", s);
//}
//#include<stdio.h>
//#include<string.h>
//
//void main() {
//	char s[40] = "ITCookBookHanbitNetwork";
//	char tmp;
//	char* p;
//	int lgt = strlen(s);
//	printf("���� �� ���ڿ� ==> %s\n", s);
//
//	for (int i = lgt; i > 0; i--) {
//		for (int j = 0; j < i-1 ; j++) {
//			p = s+j;
//			if (*p < *(p+1)) {
//				tmp = *p;
//				*p = *(p + 1);
//				*(p + 1) = tmp;
//			}
//		}
//	}
//	printf("���� �� ���ڿ� ==> %s", s);
//}

//#include<stdio.h>
//int addFunction(int m, int n);
//
//void main() {
//	addFunction("�ȳ�","�ϼ���");
//}
//int addFunction(int m, int n)
//{
//	return m + n;
//}

//#include<stdio.h>
//int var = 0;
//void func1()
//{
//	 var = 111;
//}
//
//void main()
//{
//	printf("%d ", var);
//	func1();
//	printf("%d ", var);
//}

//#include<stdio.h>
//#include<string.h>
//
//char* upper_lower(char* a);
//
//void main()
//{
//	char inStr[100], outStr[100];
//
//	printf("���ڿ��� �Է�(100�� �̳�): ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("��ҹ��� ��ȯ ��� ==> %s\n", outStr);
//}
//char* upper_lower(char* a)
//{
//	int lgt = strlen(a);
//	for (int i = 0; i < lgt; i++) {
//		
//		if (*a >= 'a' && *a <= 'z') {
//			*a -= 32;
//		}
//		else if (*a >= 'A' && *a <= 'Z') {
//			*a += 32;
//		}
//		a++;
//	}
//	return a-lgt;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//int throwDice()
//{
//	
//	int a = rand() % 6 + 1;
//	return a;
//}
//
//void main()
//{
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("** �ֻ��� 2�� ������ ���� **\n\n");
//	srand((unsigned int)time(NULL));
//
//	int dice1, dice2;
//	int epualCount = 0;
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//		if (dice1 == dice2) {
//			diceNum[epualCount] = dice1;
//			epualCount++;
//		}
//		if (epualCount == 10) {
//			break;
//		}
//	}
//
//	printf("���� ���ڰ� ���� ���� ==> ");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n\n");
//}

#include<stdio.h>
#include<malloc.h>

void main()
{
	int* p;
	int i, hap = 0;
	int cnt;
	int ary[] = { 10,20,30,40,50 };

	cnt = sizeof(ary) / sizeof(int);
	p = (int*)malloc(sizeof(int) * cnt);
	for (i = 0; i < cnt; i++) {
		printf(" �迭[%d] ���� : %d \n", i, ary[i]);
		*(p + i) = ary[i];
	}
	for (i = 0; i < cnt; i++) {
		hap += *(p + i);
	}
	printf("�迭�� ���� �� ==> %d\n", hap);
	free(p);
}