//#include<stdio.h>
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int* ptr;
//	ptr = &arr[0];
//	ptr += 2;
//
//	printf("%d", *ptr);
//}

//#include<stdio.h>
//int main() {
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	pt--;
//	*pt++ += 20;
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	char str[] = "��������� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}
//
//#include<stdio.h>
//int main() {
//	char str[] = "������ ��� : ��� �� ������ ������ ��߿����� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("&s\n\n:", str);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n:", ptr);
//}

#include<stdio.h>
int main() {
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1;
		//printf("%d\n", arr[i]);
	}
	/*printf("\n");
	for (int i = 1; i <= 100; i++) {
		printf("%d\n", arr[100 - i]);
	}*/
	int* ptr;
	//51���� 100���� ��� 

	for (ptr = &arr[50]; *ptr != 50; ptr++) {
		printf("%3d ", *ptr);
		if (*ptr == 100) {
			ptr -= 100;
		}
	}


	printf("\n");
}
	


