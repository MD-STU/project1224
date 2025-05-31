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
//			printf("stack�� ���� ���� �Է����ּ��� : ");
//			scanf("%d", &value);
//			stack_buff[top++] = value;
//			break;
//		case 2:
//			if (top > 0)
//				printf("�������°� : %d\n", stack_buff[--top]);
//			else
//				printf("stack �� ����ֽ��ϴ�.\n");
//			break;
//		default:
//			while_flag = false;
//			break;
//		}
//		printf("\n<stack ����>\n");
//		for (int i = 0; i < top; i++) {
//			printf("| %d", stack_buff[i]);
//		}
//		printf("\n\n");
//	}
//}

#include<stdio.h>

int stack_push() {
	int a;
	printf("stack�� ���� ���� �Է����ּ��� : ");
	scanf("%d", &a);
	return a;
}
int stack_pop(int m, int n) {
	if (m > 0) {
		printf("�������°� : %d\n", n);
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
				printf("�������°� : %d\n", stack_buff[--top]);
			else
				printf("stack �� ����ֽ��ϴ�.\n");
			break;
		default:
			while_flag = false;
			break;
		}
		printf("\n<stack ����>\n");
		for (int i = 0; i < top; i++) {
			printf("| %d", stack_buff[i]);
		}
		printf("\n\n");
	}
}