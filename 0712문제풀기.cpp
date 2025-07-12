//#include<stdio.h>
//
//int main() {
//	int num = 1;
//	for (int i = 1; i <= 10; i++) {
//		for (int j = 0; j <=9; j++) {
//			printf("%3d", num++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int score;
//	scanf("%d", &score);
//	score = score / 10 *10;
//	
//	switch (score) {
//	case 100:
//		printf("A+\n");
//		break;
//	case 90:
//		printf("A\n");
//		break;
//	case 80:
//		printf("B\n");
//		break;
//	case 70:
//		printf("C\n");
//		break;
//	case 60:
//		printf("D\n");
//		break;
//	default:
//		printf("F\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int value_hap(int num)
//{
//	int hap=0;
//	for (int i = 1; i <= num; i++) {
//		hap += i;
//	}
//	return hap;
//}
//void main()
//{
//	int num;
//	int val;
//	scanf("%d", &num);
//	val = value_hap(num);
//	printf("%d", val);
//}
//#include<stdio.h>
//int value_hap(int num,int val,int hap)
//{
//	
//	if (val == num)
//		return hap;
//	val++;
//	hap += val;
//	return value_hap(num,val,hap);
//}
//void main()
//{
//	int num;
//	int val = 0;
//	int hap = 0;
//	scanf("%d", &num);
//	hap = value_hap(num,val,hap);
//	printf("%d", hap);
//}


//#include<stdio.h>
//int greatest_common_divisor(int x,int y)
//{
//	int temp;
//	int divs;
//	if (y > x) {
//		temp = y;
//		y = x;
//		x = temp;
//	}
//	for (int i = 1; i <= y; i++) {
//		if (x % i == 0) {
//			if (y % i == 0) {
//				divs = i;
//			}
//		}
//	}
//	return divs;
//	
//}
//int main()
//{
//	int num1, num2;
//	int val;
//	scanf("%d %d", &num1, &num2);
//	val = greatest_common_divisor(num1, num2);
//	printf("%d", val);
//}


//#include<stdio.h>
//int greatest_common_divisor(int x, int y,int z,int val)
//{
//	
//	if (z <= y) {
//		if (x % z == 0) {
//			if (y % z == 0) {
//				val = z;
//				
//			}
//		}
//		z++;
//	}
//	else {
//		return val;
//	}
//
//	return greatest_common_divisor(x,y,z,val);
//}
//int main()
//{
//	int num1, num2,temp;
//	int val = 0;
//	scanf("%d %d", &num1, &num2);
//	if (num2 > num1) {
//		temp = num2;
//		num2 = num1;
//		num1 = temp;
//	}
//	val = greatest_common_divisor(num1, num2,1,val);
//	printf("%d", val);
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (n %i == 0) {
//			printf("%d ",i);
//		}
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int com()
//{
//	int a = rand() % 3 + 1;
//	printf("컴퓨터 값: %d\n", a);
//	return a;
//}
//
//void main()
//{
//	srand((unsigned int)time(NULL));
//	int mine,result;
//	printf("1.주먹,2.가위,3.보\n");
//	scanf("%d", &mine);
//	
//	result = mine - com();
//	switch (result) {
//	case 0:
//		printf("무승부\n");
//		break;
//	case -1:
//	case 2:
//		printf("승리\n");
//		break;
//	case 1:
//	case -2:
//		printf("패배\n");
//		break;
//	}
//
//}

#include<stdio.h>
#include<string.h>
void main()
{
	char arr[11];
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {

		sprintf(arr, "%d\n", i);
		if ((strchr(arr, '3')) != NULL || (strchr(arr, '6')) != NULL || (strchr(arr, '9')) != NULL) {
				printf(" %3c\n", 'x');
		}
		else {
			printf("%3d\n", i);
		}

	}

}