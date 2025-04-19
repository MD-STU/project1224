//#include<stdio.h>
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b= %d\n", *pB);
//	printf("b = %x\n\n", pB);
//}

//#include<stdio.h>
//void main() {
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기  : %d byte\n", sizeof(pA));
//	printf("pB의 크기  : %d byte\n", sizeof(pB));
//	printf("pC의 크기  : %d byte\n", sizeof(pC));
//
//	printf("pA의 크기  : %d byte\n", sizeof(*pA));
//	printf("pB의 크기  : %d byte\n", sizeof(*pB));
//	printf("pC의 크기  : %d byte\n", sizeof(*pC));
//}

//#include<stdio.h>
//int main() {
//	char str[] = "programming";
//	char* ptr1,* ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n\n", *(ptr1 + 3));
//}

//#include<stdio.h>
//int main() {
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int number[2] = { 1,2 };
//	void* p = number;
//
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d ", ptrFibo[1]);
//	printf("%d ", ptrFibo1[0]);
//	printf("%d ", ptrFibo4[-1]);
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numPtrA - 1));
//	printf("%d\n", *((int*)ptr+4));
//}

//#include<stdio.h>
//int main() {
//
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int c=1;
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//
//	}
//	int b;
//	while (c) {
//		scanf("%d", &b);
//		for (int i = 0; i < 10; i++) {
//			if (a[i] == b) {
//				printf("exist");
//				c--;
//				break;
//			}
//		}
//	}
//
//}

//#include<stdio.h>
//int main() {
//
//	int num[4] = { 4,3,1,2 };
//	int temp = 0;
//	for (int j = 0; j < 4; j++) {
//		for (int i = 1; i < 4; i++) {
//
//			if (num[i - 1] > num[i]) {
//
//				temp = num[i];
//				num[i] = num[i - 1];
//				num[i - 1] = temp;
//
//			}
//
//		}
//	}
//
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//}

//#include<stdio.h>
//int main() {
//	
//	int num[4] ;
//	for (int k = 0; k < 4; k++) {
//		scanf("%d", &num[k]);
//	}
//	int temp = 0;
//
//	
//	if (num[0]>num[1]) {
//
//		temp = num[1];
//		num[1] = num[0];
//		num[0] = temp;
//
//	}
//	
//	if (num[1] > num[2]) {
//
//		temp = num[2];
//		num[2] = num[1];
//		num[1] = temp;
//
//	}
//	
//	if (num[2] > num[3]) {
//
//		temp = num[3];
//		num[3] = num[2];
//		num[2] = temp;
//
//	}
//
//	if (num[0] > num[1]) {
//
//		temp = num[1];
//		num[1] = num[0];
//		num[0] = temp;
//
//	}
//
//	if (num[1] > num[2]) {
//
//		temp = num[2];
//		num[2] = num[1];
//		num[1] = temp;
//
//	}
//
//	if (num[0] > num[1]) {
//
//		temp = num[1];
//		num[1] = num[0];
//		num[0] = temp;
//
//	}
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//}

//B
//#include<stdio.h>
//int main() {
//
//	int num[4];
//	for (int k = 0; k < 4; k++) {
//		scanf("%d", &num[k]);
//	}
//
//	int temp = 0;
//	
//	for(int j = 3;j>=1;j--){
//		for (int i = 1; i <= j; i++) {
//			if (num[i - 1] > num[i]) {
//
//				temp = num[i];
//				num[i] = num[i - 1];
//				num[i - 1] = temp;
//
//			}
//		}
//	}
//	
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//}

#include<stdio.h>
void main() {
	int one = 1, two = 2;
	int max = 0;

	if (one > two) max = one;
	else max = two;

	printf("max = %d\n", max);

}