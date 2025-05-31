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

#include<stdio.h>

int stack_push() {
	int a;
	printf("stack에 넣을 값을 입력해주세요 : ");
	scanf("%d", &a);
	return a;
}
int stack_pop(int m, int n) {
	if (m > 0) {
		printf("빠져나온값 : %d\n", n);
	}

}

void main()
{
	int stack_buff[256];
	int top = 0, value, choice;
	bool while_flag = true;

	while (while_flag)
	{
		printf("[stack]\n1.push\n2.pop\n: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			stack_buff[top++] = stack_push();
			break;
		case 2:
			stack_pop(top,stack_buff[top]);
			if (top > 0)
				printf("빠져나온값 : %d\n", stack_buff[--top]);
			else
				printf("stack 이 비어있습니다.\n");
			break;
		default:
			while_flag = false;
			break;
		}
		printf("\n<stack 내부>\n");
		for (int i = 0; i < top; i++) {
			printf("| %d", stack_buff[i]);
		}
		printf("\n\n");
	}
}