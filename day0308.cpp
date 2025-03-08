//#include<stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void main()
//{
//	short pt; 
//	pt = getDefaultData();
//	printf("값 : %hd\n", pt);
//}

//#include<stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

//#include<stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt += 5;
//	printData(pt);
//
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}
//


//#include<stdio.h>
//
//short getDefaultData();
//short plus(short pt3);
//void printData(short pt2);
//
//void main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus(pt);
//	printData(pt);
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//	return pt1;
//}
//
//short plus(short pt3)
//{
//	pt3 += 5;
//	return pt3;	
//}
//
//void printData(short pt2)
//{
//	printf("값 : %hd\n", pt2);
//}

//#include<stdio.h>
//
//struct POINT{ short x, y; };
//POINT getDefaultData();
//POINT plus(POINT pt3);
//void printData(POINT pt2);
//
//void main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//	pt = plus(pt);
//	printData(pt);
//}
//
//POINT getDefaultData( )
//{
//	POINT pt1;
//	scanf("%hd", &pt1.x);
//	scanf("%hd", &pt1.y);
//	return pt1;
//}
//
//POINT plus(POINT pt3)
//{	
//	 pt3.x += 5;
//	 pt3.y += 5;
//	return pt3;
//
//}
//
//void printData(POINT pt2)
//{	
//	printf("값 : %hd\n", pt2.x);
//	printf("값 : %hd\n", pt2.y);
//}


//#include<stdio.h>
//
//void main()
//{
//	char arr[3];
//	printf("%d\n", sizeof(arr));
//}

//#include<stdio.h>
//
//void main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//}

//#include<stdio.h>
//
//void main()
//{
//	char alpah[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1],
//	alpah[2],alpah[3]);
//}

//#include<stdio.h>
//void main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는 ");
//	printf("1번째 숫자는? %d\n", num[1]);
//}

//#include<stdio.h>
//
//int main()
//{
//	int num[3] = { 3,6,9 };
//
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("\n\n");
// for(int k = 0;k<5;k++){
//	printf("%d", arr[k]);
// }
//	
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		printf("값을 입력해주세요 (%d번째) :", i+1);
//		scanf("%d", &arr[i]);
//	}
//	while (1) {
//		int input;
//		printf("값을 입력하시오 :");
//		scanf("%d", &input);
//		if (input == arr[0]) {
//			break;
//		}
//		
//		if (input == arr[1]) {
//			break;
//		}
//		
//		if (input == arr[2]) {
//			break;
//		}
//		if (input == arr[3]) {
//			break;
//		}
//		if (input == arr[4]) {
//			break;
//		}
//		if (input == arr[5]) {
//			break;
//		}
//		if (input == arr[6]) {
//			break;
//
//		}
//		if (input == arr[7]) {
//			break;
//		}
//		if (input == arr[8]) {
//			break;
//
//		}
//		if (input == arr[9]) {
//			break;
//		}
//		
//	}
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10];
//	int a = 1;
//	for (int i = 0; i < 10; i++) {
//		printf("값을 입력해주세요 (%d번째) :", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	while (a) {
//		int input;
//		printf("값을 입력하시오 :");
//		scanf("%d", &input);
//		
//		for (int j = 0; j < 10; j++) {
//			
//			if (input == arr[j]) {
//				a--;
//				break;
//			}
//			
//			
//		}
//		}
//	printf("\nexist");
//}

#include<stdio.h>

void main()
{
	int left = 3, right = 5;
	left = right;
	right = left;
	printf("left = %d, ", left);
	printf("right = %d\n", right);
}