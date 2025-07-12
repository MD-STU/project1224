#include <stdio.h>
#include "CStack.h"

void CStack::stack_push() {
	int value;
	printf("stack�� ���� ���� �Է����ּ��� : ");
	scanf("%d", &value);
	stack_buff[top++] = value;
}

void CStack::stack_pop() {
	if (top > 0)
		printf("�������°� : %d\n", stack_buff[--top]);
	else
		printf("stack �� ����ֽ��ϴ�.\n");
}

void CStack::stack_print()
{

	printf("\n<stack ����>\n");
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
		puts("������ ��ã��");
		return;
	}
	fscanf(fp, "%d", top);
	for (int i = 0; i < top; i++)
	{
		fscanf(fp, "%d", stack_buff[i]);
	}
	fclose(fp);
}