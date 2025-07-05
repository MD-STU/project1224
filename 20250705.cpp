//#include<stdio.h>
//
//
//int stack_push(int top, int stack_buff[]) {
//	int value;
//	printf("stack에 넣을 값을 입력해주세요 : ");
//	scanf("%d", &value);
//	stack_buff[top++] = value;
//	return top;
//}
//int stack_pop(int top, int stack_buff[]) {
//	if (top > 0) 
//		printf("빠져나온값 : %d\n", stack_buff[--top]);
//	else 
//		printf("stack 이 비어있습니다.\n");
//	return top;
//}
//void stack_print(int top, int* stack_buff)
//{
//	
//	printf("\n<stack 내부>\n");
//	for (int i = 0; i < top; i++)
//	{
//		printf("| %d ", stack_buff[i]);
//		
//	}
//	printf("\n\n");
//}
//void stack_print_file(int top, int* stack_buff)
//{
//	FILE* fp;
//	fp = fopen("text.txt", "w");
//	fprintf(fp, "%d\n", top);
//	
//	for (int i = 0; i < top; i++)
//	{
//		fprintf(fp, "%d ", stack_buff[i]);
//	}
//	fclose(fp);
//}
//
//int stack_scanf_file(int* stack_buff)
//{
//	FILE* fp;
//	int top;
//
//	fp = fopen("text.txt", "r");
//	if (fp == NULL) {
//		puts("파일을 못찾음");
//		return 0;
//	}
//	fscanf(fp, "%d", &top);
//	for (int i = 0; i < top; i++)
//	{	
//		fscanf(fp, "%d", &stack_buff[i]);	
//	}
//	fclose(fp);
//	return top;
//}
//
//void main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//	top = stack_scanf_file(stack_buff);
//	stack_print(top,stack_buff);
//
//	while (while_flag)
//	{
//		printf("[stack]\n1.push\n2.pop\n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			top = stack_push(top,stack_buff);
//			break;
//		case 2:
//			top = stack_pop(top, stack_buff);
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		 stack_print(top,stack_buff);
//	}
//	
//	stack_print_file(top, stack_buff);
//	
//}
//
