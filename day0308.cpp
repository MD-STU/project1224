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

//#include<stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//}

//#include<stdio.h>
//
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d,", left);
//	printf("right = %d\n", right);
//
//}

//#include<stdio.h>
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d,", num[0]);
//	printf("num[1] = %d\n", num[1]);
//
//
//}

//#include<stdio.h>
//void main()
//{
//	int input[4] = { 4,3,1,2 };
//	int temp;
//	temp = input[3]; // 
//	input[3] = input[0]; //4,3,1,4
//	input[0] = temp; // 2,3,1,4
//
//	temp = input[2];   
//	input[2] = input[1];//2,3,3,4
//	input[1] = temp;//2,1,3,4
//
//	temp = input[0];  
//	input[0] = input[1];
//	input[1] = temp;
//
//	for (int i = 0; i <= 3; i++) {
//		printf("%d ", input[i]);
//	}
//
//}


//#include<stdio.h>
//int main()
//{
//	const int N = 4;
//	int input[N];
//	int temp;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &input[i]);
//		printf("input [%d] = %d\n",i, input[i]);
//	}
//	
//	for (int l = 0; l < N; l++) {
//		for (int j = 0; j < N - l-1; j++) {
//			if (input[j] > input[j + 1])
//			{
//				temp = input[j];
//				input[j] = input[j + 1];
//				input[j + 1] = temp;
//
//			}
//			
//		}
//	}
//
//
//		for (int k = 0; k < N; k++) {
//			printf("input[%d] = %d  ", k, input[k]);
//		}
//		printf("\n");
//
//		
//}

//#include<stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) { max = one; }
//	else { max = two; }
//
//	printf("max = %d\n", max);
//}

//#include<stdio.h>
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three) {
//			max - one;
//		}
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d\n", max);
//}

//#include<stdio.h>
//void main()
//{
//	int arr[3] = { 1,3,2 };
//	int max = arr[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//}
//
//#include<stdio.h>
//void main()
//{
//	const int N = 5;
//	int arr[N] = { 1,3,6,4,2 };
//	int temp = arr[0];
//	int temp1 = arr[0];
//	
//	int hap = arr[0];
//	for (int i = 1; i < N; i++ ) {
//		if (temp < arr[i ])
//		{
//			temp = arr[i ];
//		}
//		if (temp1 > arr[i ])
//		{
//			temp = arr[i ];
//		}
//		hap += arr[i];
//	}
//
//	
//	printf("최대값: %d\n ", temp);
//	printf("최솟값: %d\n",  temp1);
//	printf("원소의 합: %d\n", hap);
//	printf("평균: %.1f\n", (float)hap / 5);
//}


//#include<stdio.h>
//void main()
//{
//	const int N = 10;
//	int arr[N] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int dice[7] = {};
//	int num = 1;
//	
//	for (int j = 0; j < N; j++) {
//		dice[arr[j]]++;
//	}
//
//	for (int k = 1; k <=6; k++){
//			printf("%d의 횟수: %d\n", k , dice[k]);
//			
//	}
//
//}

//#include<stdio.h>
//int main()
//{
//	char arr[2][3] =
//	{ '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] =
//	{ {1,2,3},{4,5,6} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	int arr2d[5][4] = {
//
//		{ 662, 7, 4, 74 },
//		{ 8, 396, 299, 95 },
//		{ 66, 73, 86, 0 },
//		{ 116, 26, 586, 42 },
//		{ 84, 7, 41, 11 }
//	};
//
//	for (int i = 0; i < 5; i++){
//		for (int j = 0; j < 4; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//}

//#include<stdio.h>
//void main()
//{
//	int temp = 0;
//	int arr2d[3][3] =
//	{
//		{ 2, 4, 6 },
//		{ 8, 10, 12 },
//		{ 14, 16, 18 }
//	};
//
//
//	
//	
//	for (int i = 0; i <=2; i++) {
//		for (int j = 0; j <= 2; j++) {
//			printf("%3d", arr2d[j][i]);
//			
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//void main()
//{
//	int arr5d[5][5];
//	for (int i = 0; i <= 4; i++) {
//		for (int j = 0; j <= 4; j++) {
//			arr5d[i][j] = (i+1) * (j+1);
//			printf("%d ", arr5d[i][j]);
//		}
//		printf("\n");
//	}
//	
//}

