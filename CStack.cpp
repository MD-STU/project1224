#include <stdio.h>
#include "CStack.h"

void CStack::stack_push() {
	int value;
	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &value);
	stack_buff[top++] = value;
}

void CStack::stack_pop() {
	if (top > 0)
		printf("빠져나온값 : %d\n", stack_buff[--top]);
	else
		printf("stack 이 비어있습니다.\n");
}

void CStack::stack_print()
{

	printf("\n<stack 내부>\n");
	for (int i = 0; i < top; i++)
	{
		printf("| %d ", stack_buff[i]);

	}
	printf("\n\n");
}

void CStack:: stack_print_file()
{
	FILE* fp;
	fp = fopen("text.txt", "w");
	fprintf(fp, "%d\n", top);

	for (int i = 0; i < top; i++)
	{
		fprintf(fp, "%d ", stack_buff[i]);
	}
	fclose(fp);
}

void CStack:: stack_scanf_file()
{
	FILE* fp;

	fp = fopen("text.txt", "r");
	if (fp == NULL) {
		puts("파일을 못찾음");
		return;
	}
	fscanf(fp, "%d", top);
	for (int i = 0; i < top; i++)
	{
		fscanf(fp, "%d", stack_buff[i]);
	}
	fclose(fp);
}