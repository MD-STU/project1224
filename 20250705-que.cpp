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

void queue_printf_file()
{
	FILE* wfp;
	wfp = fopen("text-q.txt", "w");
	fprintf(wfp, "%d %d", front, rear);
	for (int i = front; i <= rear; i++) {
		fprintf(wfp, "%d", queue[i]);
	}
	fclose(wfp);
}
int queue_scanf_file()
{
	FILE* rfp;
	rfp = fopen("text-q.txt", "r");

}

void main(void) {
	
	int i;
	bool while_flag = true;
	int choice;
	int value;

	init_queue();

	
	while (while_flag) {
		printf("[queue]\n1.Get\n2.Put\n3.claer_queue\n:");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			i = get();
			if (i != -1)
				printf("   get value is %d\n", i);
			break;
		case 2:
			printf("값을 입력하시오 :");
			scanf("%d", &value);
			i = put(value);
			if (i == -1)
				printf("\n Now queue is full,  put 3\n");
			break;
		case 3:
			clear_queue();
			printf("\n Now queue is empty, get\n");
			break;
		default:
			while_flag = false;
			break;
		}

		print_queue();
	}
	
	
	/*
	int i;

	init_queue();

	printf("\n Put 5, 4, 7, 8, 2, 1\n");
	put(5);
	put(4);
	put(7);
	put(8);
	put(2);
	put(1);
	print_queue();



	printf("\n Get");
	i = get();
	print_queue();
	printf("   get value is %d\n", i);

	printf("\n Put 3, 2, 5, 7");
	put(3);
	put(2);
	put(5);
	put(7);
	print_queue();



	printf("\n Now queue is full,  put 3\n");
	put(3);
	print_queue();

	printf("\n Initialize Queue\n");
	clear_queue();
	print_queue();

	printf("\n Now queue is empty, get\n");
	i = get();
	print_queue();
	printf("   get value is %d\n", i);*/
}