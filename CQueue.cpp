#include<stdio.h>
#include "CQueue.h"

void CQueue::init_queue(void) {
	front = rear = 0;
}

void CQueue:: clear_queue(void) {
	front = rear;
}

int CQueue:: put(int val) {
	if ((rear + 1) % MAXSIZE == front) {
		printf("   Queue Overflow\n");
		return -1;
	}

	queue[rear] = val;
	rear = ++rear % MAXSIZE;
	return val;
}
int CQueue:: get(void) {
	int i;

	if (front == rear) {
		printf("   Queue Underflow\n");
		return(-1);
	}

	i = queue[front];
	front = ++front % MAXSIZE;
	return i;
}

void CQueue:: print_queue(void) {
	int i;
	printf("  Queue From Front------> To Rear \n");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
	printf("\n");
}

void CQueue:: queue_printf_file()
{
	FILE* wfp;
	wfp = fopen("text-q.txt", "w");
	fprintf(wfp, "%d %d ", front, rear);
	for (int i = front; i != rear; i = ++i % MAXSIZE)
		printf("%d ", queue[i]);
	fclose(wfp);
}
void CQueue::queue_scanf_file()
{

	FILE* rfp;
	rfp = fopen("text-q.txt", "r");
	fscanf(rfp, "%d %d", &front, &rear);
	for (int i = front; i != rear; i = ++i % MAXSIZE)
		fscanf(rfp, "%d", &queue[i]);
	fclose(rfp);

}