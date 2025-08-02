//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, i = 1;
//	int k;
//	scanf("%d %d", &a, &b);
//	while (1) {
//		k = pow(i, 2);
//		if (k >= a && k <= b) {
//			printf("%3d\n", k);
//			
//		}
//		if (k > b) {
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//void main()
//{
//	int input,base;
//	int num = 0;
//	char hap[100];
//	printf("숫자를 입력하시오 :\n");
//	scanf("%d", &input);
//	printf("1.2진수로 변환,2.16진수로 변환\n");
//	scanf("%d", &base);
//	if (base == 1) {
//		while (1) {
//			int diff;
//			diff = input % 2;
//			input = input / 2;
//			hap[num] = diff + '0';
//			num++;
//			if (input == 0) {
//				hap[num] = NULL;
//				break;
//			}
//		}
//		
//	}
//	else {
//		while (1) {
//			int diff;
//			diff = input % 16;
//			input = input / 16;
//			if (diff >= 10) {
//				diff = diff - 10;
//				hap[num] = 'A' + diff;
//			}
//			else {
//				hap[num] = diff+'0';
//			}
//			num++;
//			if (input == 0) {
//				hap[num] = NULL;
//				break;
//			}
//		}
//	}
//	for (int i = num - 1; i >= 0; i--) {
//		printf("%c", hap[i]);
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void main()
//{
//	const int n = 52;
//	int a[n];	
//	int temp;
//	srand((unsigned)time(NULL));
//	
//	for (int i = 0; i < n; i++) {
//		a[i] = i+1;
//	}
//	for (int i = 0; i < n; i++) {
//		int k = rand() % n;
//		temp = a[i];
//		a[i] = a[k];
//		a[k] = temp;
//		
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d\n",a[i]);
//	}
//}

//#include<stdio.h>
//#include<string.h>
//
//void main()
//{
//	char name[100];
//	scanf("%s", name);
//	int len = strlen(name);
//	for (int i = 0; i < len; i++) {
//		printf("%x ", name[i]);
//	}
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int len_sent, len_search, len_change,len_ending_start;
	char sent[100];
	char search[20];
	char change[20];
	char* ptrSearch;
	printf("문장을 입력하시오:\n");
	gets_s(sent);
	len_sent = strlen(sent);

	printf("바뀌는 단어를 입력하시오:\n");
	gets_s(search);
	len_search = strlen(search);

	ptrSearch = strstr(sent, search);//내가 찾는 단어의 주소
	int len_ending = strlen(ptrSearch); //내가 찾는 단어의 시작 인덱스

	char *ptrEnding = ptrSearch+len_search;
	len_ending_start = strlen(ptrEnding);

	printf("바꿀 단어를 입력하시오\n");
	gets_s(change);
	len_change = strlen(change);
	memmove(ptrSearch+ len_change, ptrEnding, len_ending_start +1);//뒤로밀기
	printf("first : %s", sent);

	memmove(&sent[len_sent-len_ending], change, len_change);
	
	
	printf("second : %s", sent);
}


