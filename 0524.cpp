//#include<stdio.h>
//#include<stdlib.h>
//
//#define BUFF_SIZE 30
//
//int main() {
//	char buff[BUFF_SIZE];
//	int readLen = 0;
//	FILE* src, * dst;
//	char name1[100], name2[100], enter;
//
//	printf("�Է¹��� ������ �̸��� �Է��ϼ��� :");
//	scanf("%s%c", name1, &enter);
//	printf("��¹��� ������ �̸��� �Է��ϼ���:");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("������ �� ã��");
//		return -1;
//	}
//	while (true) {
//		readLen = fread(buff, 1, BUFF_SIZE,src);
//		if (readLen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readLen, dst);
//				puts("���� ���� �Ϸ�");
//				break;
//			}
//			else {
//				printf("���� ���� ����");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("������ ���� ���߽��ϴ�.");
//		return -1;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	FILE* fp = fopen("Coding.txt","w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "�����߱�\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//	
//	fprintf(fp, "����������\n", i);
//	fprintf(fp, "i: %5d \n", i);
//	fprintf(fp, "��������\n", i);
//	fprintf(fp, "i: %-5d��\n\n", i);
//
//	fprintf(fp, "#������ ���\n");
//	fprintf(fp, "i: %x \n", i);
//	fprintf(fp, "j: %x\n\n", j);
//
//	fprintf(fp, "��ȣ���̱�\n");
//	fprintf(fp, "i: %+d, j: %+d \n", i, j);
//
//	fclose(fp);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main() {
//	FILE* fp = fopen("hello.txt", "w");
//	fprintf(fp, "HelloWorld");
//	fclose(fp);
//}

//#include<stdio.h>
//
//int main() {
//	FILE* fp = fopen("hello.txt", "w");
//	FILE* pFile = fopen("bye.txt", "w");
//	fprintf(fp, "HelloWorld");
//	fprintf(pFile, "byeworld");
//	fclose(fp);
//	fclose(pFile);
//}

//#include<stdio.h>
//#include<string.h>
//int main() {
//	FILE* fp1 ,*fp2;
//	char cont1[100], cont2[100];
//	int len;
//	int num = 0;
//	fp1 = fopen("hello.txt", "w");
//	fp2 = fopen("bye.txt", "w");
//	
//	printf("ù��° ������ ������ ���ÿ�. :");
//	scanf("%s", cont1);
//	printf("�ι�° ������ ������ ���ÿ�. :");
//	scanf("%s", cont2);
//
//	fprintf(fp1, cont1);
//	fprintf(fp2, cont2);
//	
//	fclose(fp1);
//	fclose(fp2);
//
//	fp1 = fopen("hello.txt", "r");
//	fp2 = fopen("bye.txt", "r");
//
//
//	fscanf(fp1, cont1);
//	fscanf(fp2, cont2);
//	printf("%s\n", cont1);
//	printf("%s", cont2);
//
//	if (strlen(cont1) > strlen(cont2)) {
//		len = strlen(cont1);
//	}
//	else {
//		len = strlen(cont2);
//	}
//	for (int i = 0;i < len;i++) {
//		if (cont1[i] == cont2[i]) {
//			num += 1;
//		}
//	}
//	printf("���� ���� %d�� �����մϴ�.", num);
//	fclose(fp1);
//	fclose(fp2);
//
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("�� ��� :");
//	for (int i = 0; i < my;i++) {
//		printf("��");
//	for (int i = my;i < MAXENERGY;i++) {
//		printf("��");
//		}
//	printf("\n");
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char num[4] = "___", tmp[4];
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (!energy) {
//			printf("���� ����...\n");
//			printf("���� : %s", tmp);
//			break;
//		}
//		printf("���� : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("���� �¸�!\n");
//			break;
//		}
//		printf("���ڸ� ���纸���� :");
//		scanf("%c", &input);
//
//		bool check = true;
//		for (int i = 0;i < 3;i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check) energy--;
//	}
//	return 0;
//	
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAXENERGY 6

void printenergy(int my)
{
	printf("�� ��� : ");
	for (int i = 0; i < my;i++) {
		printf("�� ");	
	}
	for (int i = my;i < MAXENERGY;i++) {
		printf("�� ");
	}
	printf("\n");
}
int Gameover(int e,int ans) {
	if (e == 0) {
		printf("���� ����...\n");
		printf("���� : %d", ans);
		return 0;
	}
	return 1;
}

int Gamewin(int n, int ans) {
	if (n == ans) {
		printf("���� �¸�!\n");
		return 0;
	}
	return 1;
}

int main()
{
	srand((unsigned int)time(NULL));
	char num[4] = "___", tmp[4];
	int answer = rand() % 1000;
	sprintf(tmp, "%03d", answer);
	int energy = MAXENERGY;
	char input;
	int k = 1;
	while (1) {
		printenergy(energy);
		k = Gameover(energy, answer);
		k = Gamewin(atoi(num),answer);
		if (k == 0) {
			break;
		}
		printf("���� : %s", num);
		
		printf("���ڸ� ���纸���� :");
		scanf("%c ", &input);

		bool check = true;
		for (int i = 0;i < 3;i++) {
			if (tmp[i] == input) {
				num[i] = input;
				check = false;
			}
		}
		if (check) energy--;
	}
	return 0;

}