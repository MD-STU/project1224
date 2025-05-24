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
//	printf("입력받을 파일의 이름을 입력하세요 :");
//	scanf("%s%c", name1, &enter);
//	printf("출력받을 파일의 이름을 입력하세요:");
//	gets_s(name2);
//
//	src = fopen(name1, "rb");
//	dst = fopen(name2, "wb");
//
//	if (src == NULL || dst == NULL) {
//		puts("파일을 못 찾음");
//		return -1;
//	}
//	while (true) {
//		readLen = fread(buff, 1, BUFF_SIZE,src);
//		if (readLen < BUFF_SIZE) {
//			if (feof(src) != 0) {
//				fwrite(buff, 1, readLen, dst);
//				puts("파일 복사 완료");
//				break;
//			}
//			else {
//				printf("파일 복사 실패");
//				return -1;
//			}
//		}
//		fwrite(buff, 1, BUFF_SIZE, dst);
//	}
//	if (fclose(src) != 0 || fclose(dst) != 0) {
//		puts("파일을 닫지 못했습니다.");
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
//	fprintf(fp, "폭맞추기\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//	
//	fprintf(fp, "오른쪽정렬\n", i);
//	fprintf(fp, "i: %5d \n", i);
//	fprintf(fp, "왼쪽정렬\n", i);
//	fprintf(fp, "i: %-5d끝\n\n", i);
//
//	fprintf(fp, "#문자의 사용\n");
//	fprintf(fp, "i: %x \n", i);
//	fprintf(fp, "j: %x\n\n", j);
//
//	fprintf(fp, "부호붙이기\n");
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
//	printf("첫번째 파일의 내용을 쓰시오. :");
//	scanf("%s", cont1);
//	printf("두번째 파일의 내용을 쓰시오. :");
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
//	printf("같은 수가 %d개 존재합니다.", num);
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
//	printf("내 목숨 :");
//	for (int i = 0; i < my;i++) {
//		printf("■");
//	for (int i = my;i < MAXENERGY;i++) {
//		printf("□");
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
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("정답 : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("게임 승리!\n");
//			break;
//		}
//		printf("숫자를 맞춰보세요 :");
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
	printf("내 목숨 : ");
	for (int i = 0; i < my;i++) {
		printf("■ ");	
	}
	for (int i = my;i < MAXENERGY;i++) {
		printf("□ ");
	}
	printf("\n");
}
int Gameover(int e,int ans) {
	if (e == 0) {
		printf("게임 오버...\n");
		printf("정답 : %d", ans);
		return 0;
	}
	return 1;
}

int Gamewin(int n, int ans) {
	if (n == ans) {
		printf("게임 승리!\n");
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
		printf("정답 : %s", num);
		
		printf("숫자를 맞춰보세요 :");
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