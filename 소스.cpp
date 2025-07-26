//#include<stdio.h>
//void main()
//{
//	int a[5];
//	int tmp;
//	int temp;
//	for (int i = 0; i <= 4; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	
//	for (int j = 0; j <= 3; j++) {
//		tmp = j;
//		for (int i = j; i <= 4; i++) {
//			if (a[tmp] > a[i]) {
//				tmp = i;
//			}
//		}
//		temp = a[tmp];
//		a[tmp] = a[j];
//		a[j] = temp;
//	}
//		
//	
//	for (int i = 0; i <= 4; i++) {
//		printf("%d", a[i]);
//	}
//}

//#include<stdio.h>
//void main()
//{
//	int a[5];
//	int k;
//	int temp;
//
//	for (int i = 0; i <= 4; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	for (int i = 4; i >= 0; i--) {
//
//		for (int j = 0; j <= i-1; j++) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <= 4; i++) {
//		printf("%d", a[i]);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int a[100];
//	scanf("%d", &n);
//	a[0] = 1;
//	a[1] = 1;
//
//	for (int i = 0; i < n-2; i++) {
//		a[i + 2] = a[i] + a[i + 1];
//	}
//	for (int i = 0; i < n ; i++) {
//		printf("%d\n", a[i]);
//	}
//}

//#include<stdio.h>
//int fibo(int a,int b,int n)
//{
//	int f = a + b;
//	if (n == 0) {
//		
//		return f;
//	}
//	
//	n--;
//	fibo(b, f,n);
//}
//void main()
//{
//	int n;
//	int a[100];
//	scanf("%d", &n);
//	a[0] = 1;
//	a[1] = 1;
//	int f = fibo(a[0], a[1], n-2);
//  printf("%d",f);
//}

//#include<stdio.h>
//int main()
//{
//  int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i <n/2; i++) {
//		
//		for (int j = n/2-i; j > 0; j--) {
//			printf(" ");
//
//		}
//		for (int k = 0; k < 2*i+1; k++) {
//			printf("*");
//		}
//
//
//		printf("\n");
//	}
//	
//	if (n % 2 != 0) {
//		for (int i = 1; i <= n; i++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (int i = n/2; i > 0; i--) {
//		for (int j = i; j<=n/2 ; j++) {
//			printf(" ");
//
//		}
//		for(int k = 2*i - 1; k >0; k--) {
//			printf("*");
//		}
//		
//		
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//#include<stdlib.h>
//
//void main()
//{
//	int** p;
//	
//	
//	p = (int**)malloc(sizeof(int*) * 10);
//	for (int i = 1; i <= 10; i++) {
//		p[i] = (int*)malloc(sizeof(int) * 10);
//		for (int j = 1; j <= 10; j++) {
//			p[i][j] = (i-1)*10+j;
//			printf("%3d\n", p[i][j]);
//		}
//		free(p[i]);
//	}
//	free(p);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int toi(char *a)
//{
//	int size = strlen(a);
//	int hap =0;
//	int j = 0;
//	
//	for (int i = size-1; i >=0; i--)
//	{	
//		hap = hap + pow(10,i) * (a[j]-'0');
//		j++;
//	}
//	return hap;
//}
//void main()
//{
//	char a[10];
//	printf("숫자를 입력하시오 :");
//	scanf("%s", a);
//	int num = toi(a);
//	printf("%d", num);
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int change(char* p,char*a)
//{
//	
//}
//
//void main()
//{
//	char a[50] = "I like apple, and you?";
//	char input[10];
//	scanf("%s", input);
//	change(input);
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = a; i <= b; i++)
//	{
//		int k = pow(i, 2);
//		printf("%3d", k);
//	}
//}
//2진수만 구현함
//#include<stdio.h>
//
//int binary(int i,int num,int*a)
//{
//	a[i] = num % 2;
//	i++;
//	if ((num / 2) == 1) {
//		a[i] = num / 2;
//		return i;
//	}
//	num = num / 2;
//	binary(i, num,a);
//}
//
//int main()
//{
//	int num;
//	int i = 0;
//	int a[100];
//	scanf("%d", &num);
//	int k = binary(i, num, a);
//	for (int j = k; j >= 0; j--)
//	{
//		printf("%d", a[j]);
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

int change(char* a,int i)
{
	if (0 <= a[i] - 'a' && a[i] - 'a' <= 26)
	{
		a[i] = a[i] - 32;
	}
	
	if (a[i] == NULL)
	{
		return 0;
	}
	i++;
	change(a, i);
}

void main()
{
	FILE* fp;
	FILE* fc;
	int i = 0;
	char a[11];
	fp = fopen("a.txt", "r");
	fscanf(fp, "%s", a);
	fc = fopen("b.txt", "w");
	change(a,i);

	fprintf(fc, "%s", a);

	fclose(fp);
	fclose(fc);
}

//#include<stdio.h>
//#include<time.h>
//void in_day_data(struct tm *tar, int yy, int mm, int dd, int H, int M, int S)
//{
//	tar->tm_sec = S;
//	tar->tm_min = M;
//	tar->tm_hour = H;
//	tar->tm_mday = dd;
//	tar->tm_mon = mm - 1;
//	tar->tm_year = yy - 1900;
//}
//
//int main(void)
//{
//	struct tm day1, day2, day3;
//	in_day_data(&day1, 2005, 12, 13, 0, 0, 0);
//	in_day_data(&day2, 2025, 7, 26, 0, 0, 0);
//	time_t t1 = mktime(&day1);
//	time_t t2 = mktime(&day2);
//	time_t diff = t2-t1;
//	printf("%lld", diff);
//
//}

//#include<stdio.h>
//struct num {
//	int a;
//	int b;
//};
//void tp(struct num *m)
//{
//	int temp;
//	temp = m->a;
//	m->a = m->b;
//	m->b = temp;
//}
//
//int main()
//{
//	struct num m;
//	scanf("%d", m.a);
//	scanf("%d", m.b);
//	printf("%d %d", m->a, m->b);
//}


//#include<stdio.h>
//
//void tp(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	scanf("%d", &y);
//
//	tp(&x,&y);
//
//	printf("%d %d",x,y );
//}


//#include<stdio.h>
//
//void tp(int &a, int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	scanf("%d", &y);
//
//	tp(x, y);
//
//	printf("%d %d", x, y);
//}
