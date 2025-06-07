
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int a[5];
//	for (int i = 0; i < 5; i++) {
//		a[i] = rand() % 100 + 1;
//		printf("추출 숫자 ==> %d\n", a[i]);
//	}
//	FILE* fp;
//	fp = fopen("ex11.txt", "w");
//	for (int i = 0; i < 5; i++) {
//		fprintf(fp, "추출 숫자 ==> %d\n", a[i]);
//	}
//	fclose(fp);
//	return 0;

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("example.txt", "r");
//	int line = 1;
//	while (1) {
//		
//		
//		
//		char*file = fgets(str,100, rfp);
//		
//		if (*file==EOF) {
//			break;
//		}
//
//		printf("%d : %s",line, file);
//		line++;
//	}
//	fclose(rfp);
//	return 0;
//}
// 


//#include<stdio.h>
//#define MAXSIZE 10
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {
//	front = rear = 0;
//}
//
//void clear_queue(void) {
//	front = rear;
//}
//
//int put(int val) {
//	if ((rear + 1) % MAXSIZE == front) {
//		printf("   Queue Overflow\n");
//		return -1;
//	}
//
//	queue[rear] = val;
//	rear = ++rear % MAXSIZE;
//	return val;
//}
//
//int get(void) {
//	int i;
//
//	if (front == rear) {
//		printf("   Queue Underflow\n");
//		return(-1);
//	}
//
//	i = queue[front];
//	front = ++front % MAXSIZE;
//	return i;
//}
//void print_queue(void) {
//	int i;
//	printf("  Queue From Front------> To Rear \n");
//	for (i = front; i != rear; i = ++i % MAXSIZE)
//		printf("%-6d", queue[i]);
//	printf("\n");
//}
//void main(void) {
//	int i;
//
//	init_queue();
//
//	printf("\n Put 5, 4, 7, 8, 2, 1\n");
//	put(5);
//	put(4);
//	put(7);
//	put(8);
//	put(2);
//	put(1);
//	print_queue();
//
//
//
//	printf("\n Get");
//	i = get();
//	print_queue();
//	printf("   get value is %d\n", i);
//
//	printf("\n Put 3, 2, 5, 7");
//	put(3);
//	put(2);
//	put(5);
//	put(7);
//	print_queue();
//
//
//
//	printf("\n Now queue is full,  put 3\n");
//	put(3);
//	print_queue();
//
//	printf("\n Initialize Queue\n");
//	clear_queue();
//	print_queue();
//
//	printf("\n Now queue is empty, get\n");
//	i = get();
//	print_queue();
//	printf("   get value is %d\n", i);
//}





#include<stdio.h>
#define MAXSIZE 10

int queue[MAXSIZE];
int front, rear; 

void init_queue(void) {
	front = rear = 0;
}

void clear_queue(void) {
	front = rear;
}

int put(int val) {
	if ((rear + 1) % MAXSIZE == front) {
		printf("   Queue Overflow\n");
		return -1;
	}

	queue[rear] = val;
	rear = ++rear % MAXSIZE;
	return val;
}

int get(void) {
	int i;

	if (front == rear) {
		printf("   Queue Underflow\n");
		return(-1);
	}

	i = queue[front];
	front = ++front % MAXSIZE;
	return i;
}
void print_queue(void) {
	int i;
	printf("  Queue From Front------> To Rear \n");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}
int road() {
	FILE* fp;
	int i;
	fp = fopen("ax.txt", "r");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		fprintf(fp, " %d", queue[i]);
	print_queue();
	fclose(fp);
	return 0;
}

int save() {
	FILE* fp;
	int i;
	fp = fopen("ax.txt", "w");
	fscanf(fp,"%d",)
	for (i = front; i != rear; i = ++i % MAXSIZE)
		fprintf(fp," %d", queue[i]);
	fclose(fp);
	return 0;
}

void main(void) {
	init_queue();
	int num;
	int val;
	int a = 1;
	road();
	while (a) {
		printf("enqueue : 1, dequeue : 2, clear : 3, 끝내려면 다를거\n\n ");
		scanf("%d", &num);

		switch (num) {
		case 1: 
			printf("값을 입력하시오: ");
			scanf("%d", &val);
			put(val);
			break;
		
		case 2: 
			get();
			break;
		
		case 3:
			clear_queue();
			break;
		default:
			a--;
			break;
		}
		save();

		
		print_queue();
	}
}
