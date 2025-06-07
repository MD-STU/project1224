//#include<stdio.h>
//
//
//void main()
//{
//	int stack_buff[256];
//	int top = 0, value, choice;
//	bool while_flag = true;
//
//	while (while_flag)
//	{
//		printf("[stack]\n1.push\n2.pop\n: ");
//		scanf("%d", &choice);
//		
//		switch (choice)
//		{
//		case 1:
//			printf("stack에 넣을 값을 입력해주세요 : ");
//			scanf("%d", &value);
//			stack_buff[top++] = value;
//			break;
//		case 2:
//			if (top > 0)
//				printf("빠져나온값 : %d\n", stack_buff[--top]);
//			else
//				printf("stack 이 비어있습니다.\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		printf("\n<stack 내부>\n");
//		for (int i = 0; i < top; i++) {
//			printf("| %d", stack_buff[i]);
//		}
//		printf("\n\n");
//	}
//}

//#include<stdio.h>
//FILE* fp;
//int stack_push(int* stack_buff,int k) {
//	int value;
//	printf("stack에 넣을 값을 입력해주세요 : ");
//	scanf("%d", &value);
//	stack_buff[k++] = value;
//	return k;
//}
//int stack_pop(int*stack_buff, int top) {
//	
//	if (top > 0) {
//		printf("빠져나온값 : %d\n", stack_buff[--top]);
//	}
//	else
//		printf("stack 이 비어있습니다.\n");
//	return top;
//}
//int print_stack(int*stack_buff,int top) {
//	printf("\n<stack 내부>\n");
//	for (int i = 0; i < top; i++) {
//		printf("| %d", stack_buff[i]);
//	}
//	printf("\n\n");
//	return 0;
//}
//
//int road(int*stack_buff, int top) {
//	fp = fopen("ex.txt", "r");
//	fscanf(fp, "%d", &top);
//	
//	
//	for (int i = 0; i < top; i++) {
//		fscanf(fp, "%d", &stack_buff[i]);
//	
//	}
//	fclose(fp);
//	return top;
//}
//
//int save(int* stack_buff, int top) {
//	fp = fopen("ex.txt", "w");
//	fprintf(fp,"%d ",top);
//	for (int i = 0; i < top; i++) {
//		fprintf(fp," %d", stack_buff[i]);
//	}
//	
//	fclose(fp);
//	return 0;
//}
//
//void main()
//{
//	int stack_buff[256];
//	int top = 0; 
//	int value, choice;
//	bool while_flag = true;
//	
//	top = road(stack_buff, top);
//	print_stack(stack_buff, top);
//	while (while_flag)
//	{	
//		
//		
//		printf("[stack]\n1.push\n2.pop\n: ");
//		scanf("%d", &choice);
//
//		switch (choice)
//		{
//		case 1:
//			top = stack_push(stack_buff,top);
//			break;
//		case 2:
//			top = stack_pop( stack_buff,top);
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		print_stack(stack_buff,top);
//		
//		
//	}
//	save(stack_buff, top);
//
//	
//}


