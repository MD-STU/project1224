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

//#include<stdio.h>
//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1번째 숫자를 입력하세요:");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하세요:");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하세요:");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하세요:");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf("합계 ==> %d \n", hap);
//}

//#include<stdio.h>
//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[2]);
//	printf("4번째 숫자를 입력하세요 :");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("합계===>%d \n", hap);
//
//
//}


//#include<stdio.h>
//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%d번째 숫자를 입력하세요 :", i + 1);
//		scanf("%d", &aa[i]);
//
//	}
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//	printf("합계==>%d\n", hap);
//}

//#include<stdio.h>
//void main()
//{
//	int aa[4] = { 100,200,300,400 };
//	int bb[] = { 100,200,300,400 };
//	int cc[4] = { 100,200 };
//	int dd[4] = { 0 };
//	int i;
//
//	for (i = 0; i <= 3; i++) {
//		printf("aa[%d]==>%d\t", i, aa[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i, bb[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==>%d\t", i, cc[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("dd[%d]==>%d\t", i, dd[i]);
//	printf("\n");
//
// }
//
//#include<stdio.h>
//void main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//
//	}
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}

//#include<stdio.h>
//
//void main()
//{
//	int aa[] = { 10,20,30,40,50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d입니다.\n",count);
//}

//#include<stdio.h>
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d} ==> %c\n", i,ss[i]);
//
//	}
//
//	printf("문자열 배열 ss==>%s\n", ss);
//}
//
//#include<stdio.h>
//void main()
//{
//	const int m = 5;
//	int arr5d[m][m];
//	int num =1;
//	for (int i = 0; i <m; i++) {
//		for (int j = 0; j <m; j++) {
//			arr5d[i][j] = num;
//			num++;
//		}
//	}
//	for (int i = 0; i <m; i++) {
//		for (int j = 0; j<m; j++) {
//			printf("%3d ", arr5d[i][j]);
//
//		}
//		printf("\n");
//	}
//
//}
//#include<stdio.h>
//void main()
//{
//	const int m = 5;
//	int arr5d[m][m];
//	int num = 1;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < m; j++) {
//			arr5d[i][j] = num;
//			num++;
//		}
//	}
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = m - 1; j >= 0; j--) {
//			printf("%3d ", arr5d[i][j]);
//
//		}
//		printf("\n");
//	}
//
//}

//#include<stdio.h>
//void main()
//{
//	const int m = 5;
//	int i,j;
//	int arr2[m][m];
//	int arr[m*m];
//	int num=1;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < m; j++) {
//			arr2[i][j] = num;
//			num++;
//		}
//	}
//	num = 0;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < m; j++) {
//			arr[num] = arr2[i][j];
//			num++;
//		}
//	}
//
//	for (i = 0; i < m * m; i++) {
//		printf(" %d", arr[i]);
//	}
//}
//
//#include<stdio.h>
//void main()
//{
//	int n,i,j;
//	printf("10미만의 숫자를 입력하시오:");
//
//	scanf("%d", &n);
//	
//	int a[10];
//	
//	for (i = 0; i < n; i++) {
//		printf("숫자를 입력하시오:");
//		scanf("%d", &a[i]);
//	}
//	
//	//[][]
//	char arr2[10][10] = {};
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < a[i]; j++) {
//			arr2[j][i] = '*';
//		}
//		
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			if (arr2[i][j]==0) printf(" ");
//			else printf("%c",arr2[i][j]);
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//void main()
//{
//	const int N = 10;
//	int arr2[N][N] = {};
//	int num = 1;
//	int count = N;
//	int x = -1, y = 0;
//
//	int a = 1;
//	while(1)
//	{	
//		for (int j = 0; j < count; j++) {
//			x+=a;
//			arr2[y][x] = num;
//			num++;
//		}//x=4
//		count--;
//
//		if (count == 0) { break; }
//		for (int i = 0; i < count; i++) {
//			y+=a;
//			arr2[y][x] = num;
//			num++;
//		}
//		a *= -1;
//		
//
//	}
//
//	//{
//
//	//	for (int j = 0; j < count; j++) {
//	//		x++;
//	//		arr2[y][x] = num;
//	//		num++;
//	//	}//x=4
//	//	count--;
//	//	for (int i = 0; i < count; i++) {
//	//		y++;
//	//		arr2[y][x] = num;
//	//		num++;
//	//	}//y=4
//
//
//
//
//	//	for (int j = 0; j < count; j++) {
//	//		x--;
//	//		arr2[y][x] = num;
//	//		num++;
//
//	//	}
//	//	count--;
//	//	for (int i = 0; i < count; i++) {
//	//		y--;
//	//		arr2[y][x] = num;
//	//		num++;
//	//	}
//
//	//}
//
//	//for (int j = 0; j < count; j++) {
//	//	x++;
//	//	arr2[y][x] = num;
//	//	num++;
//	//}
//
//
//
//
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			printf("%3d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}


//#include<stdio.h>
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", pB);
//	printf("b = %x\n\n", pB);
//}

//#include<stdio.h>
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pA의 크기 : %d byte\n", sizeof(pC));
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//}

//#include<stdio.h>
//void main()
//{
//	char str[] = "programming";
//	char *ptr1, * ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d 입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n\n", *(ptr1 + 3));
//}

//#include<stdio.h>
//int main()
//{   
//    int n;
//    const int a = 100;
//    scanf("%d", &n);
//    int arr1[a] = {};
//    int count = 0;
//    int num;
//    
//    for (int i = 0; i < n; i++) {
//       
//        scanf("%d", &arr1[i]);
//        
//     }
//    
//    scanf("%d", &num);
//    for (int i = 0; i < n; i++) {
//        if (num == arr1[i])
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{	
//	int N, X;
//	int a[10000];
//	scanf("%d %d", &N, &X);
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < N; i++) {
//		if (X > a[i]) {
//			printf("%d ", a[i]);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	const int N = 9;
//	int arr1[N];
//	int num =1;
//	int max =0;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < N; i++) {
//		if ( max < arr1[i]) {
//			max = arr1[i];
//			num  = i+1 ;
//
//		}
//	}
//	printf("%d\n", max);
//	printf("%d", num);
//}

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	int arr[100];
//	int x,y;
//	int tool =0 ;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a; i++) {
//		arr[i] = i+1;
//	}
//	for (int i = 0; i < b; i++) {
//		scanf("%d %d", &x, &y);
//		tool = arr[y-1];
//		arr[y-1] = arr[x-1];
//		arr[x-1] = tool ;
//	}
//	for (int i = 0; i < a; i++) {
//		printf("%d ", arr[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	const int N = 31;
//	int arr[N] = {};
//	arr[0] = 1;
//	int a;
//	for (int i = 1; i <= 28; i++) {
//		scanf("%d", &a);
//		arr[a] = 1;
//	}
//	for (int i = 1; i <= 30; i++) {
//		if (arr[i] == 0) {
//			printf("%d\n", i);
//		}
//	}
//	
//}

//#include<stdio.h>
//int main()
//{
//	int b[42] = {};
//	int a[10];
//	int count = 0;
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		b[a[i] % 42]++;
//		
//	}
//	for (int i = 0; i < 42; i++) {
//		if (b[i] > 0) {
//			count++;
//		}
//
//	}
//	printf("%d", count);
//}
//
//#include<stdio.h>
//int main()
//{
//	int N;
//	int a[1000];
//	float hap = 0;
//	int max = 0;
//	float c;
//	scanf("%d", &N);
//	
//
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &a[i]);
//		
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (max < a[i]) {
//			max = a[i];
//			
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		c = (float)a[i] / max * 100;
//		hap = hap +c;
//	
//	}
//	printf("%.2f", hap/N);
//	
//}

//#include<stdio.h>
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}


