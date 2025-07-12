////#include<stdio.h>
////
////struct STACK {
////	int stack_buff[256];
////	int top;
////};
////
////void stack_push(STACK *a) {
////	int value;
////	printf("stack에 넣을 값을 입력해주세요 : ");
////	scanf("%d", &value);
////	a->stack_buff[a->top++] = value;
////	
////}
////void stack_pop(STACK *b) {
////	if (b->top > 0) 
////		printf("빠져나온값 : %d\n", b->stack_buff[--b->top]);
////	else 
////		printf("stack 이 비어있습니다.\n");
////}
////void stack_print(STACK *s)
////{
////	
////	printf("\n<stack 내부>\n");
////	for (int i = 0; i < s->top; i++)
////	{
////		printf("| %d ", s->stack_buff[i]);
////		
////	}
////	printf("\n\n");
////}
////void stack_print_file(STACK *c)
////{
////	FILE* fp;
////	fp = fopen("text.txt", "w");
////	fprintf(fp, "%d\n", c->top);
////	
////	for (int i = 0; i < c->top; i++)
////	{
////		fprintf(fp, "%d ", c->stack_buff[i]);
////	}
////	fclose(fp);
////}
////
////void stack_scanf_file(STACK *d)
////{
////	FILE* fp;
////
////	fp = fopen("text.txt", "r");
////	if (fp == NULL) {
////		puts("파일을 못찾음");
////		return ;
////	}
////	fscanf(fp, "%d", d->top);
////	for (int i = 0; i < d->top; i++)
////	{	
////		fscanf(fp, "%d", d->stack_buff[i]);	
////	}
////	fclose(fp);
////}
////
////void main()
////{
////	STACK st;
////	st.top = 0;
////	int choice;
////	bool while_flag = true;
////	stack_scanf_file(&st);
////	stack_print(&st);
////
////	while (while_flag)
////	{
////		printf("[stack]\n1.push\n2.pop\n: ");
////		scanf("%d", &choice);
////
////		switch (choice)
////		{
////		case 1:
////			stack_push(&st);
////			break;
////		case 2:
////			stack_pop(&st);
////			break;
////		default:
////			while_flag = false;
////			break;
////		}
////		 stack_print(&st);
////	}
////	
////	stack_print_file(&st);
////	
////}
//
//
//#include<stdio.h>
//#include "CStack.h"
//
//void main()
//{
//	CStack st;
//	st.top = 0;
//	int choice;
//	bool while_flag = true;
//	st.stack_scanf_file();
//	st.stack_print();
//
//	while (while_flag)
//	{
//		printf("[stack]\n1.push\n2.pop\n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			st.stack_push();
//			break;
//		case 2:
//			st.stack_pop();
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		st.stack_print();
//	}
//
//	st.stack_print_file();
//
//}
